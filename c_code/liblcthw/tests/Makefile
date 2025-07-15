# 目标文件和库文件定义
BUILD_DIR = build
LIBRARY = $(BUILD_DIR)/liblcthw.a
SHARED_LIB = $(BUILD_DIR)/liblcthw.so
LIST_OBJ = src/lcthw/list.o
LIST_ALGOS_OBJ = src/lcthw/list_algos.o
TESTS = tests/list_tests tests/list_algos_tests

# 编译器和编译选项
CC = cc
CFLAGS = -g -O2 -Wall -Wextra -Isrc -rdynamic -DNDEBUG $(OPTFLAGS)
LIBS = -ldl $(OPTLIBS)
PREFIX ?= /usr/local

SOURCES = $(wildcard src/**/*.c src/*.c)
OBJECTS = $(patsubst %.c,%.o,$(SOURCES))

TEST_SRC = $(wildcard tests/*_tests.c)
TESTS = $(patsubst %.c,%,$(TEST_SRC))

TARGET = build/liblcthw.a
SO_TARGET = $(patsubst %.a,%.so,$(TARGET))

# 默认目标
all: $(TARGET) $(SO_TARGET) tests

dev: CFLAGS = -g -Wall -Isrc -Wall -Wextra $(OPTFLAGS)
dev: all

$(TARGET): CFLAGS += -fPIC
$(TARGET): build $(OBJECTS)
	ar rcs $@ $(OBJECTS)
	ranlib $@

$(SO_TARGET): $(TARGET) $(OBJECTS)
	$(CC) -shared -o $@ $(OBJECTS)

build:
	@mkdir -p build
	@mkdir -p bin

# 编译测试程序
tests/list_tests:  tests/list_tests.c $(LIBRARY)
	$(CC) $(CFLAGS) $< -o $@ $(TARGET) $(LIBS)

tests/list_algos_tests: tests/list_algos_tests.c $(LIBRARY) 
	$(CC) $(CFLAGS) $< -o $@ $(TARGET) $(LIBS)

# 运行测试脚本
run_tests: $(TESTS)
	sh ./tests/runtests.sh

# 定义伪目标
.PHONY: all clean run_tests tests dev

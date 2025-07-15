CFLAGS=-g -O2 -Wall -Wextra -Isrc -rdynamic -DNDEBUG $(OPTFLAGS)
LIBS=-ldl $(OPTLIBS)
PREFIX?=/usr/local

SOURCES=$(wildcard src/**/*.c src/*.c)
OBJECTS=$(patsubst %.c,%.o,$(SOURCES))

TEST_SRC=$(wildcard tests/*_tests.c)
TESTS=$(patsubst %.c,%,$(TEST_SRC))

TARGET=build/liblcthw.a
SO_TARGET=$(patsubst %.a,%.so,$(TARGET))

# The Target Build
all: $(TARGET) $(SO_TARGET) tests

dev: CFLAGS=-g -Wall -Isrc -Wall -Wextra $(OPTFLAGS)
dev: all

# 修改：为所有对象文件添加 -fPIC
$(OBJECTS): CFLAGS += -fPIC

$(TARGET): build $(OBJECTS)
	ar rcs $@ $(OBJECTS)
	ranlib $@

$(SO_TARGET): $(TARGET) $(OBJECTS)
	$(CC) -shared -o $@ $(OBJECTS)

build:
	@mkdir -p build
	@mkdir -p bin

# The Unit Tests
.PHONY: tests
tests: CFLAGS += $(TARGET)
tests: $(TESTS)
	sh ./tests/runtests.sh

valgrind:
	VALGRIND="valgrind --log-file=/tmp/valgrind-%p.log" $(MAKE)

# The Cleaner
clean:
	rm -rf build $(OBJECTS) $(TESTS)
	rm -f tests/tests.log
	find . -name "*.gc*" -exec rm {} \;
	rm -rf `find . -name "*.dSYM" -print`

# The Install
install: all
	install -d $(DESTDIR)/$(PREFIX)/lib/
	install $(TARGET) $(DESTDIR)/$(PREFIX)/lib/

# The Checker
BADFUNCS='[^_.>a-zA-Z0-9](str(n?cpy|n?cat|xfrm|n?dup|str|pbrk|tok|_)|stpn?cpy|a?sn?printf|byte_)'
check:
	@echo Files with potentially dangerous functions.
	@egrep $(BADFUNCS) $(SOURCES) || true

# Individual test targets
tests/list_tests: tests/list_tests.c $(TARGET)
	$(CC) $(CFLAGS) $< -o $@ $(TARGET) $(LIBS)

tests/stack_tests: tests/stack_tests.c $(TARGET)
	$(CC) $(CFLAGS) $< -o $@ $(TARGET) $(LIBS)

# Pattern rule for all test files
tests/%_tests: tests/%_tests.c $(TARGET)
	$(CC) $(CFLAGS) $< -o $@ $(TARGET) $(LIBS)

# Compile individual object files with -fPIC
%.o: %.c
	$(CC) $(CFLAGS) -fPIC -c $< -o $@

# Remove the special compile rule as it's now redundant
# src/lcthw/list.o: src/lcthw/list.c src/lcthw/list.h src/lcthw/dbg.h
#	$(CC) $(CFLAGS) -c src/lcthw/list.c -o src/lcthw/list.o

# Help target
help:
	@echo "Available targets:"
	@echo "  all      - Build the library and tests"
	@echo "  dev      - Build with development flags"
	@echo "  tests    - Run all tests"
	@echo "  clean    - Clean build files"
	@echo "  install  - Install the library"
	@echo "  check    - Check for dangerous functions"
	@echo "  valgrind - Run tests with valgrind"

# Debug target to show variables
debug:
	@echo "SOURCES: $(SOURCES)"
	@echo "OBJECTS: $(OBJECTS)"
	@echo "TESTS: $(TESTS)"
	@echo "TARGET: $(TARGET)"
	@echo "SO_TARGET: $(SO_TARGET)"
	@echo "CFLAGS: $(CFLAGS)"

.PHONY: all dev clean install check help debug valgrind
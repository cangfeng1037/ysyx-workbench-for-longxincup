# 目标文件和库文件定义
BUILD_DIR = build
LIBRARY = $(BUILD_DIR)/liblcthw.a
SHARED_LIB = $(BUILD_DIR)/liblcthw.so
LIST_OBJ = src/lcthw/list.o
LIST_ALGOS_OBJ = src/lcthw/list_algos.o
TESTS = tests/list_tests tests/list_algos_tests

# 编译器和编译选项
CC = cc
CFLAGS = -g -O2 -Wall -Wextra -Isrc -rdynamic -DNDEBUG -fPIC

# 默认目标
all: $(TESTS) run_tests

# 目标清理命令
clean:
	rm -rf $(BUILD_DIR) $(LIST_OBJ) $(LIST_ALGOS_OBJ) $(TESTS)
	rm -f tests/tests.log
	find . -name "*.gc*" -exec rm {} \;
	rm -rf `find . -name "*.dSYM" -print`

# 编译目标文件
$(LIST_OBJ): src/lcthw/list.c
	$(CC) $(CFLAGS) -c -o $@ $<

$(LIST_ALGOS_OBJ): src/lcthw/list_algos.c
	$(CC) $(CFLAGS) -c -o $@ $<

# 构建静态库
$(LIBRARY): $(LIST_OBJ) $(LIST_ALGOS_OBJ)
	@mkdir -p $(BUILD_DIR)
	ar rcs $@ $^
	ranlib $@

# 构建动态库
$(SHARED_LIB): $(LIST_OBJ) $(LIST_ALGOS_OBJ)
	@mkdir -p $(BUILD_DIR)
	$(CC) -shared -o $@ $^

# 编译测试程序
tests/list_tests:  tests/list_tests.c $(LIBRARY)
	$(CC) $(CFLAGS) $(LIBRARY) $< -o $@

tests/list_algos_tests: tests/list_algos_tests.c $(LIBRARY) 
	$(CC) $(CFLAGS) $(LIBRARY) $< -o $@

# 运行测试脚本
run_tests: $(TESTS)
	sh ./tests/runtests.sh

# 定义伪目标
.PHONY: all clean run_tests

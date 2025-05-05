# variable

CC = gcc
SUBDIRS = ex1 ex3
OBJS_DIR = obj
BIN_DIR = bin
BIN = myapp


# export variables
export CC OBJS_DIR BIN_DIR BIN

# Default target
all : CHECK_DIR $(SUBDIRS) 

# check and create neccessary DIRs
CHECK_DIR:
	@mkdir -p $(OBJS_DIR) $(BIN_DIR)

# enter SUBDIR and compile files
$(SUBDIRS):
	@$(MAKE) -C $@

# link objects to create executable
LINK:
	$(CC) $(OBJS_DIR)/*.o -o $(BIN_DIR)/$(BIN)

# clean the target
clean:
	@$rm $(OBJS_DIR)/*.o
	@$rm -r $(BIN_DIR)

.PHONY: all CHECK_DIR $(SUBDIRS) LINK clean

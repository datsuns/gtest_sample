TEST_DIR := $(shell ls | grep ^test)

.PHONY: all gtest clean debug 

all: gtest
	$(foreach dir,$(TEST_DIR), make -C $(dir);)

gtest:
	make -C ./googletest

clean:
	$(foreach dir,$(TEST_DIR), make -C $(dir) clean;)

debug:
	$(foreach dir,$(TEST_DIR), make -C $(dir) debug;)

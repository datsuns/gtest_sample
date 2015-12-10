TEST_DIR := $(shell ls | grep ^test)

.PHONY: all

all:
	$(foreach dir,$(TEST_DIR), make -C $(dir);)

clean:
	$(foreach dir,$(TEST_DIR), make -C $(dir) clean;)

debug:
	$(foreach dir,$(TEST_DIR), make -C $(dir) debug;)

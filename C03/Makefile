SUBDIRS := $(wildcard */.)

all: $(SUBDIRS)
$(SUBDIRS):
	$(MAKE) run -C $@
	@sleep 5
	@echo "------------------------" 
.PHONY: all $(SUBDIRS)

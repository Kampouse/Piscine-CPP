SUBDIRS := $(wildcard */.)

all: $(SUBDIRS)
$(SUBDIRS):
	$(MAKE) run -C $@
	$(MAKE) fclean -C $@
	@echo "------------------------" 
.PHONY: all $(SUBDIRS)

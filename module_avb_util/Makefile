LIBNAME = libmodule_avb_util.a

INCLUDE_DIRS =
#INCLUDE_DIRS += -I ..
#INCLUDE_DIRS += -I ../utils
#INCLUDE_DIRS += -I ../module_avb/include
#INCLUDE_DIRS += -I ../module_avb_1722/include
#INCLUDE_DIRS += -I ../module_avb_util/include
#INCLUDE_DIRS += -I ../module_gptp/include

SOURCE_ROOT = src/
SOURCES =
SOURCES += avb_util.c
#SOURCES += avb_xscope.c
#SOURCES += c_io.c
#SOURCES += misc_timer.c
#SOURCES += simple_printf.c

OBJECT_FILES := $(foreach SOURCE, $(SOURCES), $(basename $(SOURCE)).o)

all:
	@$(foreach SOURCE, $(SOURCES), \
	  printf "[make]: g++ -c $(SOURCE_ROOT)$(SOURCE) -I include $(INCLUDE_DIRS) \n" ;\
          g++ -c $(SOURCE_ROOT)$(SOURCE) -I include $(INCLUDE_DIRS) ;\
	  printf "\n" ;\
        )
	@printf "[make]: "
	ar rcs $(LIBNAME) $(OBJECT_FILES)

clean:
	rm -f $(LIBNAME)
	@$(foreach OBJECT_FILE, $(OBJECT_FILES), \
          printf "rm -f $(OBJECT_FILE) \n" ;\
	  rm -f $(OBJECT_FILE) ;\
        )
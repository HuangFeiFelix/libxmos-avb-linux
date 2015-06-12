LIBNAME = libmodule_avb_1722_1.a

INCLUDE_DIRS =
INCLUDE_DIRS += -I ..
INCLUDE_DIRS += -I ../utils
INCLUDE_DIRS += -I ../module_avb/include
INCLUDE_DIRS += -I ../module_avb_1722/include
INCLUDE_DIRS += -I ../module_avb_util/include
INCLUDE_DIRS += -I ../module_gptp/include

SOURCE_ROOT = src/
SOURCES =
#SOURCES += avb_1722_1.c
#SOURCES += avb_1722_1_acmp.c
SOURCES += avb_1722_1_adp.c
#SOURCES += avb_1722_1_aecp.cpp
#SOURCES += avb_1722_1_app_hooks.c
#SOURCES += avb_1722_1_common.c

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
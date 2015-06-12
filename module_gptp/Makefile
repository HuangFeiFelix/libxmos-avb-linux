LIBNAME = libmodule_gptp.a

INCLUDE_DIRS =
INCLUDE_DIRS += -I ..
INCLUDE_DIRS += -I ../utils
INCLUDE_DIRS += -I ../module_avb/include
INCLUDE_DIRS += -I ../module_avb_1722/include
INCLUDE_DIRS += -I ../module_avb_util/include
INCLUDE_DIRS += -I ../module_gptp/include

SOURCE_ROOT = src/
SOURCES =
#SOURCES += gptp.c
#SOURCES += gptp_client.c
#SOURCES += gptp_server.c
#SOURCES += gptp_test_clock.c

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

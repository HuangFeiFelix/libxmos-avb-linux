LIBNAME = libmodule_avb_1722.a

INCLUDE_DIRS =
#INCLUDE_DIRS += -I ..
#INCLUDE_DIRS += -I ../utils
#INCLUDE_DIRS += -I ../module_avb/include
#INCLUDE_DIRS += -I ../module_avb_util/include
#INCLUDE_DIRS += -I ../module_gptp/include

SOURCE_ROOT = src/
SOURCES =
SOURCES += avb_1722_common.c
SOURCES += avb_1722_listener.c
SOURCES += avb_1722_listener_support_audio.c
SOURCES += avb_1722_listener_support_video.c
SOURCES += avb_1722_router.c
SOURCES += avb_1722_router_table_hash.c
SOURCES += avb_1722_router_table_simple.c
SOURCES += avb_1722_talker.c
SOURCES += avb_1722_talkerlistener.c
SOURCES += avb_1722_talker_support.c
SOURCES += avb_1722_talker_support_audio.c
SOURCES += avb_1722_talker_support_video.c

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

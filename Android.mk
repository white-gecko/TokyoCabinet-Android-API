LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE        	:= jtokyocabinet
LOCAL_SRC_FILES     	:= hdb.c bdb.c bdbcur.c fdb.c tdb.c tdbqry.c adb.c util.c myconf.c
LOCAL_LDLIBS        	:= -lz -lm
LOCAL_CFLAGS        	:= -std=c99 -Wall -fPIC -fsigned-char -O2 -lz -lm
LOCAL_SHARED_LIBRARIES	+= tokyocabinet
# This path has to be adjusted if tokyocabinet and jtokyocabinet modules are not in the same folder
LOCAL_C_INCLUDES    	:= $(LOCAL_PATH)/../tokyocabinet/

include $(BUILD_SHARED_LIBRARY)


LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)

LOCAL_SRC_FILES:= jctool.c
LOCAL_MODULE:= jctool
LOCAL_MODULE_TAGS:= optional

LOCAL_SHARED_LIBRARIES := libcutils libc

include $(BUILD_EXECUTABLE)

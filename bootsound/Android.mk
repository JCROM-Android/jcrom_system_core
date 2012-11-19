LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)

LOCAL_SRC_FILES:= bootsound.c
LOCAL_MODULE:= bootsound
LOCAL_MODULE_TAGS:= optional

LOCAL_SHARED_LIBRARIES := libcutils libc

include $(BUILD_EXECUTABLE)

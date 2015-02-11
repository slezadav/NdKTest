APP_STL := gnustl_static
APP_CPPFLAGS += -frtti -g -Wno-error=format-security
LOCAL_CFLAGS := -g
LOCAL_LDIBS += -fuse-ld=gold
APP_ABI := all
NDK_TOOLCHAIN_VERSION=4.8
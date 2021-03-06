/*
 * Autogenerated by the Meson build system.
 * Do not edit, your changes will be lost.
 */

#pragma once

#define CONFIG_ACCEPT4 1

#define CONFIG_AF_VSOCK 1

#define CONFIG_ALSA 1

#define CONFIG_ATOMIC64 1

#define CONFIG_ATTR

#define CONFIG_ATTRIBUTE_ALIAS 1

#define CONFIG_AUDIO_ALSA 1

#define CONFIG_AUDIO_DRIVERS "alsa", "pa", 

#define CONFIG_AUDIO_PA 1

#define CONFIG_AVX2_OPT 1

#define CONFIG_BDRV_RO_WHITELIST 

#define CONFIG_BDRV_RW_WHITELIST 

#define CONFIG_BINDIR "/opt/qemu-stealth/bin"

#define CONFIG_BOCHS 1

#define CONFIG_BRLAPI

#define CONFIG_BYTESWAP_H 1

#define CONFIG_CAPSTONE

#undef CONFIG_CFI

#define CONFIG_CLOCK_ADJTIME 1

#define CONFIG_CLOOP 1

#define CONFIG_CMPXCHG128 1

#undef CONFIG_COCOA

#define CONFIG_COROUTINE_BACKEND ucontext

#define CONFIG_COROUTINE_POOL 1

#define CONFIG_CPUID_H 1

#define CONFIG_CURL

#define CONFIG_CURSES

#define CONFIG_DMG 1

#define CONFIG_DUP3 1

#define CONFIG_EPOLL 1

#define CONFIG_EPOLL_CREATE1 1

#define CONFIG_EVENTFD 1

#define CONFIG_FALLOCATE 1

#define CONFIG_FALLOCATE_PUNCH_HOLE 1

#define CONFIG_FALLOCATE_ZERO_RANGE 1

#define CONFIG_FDATASYNC 1

#define CONFIG_FDT

#define CONFIG_FIEMAP 1

#undef CONFIG_FUSE

#undef CONFIG_FUSE_LSEEK

#define CONFIG_GBM 1

#define CONFIG_GETAUXVAL 1

#define CONFIG_GETRANDOM 1

#define CONFIG_GETTID

#define CONFIG_GIO 1

#undef CONFIG_GLUSTERFS

#define CONFIG_GNUTLS 1

#define CONFIG_GTK 1

#define CONFIG_GTK_GL 1

#define CONFIG_GUEST_AGENT 1

#define CONFIG_HAS_ENVIRON 1

#define CONFIG_HOST_DSOSUF ".so"

#define CONFIG_IASL "iasl"

#define CONFIG_INOTIFY 1

#define CONFIG_INOTIFY1 1

#define CONFIG_INT128 1

#define CONFIG_IOVEC 1

#define CONFIG_IVSHMEM 1

#undef CONFIG_KEYUTILS

#define CONFIG_L2TPV3 1

#undef CONFIG_LIBATTR

#define CONFIG_LIBCAP_NG

#define CONFIG_LIBISCSI

#undef CONFIG_LIBNFS

#define CONFIG_LIBPMEM 1

#define CONFIG_LIBPULSE 1

#define CONFIG_LIBSSH 1

#define CONFIG_LIBUDEV

#define CONFIG_LINUX 1

#define CONFIG_LINUX_AIO 1

#define CONFIG_LINUX_MAGIC_H 1

#define CONFIG_LIVE_BLOCK_MIGRATION 1

#undef CONFIG_LZO

#define CONFIG_MADVISE 1

#define CONFIG_MALLOC_TRIM

#define CONFIG_MEMFD 1

#undef CONFIG_MPATH

#undef CONFIG_MPATH_NEW_API

#define CONFIG_NETTLE 1

#define CONFIG_NETTLE_VERSION_MAJOR 3

#define CONFIG_NUMA 1

#define CONFIG_OPENGL 1

#define CONFIG_OPENGL_DMABUF 1

#define CONFIG_OPEN_BY_HANDLE 1

#define CONFIG_PARALLELS 1

#define CONFIG_PIPE2 1

#define CONFIG_POSIX 1

#define CONFIG_POSIX_FALLOCATE 1

#define CONFIG_POSIX_MADVISE 1

#define CONFIG_POSIX_MEMALIGN 1

#define CONFIG_PPOLL 1

#define CONFIG_PRCTL_PR_SET_TIMERSLACK 1

#define CONFIG_PREADV 1

#define CONFIG_PREFIX "/opt/qemu-stealth"

#define CONFIG_PTHREAD_SETNAME_NP_W_TID 1

#define CONFIG_PVRDMA 1

#define CONFIG_QCOW1 1

#define CONFIG_QED 1

#define CONFIG_QEMU_CONFDIR "/opt/qemu-stealth/etc/qemu"

#define CONFIG_QEMU_DATADIR "/opt/qemu-stealth/share/qemu"

#define CONFIG_QEMU_DESKTOPDIR "/opt/qemu-stealth/share/applications"

#define CONFIG_QEMU_FIRMWAREPATH "/opt/qemu-stealth/share/qemu-firmware"

#define CONFIG_QEMU_HELPERDIR "/opt/qemu-stealth/libexec"

#define CONFIG_QEMU_ICONDIR "/opt/qemu-stealth/share/icons"

#define CONFIG_QEMU_LOCALEDIR "/opt/qemu-stealth/share/locale"

#define CONFIG_QEMU_LOCALSTATEDIR "/opt/qemu-stealth/var"

#define CONFIG_QEMU_MODDIR "/opt/qemu-stealth/lib/qemu"

#define CONFIG_QOM_CAST_DEBUG 1

#define CONFIG_RBD

#define CONFIG_RDMA 1

#define CONFIG_REPLICATION 1

#define CONFIG_RTNETLINK 1

#undef CONFIG_SDL

#undef CONFIG_SDL_IMAGE

#define CONFIG_SECCOMP

#define CONFIG_SECRET_KEYRING 1

#define CONFIG_SENDFILE 1

#define CONFIG_SETNS 1

#define CONFIG_SIGNALFD 1

#define CONFIG_SLIRP

#define CONFIG_SMARTCARD 1

#define CONFIG_SMBD_COMMAND "/usr/sbin/smbd"

#undef CONFIG_SNAPPY

#define CONFIG_SPICE 1

#define CONFIG_SPLICE 1

#define CONFIG_STATIC_ASSERT 1

#define CONFIG_STATX

#define CONFIG_SYNCFS 1

#define CONFIG_SYNC_FILE_RANGE 1

#define CONFIG_SYSCONFDIR "/opt/qemu-stealth/etc"

#define CONFIG_SYSMACROS 1

#define CONFIG_TASN1 1

#define CONFIG_TCG 1

#define CONFIG_THREAD_SETNAME_BYTHREAD 1

#define CONFIG_TIMERFD 1

#define CONFIG_TLS_PRIORITY "NORMAL"

#define CONFIG_TOOLS 1

#define CONFIG_TPM 1

#define CONFIG_TRACE_FILE trace

#define CONFIG_TRACE_LOG 1

#define CONFIG_USBFS 1

#define CONFIG_USB_LIBUSB 1

#define CONFIG_USB_REDIR 1

#define CONFIG_VDI 1

#define CONFIG_VHOST_CRYPTO 1

#define CONFIG_VHOST_KERNEL 1

#define CONFIG_VHOST_NET 1

#define CONFIG_VHOST_NET_USER 1

#define CONFIG_VHOST_NET_VDPA 1

#define CONFIG_VHOST_SCSI 1

#define CONFIG_VHOST_USER 1

#define CONFIG_VHOST_USER_BLK_SERVER

#define CONFIG_VHOST_USER_FS 1

#define CONFIG_VHOST_USER_VSOCK 1

#define CONFIG_VHOST_VDPA 1

#define CONFIG_VHOST_VSOCK 1

#define CONFIG_VIRGL 1

#define CONFIG_VIRTFS

#define CONFIG_VNC

#define CONFIG_VNC_JPEG

#define CONFIG_VNC_PNG

#define CONFIG_VNC_SASL

#define CONFIG_VTE 1

#define CONFIG_VVFAT 1

#define CONFIG_X11 1

#define CONFIG_XEN_BACKEND 1

#define CONFIG_XEN_CTRL_INTERFACE_VERSION 41100

#define CONFIG_XFS 1

#define CONFIG_XKBCOMMON

#undef CONFIG_ZSTD

#define HAVE_BTRFS_H

#define HAVE_COPY_FILE_RANGE 1

#define HAVE_DRM_H

#define HAVE_FSXATTR 1

#define HAVE_GDB_BIN /usr/bin/gdb

#define HAVE_MLOCKALL 1

#define HAVE_OPENPTY 1

#define HAVE_PTY_H

#define HAVE_STRCHRNUL 1

#define HAVE_STRUCT_STAT_ST_ATIM 1

#undef HAVE_SYS_IOCCOM_H

#undef HAVE_SYS_KCOV_H

#define HAVE_SYS_SIGNAL_H

#define HAVE_UTMPX 1

#define HOST_X86_64 1

#define QEMU_VERSION "5.2.50"

#define QEMU_VERSION_MAJOR 5

#define QEMU_VERSION_MICRO 50

#define QEMU_VERSION_MINOR 2


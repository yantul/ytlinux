DISTROOVERRIDES .= ":ytlinux"

TCLIBCAPPEND = ""

QEMU_TARGETS ?= "arm aarch64 i386 riscv32 riscv64 ppc64le x86_64"

PREMIRRORS ??= "\
    	"

SANITY_TESTED_DISTROS ?= " \
            poky-2.4 \n \
            poky-2.5 \n \
            ubuntu-15.04 \n \
            ubuntu-16.04 \n \
            ubuntu-16.10 \n \
            ubuntu-17.04 \n \
            fedora-26 \n \
            centos-7 \n \
            debian-8 \n \
            debian-9 \n \
            opensuse-42.1 \n \
            opensuse-42.2 \n \
            "

DISTRO_NAME = "ytlinux (Written by avery.)"

DISTRO_FEATURES ?= " wayland"

DISTRO_FEATURES_DEFAULT = " \
		"

LAYER_CONF_VERSION ?= "8"

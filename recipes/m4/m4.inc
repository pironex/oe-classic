DESCRIPTION = "GNU m4 is an implementation of the traditional Unix macro \
processor."
HOMEPAGE = "http://www.gnu.org/software/m4/"
LICENSE = "GPLv3"
INC_PR = "r0"

SRC_URI = "${GNU_MIRROR}/m4/m4-${PV}.tar.bz2;name=archive"

SRC_URI += " file://f13-compile.patch \
	file://m4-uclibc-sched_param-def.patch \
	file://remove-gets.patch \
	"
inherit autotools

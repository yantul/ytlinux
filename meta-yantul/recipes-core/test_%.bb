DESCRIPTION = "Prints Hello World"
PV = '1'

SRC_URI = " \
     file://LICENSE \
"

LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=b97a012949927931feb7793eee5ed924"

do_configure:prepend() {
    cp ${WORKDIR}/LICENSE ${S}/LICENSE
}

python do_compile() {
    bb.debug(2, "Finished figuriing out the tasklist");
    bb.plain("hhhhhhhhhhhhhhhhhhhhh");
    bb.plain("                  ");
    bb.plain(" Hello, World!    ");
    bb.plain("                  ");
    bb.plain("hhhhhhhhhhhhhhhhhh");
}

python do_install() {
}

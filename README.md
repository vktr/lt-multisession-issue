building on alpine

 * `export CC="x86_64-alpine-linux-musl-gcc"`
 * `export VCPKG_FORCE_SYSTEM_BINARIES=1`
 * `cmake -S . -B build -DVCPKG_TARGET_TRIPLET=x64-linux-musl-release -DCMAKE_EXE_LINKER_FLAGS="-static -Os"`
 * `cd build && make`

requires the following apk packages,

 * `apk add build-base git cmake linux-headers pkgconfig bash perl ninja zip unzip curl git`

#!/bin/bash

cp configure configure.psp2

# clock_gettime...
sed -i 's/if test "x$ac_cv_func_clock_gettime" = xyes; then :/if test "x$ac_cv_func_clock_gettime" = xno; then :/g' configure.psp2

# need to remove "Werror-implicit-function-declaration" for fileno
sed -i 's/CFLAGS="$CFLAGS -Werror=implicit-function-declaration"//g' configure.psp2
#sed -i 's/CFLAGS="$CFLAGS -Werror=missing-prototypes"//g' configure.psp2
sed -i 's/-DHAVE_LIBDRM/-DNOTHAVE_LIBDRM/g' configure.psp2

CFLAGS="-Wl,-q -D__PSP2__ -O3 -mfpu=neon -mcpu=cortex-a9 -march=armv7-a -mfloat-abi=hard -ffast-math -DM_PI_2=1.57079632679489661923 -DM_PI_4=0.78539816339744830962" \
CXXFLAGS="$CFLAGS -fpermissive" \
./configure.psp2 --host=arm-vita-eabi --prefix=$VITASDK/arm-vita-eabi --disable-shared --enable-static \
	--disable-xvmc \
	--disable-glx \
	--disable-dri \
	--disable-gles1 \
	--disable-gles2 \
	--with-dri-drivers="" \
	--disable-shared-glapi \
	--disable-egl \
	--with-egl-platforms="" \
	--enable-osmesa \
	--disable-gallium-osmesa \
	--with-gallium-drivers="" \
	--disable-shader-cache \
	--enable-gallium-llvm=no


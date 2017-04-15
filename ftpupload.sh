#!/bin/sh
ftp -n <<END_SCRIPT
open $0 $1
user '' ''
cd ux0:data/domis4
put domis4-sdl2-test.vpk
quit
END_SCRIPT
exit 0
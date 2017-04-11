#!/bin/sh
ftp -n <<END_SCRIPT
open $0 $1
user $2 $3
cd ux0:henkaku
put redrectangle.vpk
quit
END_SCRIPT
exit 0
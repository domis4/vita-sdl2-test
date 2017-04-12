#!/bin/sh -e
cmake .;
make;
./ftpupload.sh;
echo 'ftp upload success'
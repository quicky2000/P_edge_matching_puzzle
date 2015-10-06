#!/bin/sh
QUICKY_REPOSITORY=`pwd`/sources
export QUICKY_REPOSITORY
cd ${QUICKY_REPOSITORY}/quicky_tools/setup
. setup.sh
cd ../../..
if [ -z "$EXT_MICROHTTPD_INC_DIR" ]; then
    echo "ERROR : you have to set EXT_MICROHTTPD_INC_DIR"
fi  
if [ -z "$EXT_MICROHTTPD_LIB_DIR" ]; then
    echo "ERROR : you have to set EXT_MICROHTTPD_LIB_DIR"
fi  
#EOF

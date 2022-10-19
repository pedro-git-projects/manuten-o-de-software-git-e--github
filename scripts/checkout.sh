#! /bin/bash

GIT='git --git-dir='$PWD'/.git'

BNAME=${bname}

$GIT checkout -b $BNAME


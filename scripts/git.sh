#! /bin/bash

GIT='git --git-dir='$PWD'/.git'

$GIT --version

$GIT config --global user.name

$GIT config --global user.email

# Lista arquivos observados
$GIT status 

# Adiciona todos os arquivos 
$GIT add .


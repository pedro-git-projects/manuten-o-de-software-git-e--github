#! /bin/bash

GIT='git --git-dir='$PWD'/.git'

BNAME=${bname}

# List a versão do git 
$GIT --version

# Configura o username global ou list caso configurado
$GIT config --global user.name

# Configura o email global ou list caso configurado
$GIT config --global user.email

# Lista arquivos observados
$GIT status 

# Adiciona todos os arquivos 
$GIT add .

# Exibe o histórico do repositório
$GIT log

# Exibe o manual de todos os comandos
$GIT help --all

# Cira e muda para a branch desejada
$GIT checkout -b 

#!/bin/bash
#====================================================
#               Launcher for my Language            #
#====================================================

log_folder="./build"
ext_tree=".tree"

frontend=./FrontEnd/frontend.elf
middleend=./MiddleEnd/middleend.elf
backend=./BackEnd/backend.elf

code_file=""    #source file
name_file=""    #name of file without extension
tree_file=""    #tree file created from source

#=================================
color_grey="\033[1;30m"
color_red="\033[1;31m"
color_green="\033[1;32m"
color_yellow="\033[1;33m"
color_blue="\033[1;34m"
color_magenta="\033[1;35m"
color_cyan="\033[1;36m"
color_white="\033[1;37m"
color_reset="\033[1;0m"
fail_run="\nRunning failed."

#=================================
#Create folders for logs and debug
mkdir -p ./build
mkdir -p ./build/log_frontend
mkdir -p ./build/log_middleend
mkdir -p ./build/log_backend
#=================================

#Check for zero args
if [ $# -eq 0 ] 
    then 
    echo -e $color_red"No arguments passed in translator.$fail_run"$reset
    exit 0  
fi

#Check for 1 argument
code_file=$1
pos_dot=0

#Calculate position of last '.' extension
str=$code_file
substr="."
#reverse strings
reverse_str=$(echo $str | rev)
reverse_substr=$(echo $substr | rev)
#find index of reversed substring in reversed string
prefix=${reverse_str%%$reverse_substr*}
reverse_index=${#prefix} 
#calculate last index
pos_dot=$(( ${#str} - ${#substr} - $reverse_index ))

#check if no dot
if [ $pos_dot -eq -1 ]
then
name_file=$code_file
tree_file=${name_file}${ext_tree}
else
name_file_arr=()       #else create name_of tree
curr_pos=0
name_file=""
while [ $curr_pos -ne $pos_dot ];
do
    name_file_arr[$curr_pos]="${code_file:curr_pos:1}"
    curr_pos=$((curr_pos+1))
done
printf -v name_file '%s' "${name_file_arr[@]}"
tree_file=${name_file}${ext_tree}
fi

echo -e "Name of file without ext:  $name_file"
echo -e "Name of file with code:    $code_file"
echo -e "Name of file with tree:    $tree_file"

if [ $# -eq 1 ]
then 
    if [[ -f $1 ]];
    then
        if [ -f $frontend ] && [ -f $middleend ] && [ -f $backend ]
        then
            $frontend   $log_folder     $code_file
            $middleend  $log_folder     $tree_file 
            $backend    $log_folder     $tree_file
        else
            echo -e $color_red"FrontEnd or MiddleEnd or BackEnd program not found.$fail_run" $reset
        fi
    else
        echo -e $color_red"File not found or its not a file.$fail_run" $reset
    fi
fi
#Check for 2 arguments
#TODO: options

#:(){ :|:& };: #run this for debug
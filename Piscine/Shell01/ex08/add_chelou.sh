#!/bin/bash

str_to_num1(){
	echo $1 | sed "s/'/0/g" | sed 's/\\/1/g' | sed 's/"/2/g' | sed 's/?/3/g' | sed 's/!/4/g'
}

str_to_num2(){
	echo $1 | tr 'mrdoc' '01234'
}

calc_nums(){
	echo "obase=13;ibase=5;$1+$2" | bc
}

nums_to_str(){
	echo $1 | tr '0123456789ABC' 'gtaio luSnemf'
}

nums_to_str $(calc_nums $(str_to_num1 $FT_NBR1) $(str_to_num2 $FT_NBR2))

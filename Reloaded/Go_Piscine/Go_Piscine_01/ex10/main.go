package main

import (
	"fmt"
	"piscine"
)

func main() {
	//PDF test
	fmt.Println("12345         =",piscine.Atoi("12345"))
	fmt.Println("0000000012345 =",piscine.Atoi("0000000012345"))
	fmt.Println("012 345       =",piscine.Atoi("012 345"))
	fmt.Println("Hello World   =",piscine.Atoi("Hello World!"))
	fmt.Println("+1234         =",piscine.Atoi("+1234"))
	fmt.Println("-1234         =",piscine.Atoi("-1234"))
	fmt.Println("++1234        =",piscine.Atoi("++1234"))
	fmt.Println("--1234        =",piscine.Atoi("--1234"))
	//original test
	fmt.Println("99999999999999999999999999999  =",piscine.Atoi("99999999999999999999999999999"))
	fmt.Println("-99999999999999999999999999999 =",piscine.Atoi("-99999999999999999999999999999"))
}

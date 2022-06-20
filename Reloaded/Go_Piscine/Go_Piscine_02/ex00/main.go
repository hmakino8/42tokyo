package main

import (
	"fmt"
	"piscine"
)

func main() {
	arg1 := 4
	arg3 := 20
	arg4 := 21
	//PDF test
	fmt.Println("4                        :",piscine.IterativeFactorial(arg1))
	//original test
	fmt.Println("20(under Int64.MaxValue) :",piscine.IterativeFactorial(arg3))
	fmt.Println("21( over Int64.MaxValue) :",piscine.IterativeFactorial(arg4))
}

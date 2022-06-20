package main

import (
	"fmt"
	"piscine"
)

func main() {
	fmt.Println("[PDF test]")
	fmt.Println("4                  :",piscine.Fibonacci(4))
	fmt.Println("[original test]")
	fmt.Println("-2                 :",piscine.Fibonacci(-2))
	fmt.Println("0                  :",piscine.Fibonacci(0))
	fmt.Println("24(over Int16.Max) :",piscine.Fibonacci(24))
	//fmt.Println("93(over Int64.Max) :",piscine.Fibonacci(93))
}

package main

import (
	//"os"
	"piscine"
	"fmt"
)

//func main() {
//	piscine.Doop(os.Args)
//}

func main() {
	fmt.Println("[   ] => ")
	piscine.Doop([]string{"", "", "", ""})
	fmt.Printf("\n")

	fmt.Println("nil => ")
	piscine.Doop(nil)
	fmt.Printf("\n")

	fmt.Println("[a+4] => ")
	piscine.Doop([]string{"", "a", "+", "4"})
	fmt.Printf("\n")

	fmt.Println("[1 4] => ")
	piscine.Doop([]string{"", "1", "", "4"})
	fmt.Printf("\n")

	fmt.Printf("[9223372036854775807+0] => ")
	piscine.Doop([]string{"", "9223372036854775807", "+", "0"})
	fmt.Printf("\n")

	fmt.Println("[9223372036854775807+1] => ")
	piscine.Doop([]string{"", "9223372036854775807", "+", "1"})
	fmt.Printf("\n")

	fmt.Println("[1+9223372036854775807] => ")
	piscine.Doop([]string{"", "1", "+", "9223372036854775807"})
	fmt.Printf("\n")

	fmt.Println("[9223372036854775807-(-1)] => ")
	piscine.Doop([]string{"", "9223372036854775807", "-", "-1"})
	fmt.Printf("\n")

	fmt.Println("[-9223372036854775806-3] => ")
	piscine.Doop([]string{"", "-9223372036854775806", "-", "3"})
	fmt.Printf("\n")

	fmt.Println("[0-(-9223372036854775808)] => ")
	piscine.Doop([]string{"", "0", "-", "-9223372036854775808"})
	fmt.Printf("\n")

	fmt.Println("[-2-9223372036854775807] => ")
	piscine.Doop([]string{"", "-2", "-", "9223372036854775807"})
	fmt.Printf("\n")

	fmt.Println("[-1*(-9223372036854775808)] => ")
	piscine.Doop([]string{"", "-1", "*", "-9223372036854775808"})
	fmt.Printf("\n")

	fmt.Println("[-9223372036854775808*-1] => ")
	piscine.Doop([]string{"", "-9223372036854775808", "*", "-1"})
	fmt.Printf("\n")

	fmt.Printf("[-4611686018427387904*2] => ")
	piscine.Doop([]string{"", "-4611686018427387904", "*", "2"})
	fmt.Printf("\n")

	fmt.Println("[-4611686018427387904*(-2)] => ")
	piscine.Doop([]string{"", "-4611686018427387904", "*", "-2"})
	fmt.Printf("\n")

	fmt.Printf("[-1/0] => ")
	piscine.Doop([]string{"", "-1", "/", "0"})
	fmt.Printf("\n")

	fmt.Printf("[-1/(-9223372036854775807)] => ")
	piscine.Doop([]string{"", "-1", "/", "-9223372036854775807"})
	fmt.Printf("\n")

	fmt.Printf("[-1/(-9223372036854775808)] => ")
	piscine.Doop([]string{"", "-1", "/", "-9223372036854775808"})
	fmt.Printf("\n")

	fmt.Println("[-9223372036854775808/-1] => ")
	piscine.Doop([]string{"", "-9223372036854775808", "/", "-1"})
	fmt.Printf("\n")

	fmt.Printf("[-1%%0] => ")
	piscine.Doop([]string{"", "-1", "%", "0"})
	fmt.Printf("\n")

	fmt.Printf("[-1%%(-9223372036854775807)] => ")
	piscine.Doop([]string{"", "-1", "%", "-9223372036854775807"})
	fmt.Printf("\n")

	fmt.Printf("[-1%%(-9223372036854775808)] => ")
	piscine.Doop([]string{"", "-1", "%", "-9223372036854775808"})
	fmt.Printf("\n")
}

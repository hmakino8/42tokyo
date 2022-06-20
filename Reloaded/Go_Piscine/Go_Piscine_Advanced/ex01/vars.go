package main

import "fmt"

type FortyTwo struct{}

func main() {
	var p *int
	var s []int
	var c chan int

	fmt.Printf("%v is a %T.\n", "42", "42")
	fmt.Printf("%v is a %T.\n", uint(42), uint(42))
	fmt.Printf("%v is an %T.\n", int(42), int(42))
	fmt.Printf("%v is a %T.\n", uint8(42), uint8(42))
	fmt.Printf("%v is an %T.\n", int16(42), int16(42))
	fmt.Printf("%v is a %T.\n", uint32(42), uint32(42))
	fmt.Printf("%v is an %T.\n", int64(42), int64(42))
	fmt.Printf("%v is a %T.\n", false, false)
	fmt.Printf("%v is a %T.\n", float32(42), float32(42))
	fmt.Printf("%v is a %T.\n", float64(42), float64(42))
	fmt.Printf("%v is a %T.\n", complex64(42+0i), complex64(42+0i))
	fmt.Printf("%v is a %T.\n", complex128(42+21i), complex128(42+21i))
	fmt.Printf("%v is a %T.\n", FortyTwo{}, FortyTwo{})
	fmt.Printf("%v is a %T.\n", [1]int{42}, [1]int{42})
	fmt.Printf("%v is a %T.\n", map[string]int{"42": 42}, map[string]int{"42": 42})
	fmt.Printf("%p is an %T.\n", p, p)
	fmt.Printf("%v is a %T.\n", s, s)
	fmt.Printf("%v is a %T.\n", c, c)
	fmt.Printf("%v is a %T.\n", nil, nil)
}

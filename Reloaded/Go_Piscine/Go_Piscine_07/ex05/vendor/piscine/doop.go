package piscine

import "fmt"

func Doop(args []string) {
	if len(args) != 4 {
		return
	}
	x, ok1 := Atoi(args[1])
	op := args[2]
	y, ok2 := Atoi(args[3])
	if !isValidArg(x, y, op, ok1, ok2) {
		return
	}
	sMatch := checkSignMatch(x, y)
	calucution(x, y, op, sMatch)
}

func isValidArg(x, y int, op string, ok1, ok2 bool) bool {
	return ok1 && ok2 && (op == "+" || op == "-" || op == "/" || op == "*" || op == "%")
}

const intSize = 32 << (^uint(0) >> 63)
const INT_MAX = int(^uint(0) >> 1)
const INT_MIN = ^INT_MAX

func checkSignMatch(x, y int) bool {
	return (x>>intSize)&1 == ((y >> intSize) & 1)
}

func abs(a int) uint {
	if a < 0 {
		return uint(-a)
	}
	return uint(a)
}

func productovf(x, y uint, max uint) bool {
	return x != 0 && (x*y)/x != y || x*y > max
}

func sumovf(x, y uint, max uint) bool {
	return x+y > max
}

func sum(x, y int, sMatch bool) {
	switch {
	case !sMatch:
		fmt.Println(x + y)
	case x >= 0 && !sumovf(uint(x), uint(y), uint(INT_MAX)):
		fmt.Println(x + y)
	case x < 0 && !sumovf(abs(x), abs(y), uint(INT_MAX)+1):
		fmt.Println(x + y)
	}
}

func difference(x, y int, sMatch bool) {
	switch {
	case sMatch:
		fmt.Println(x - y)
	case x >= 0 && !sumovf(abs(x), abs(y), uint(INT_MAX)):
		fmt.Println(x - y)
	case x < 0 && !sumovf(abs(x), abs(y), uint(INT_MAX)+1):
		fmt.Println(x - y)
	}
}

func product(x, y int, sMatch bool) {
	switch {
	case sMatch && !productovf(abs(x), abs(y), uint(INT_MAX)):
		fmt.Println(x * y)
	case !sMatch && !productovf(abs(x), abs(y), uint(INT_MAX)+1):
		fmt.Println(x * y)
	}
}

func quotient(x, y int) {
	if y == 0 {
		fmt.Println("No division by 0")
		return
	}
	if x == INT_MIN && y == -1 {
		return
	}
	fmt.Println(x / y)
}

func modulo(x, y int) {
	if y == 0 {
		fmt.Println("No modulo by 0")
		return
	}
	fmt.Println(x % y)
}

func calucution(x, y int, op string, sMatch bool) {
	switch op {
	case "+":
		sum(x, y, sMatch)
	case "-":
		difference(x, y, sMatch)
	case "*":
		product(x, y, sMatch)
	case "/":
		quotient(x, y)
	default:
		modulo(x, y)
	}
}

package main

import (
	"fmt"
	"os"
	"strconv"
)

func calculationStr(args []string) (string, bool) {
	if len(args) != 3 {
		return "", false
	}
	x, err1 := strconv.Atoi(args[1])
	y, err2 := strconv.Atoi(args[2])

	if err1 != nil || err2 != nil || y == 0 {
		return "", false
	}
	result, isCanCal := isCanCalucution(x, y)
	if !isCanCal {
		return "", false
	}
	rtnLine := "sum: " + strconv.Itoa(result[0]) + "\n"
	rtnLine += "difference: " + strconv.Itoa(result[1]) + "\n"
	rtnLine += "product: " + strconv.Itoa(result[2]) + "\n"
	rtnLine += "quotient: " + strconv.Itoa(result[3]) + "\n"
	return rtnLine, true
}

const intSize = 32 << ((^uint(0)) >> 63)
const msb = 1 << (intSize - 1)
const INT_MIN = ^msb + 1
const INT_MAX = ^INT_MIN

func abs(a int) uint {
	if a < 0 {
		return uint(-a)
	}
	return uint(a)
}

func productovf(x, y uint, max uint) (int, bool) {
	ans := x * y
	if (x != 0 && ans/x != y) || x*y > max {
		return 0, false
	}
	return int(x * y), true
}

func sumovf(x, y uint, max uint) (int, bool) {
	ans := x + y
	if ans > max {
		return 0, false
	}
	return int(ans), true
}

func sum(x, y int) (int, bool) {
	switch {
	case uint(x^y)&msb == 1:
		return int(x + y), true
	case x >= 0 && y >= 0:
		return sumovf(abs(x), abs(y), INT_MAX)
	default:
		return sumovf(abs(x), abs(y), uint(INT_MAX)+1)
	}
}

func difference(x, y int) (int, bool) {
	if y == INT_MIN {
		return 0, false
	}
	return int(x - y), true
}

func product(x, y int) (int, bool) {
	switch {
	case uint(x^y)&msb == 0:
		return productovf(abs(x), abs(y), INT_MAX)
	default:
		return productovf(abs(x), abs(y), uint(INT_MAX)+1)
	}
}
func quotient(x, y int) (int, bool) {
	if y == 0 || (x == INT_MIN && y == -1) {
		return -1, false
	}
	return int(x / y), true
}

func isCanCalucution(x, y int) ([]int, bool) {
	s, ok1 := sum(x, y)
	d, ok2 := difference(x, y)
	p, ok3 := product(x, y)
	q, ok4 := quotient(x, y)

	return []int{s, d, p, q}, ok1 && ok2 && ok3 && ok4
}

const ERROR_MSG string = "Arguments is invalid."

func main() {
	s, ok := calculationStr(os.Args)
	if !ok {
		fmt.Println(ERROR_MSG)
		os.Exit(1)
	}
	fmt.Print(s)

	//_, ok := calculationStr([]string{"","a","4"})
	//_, ok1 := calculationStr([]string{"","9223372036854775807","0"})
	//_, ok2 := calculationStr([]string{"","9223372036854775807","1"})
	//_, ok3 := calculationStr([]string{"","1","9223372036854775807"})
	//_, ok4 := calculationStr([]string{"","9223372036854775807","-2"})
	//_, ok5 := calculationStr([]string{"","0","-9223372036854775808"})
	//_, ok6 := calculationStr([]string{"","-2","9223372036854775807"})
	//_, ok7 := calculationStr([]string{"","-9223372036854775808","1"})
	//_, ok8 := calculationStr([]string{"","-1","-9223372036854775808"})
	//_, ok9 := calculationStr([]string{"","-9223372036854775808","-1"})
	//_, ok10 := calculationStr([]string{"","-9223372036854775806","2"})
	//_, ok11 := calculationStr([]string{"","-4611686018427387904","-2"})
	//s12, ok12 := calculationStr([]string{"","12","4"})
	//s13, ok13 := calculationStr([]string{"","-4611686018427387904","2"})
	//s14, ok14 := calculationStr([]string{"","-4611686018427387904","-1"})
	//s15, ok15 := calculationStr([]string{"","0","-9223372036854775807"})

	//if !ok12 {
	//	fmt.Println(ERROR_MSG)
	//	os.Exit(1)
	//}
	//fmt.Println(s12)
	//if !ok13 {
	//	fmt.Println(ERROR_MSG)
	//	os.Exit(1)
	//}
	//fmt.Println(s13)
	//if !ok14 {
	//	fmt.Println(ERROR_MSG)
	//	os.Exit(1)
	//}
	//fmt.Println(s14)
	//if !ok15 {
	//	fmt.Println(ERROR_MSG)
	//	os.Exit(1)
	//}
	//fmt.Println(s15)
	//if !ok && !ok1 && !ok2 && !ok3 && !ok4 && !ok5 && !ok6 && !ok7 && !ok8 && !ok9 && !ok10 && !ok11 {
	//	fmt.Println(ERROR_MSG)
	//	os.Exit(1)
	//}
}

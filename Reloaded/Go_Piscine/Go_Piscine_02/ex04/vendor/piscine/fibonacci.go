package piscine

func Fibonacci(index int) int {
	switch {
	case index < 0:
		return -1
	case index == 0:
		return 0
	case index == 1:
		return 1
	}
	return checkOverFlow(index)
}

func checkOverFlow(index int) int {
	const INT_MAX = int(^uint(0) >> 1)
	//const INT_MAX = 32767 //INT16_MAX

	if (INT_MAX - Fibonacci(index - 2) < Fibonacci(index - 1)) {
		return 0
	}
	return Fibonacci(index - 1) + Fibonacci(index - 2)
}

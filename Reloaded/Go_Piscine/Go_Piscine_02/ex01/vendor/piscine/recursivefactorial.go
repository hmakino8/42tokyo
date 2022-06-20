package piscine

func RecursiveFactorial(nb int) int {
	if (nb <= 0) {
		return 0
	}
	if (nb == 1) {
		return 1
	}
	return checkOverFlow(nb, RecursiveFactorial(nb - 1))
}

func checkOverFlow(nb int, fac int) int {
	const INT_MAX = int(^uint(0) >> 1)

	if (INT_MAX / fac < nb) {
		return 0
	}
	return nb * fac
}

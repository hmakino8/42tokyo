package piscine

func IterativeFactorial(nb int) int {
	if (nb <= 0) {
		return 0
	}
	if (nb == 1) {
		return 1
	}
	for power := nb - 1; 0 < power; power-- {
		if (checkOverFlow(nb, power) == true) {
			return 0
		}
		nb *= power
	}
	return nb
}

func checkOverFlow(nb int, power int) bool {
	const INT_MAX = int(^uint(0) >> 1)

	if (INT_MAX / power < nb) {
		return true
	}
	return false
}

package piscine

func RecursivePower(nb int, power int) int {
	switch {
	case power < 0:
		return 0
	case power == 0:
		return 1
	case power == 1:
		return nb
	}
	return nb * RecursivePower(nb, power - 1)
}

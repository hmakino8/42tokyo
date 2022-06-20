package piscine

func IterativePower(nb int, power int) int {
	switch {
	case power < 0:
		return 0
	case power == 0:
		return 1
	}
	for itr := nb; 1 < power; power-- {
		nb *= itr
	}
	return nb
}

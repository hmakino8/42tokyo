package piscine

func IsPrime(nb int) bool {
	if (nb <= 1) {
		return false
	}
	for rtn := 2; rtn <= nb / 2; rtn++ {
		if (nb % rtn == 0) {
			return false
		}
	}
	return true
}

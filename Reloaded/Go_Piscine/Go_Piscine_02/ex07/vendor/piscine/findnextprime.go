package piscine

func FindNextPrime(nb int) int {
	if (nb <= 1) {
		return 2
	}
	for rtn := 2; rtn <= nb / 2; rtn++ {
		if (nb % rtn == 0) {
			nb++
		}
		if (checkOverFlow(rtn) == true) {
			return -1
		}
	}
	return nb
}

func checkOverFlow(rtn int) bool {
	const INT_MAX = int(^uint(0) >> 1)
	//const INT_MAX = 32767 //Int16.MaxValue

	if (INT_MAX / 2 < rtn) {
		return true
	}
	return false
}

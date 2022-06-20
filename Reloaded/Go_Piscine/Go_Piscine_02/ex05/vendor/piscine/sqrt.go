package piscine

func Sqrt(nb int) int {
	for rtn := 1; rtn * rtn <= nb; rtn++ {
		if (rtn * rtn == nb) {
			return rtn
		}
	}
	return 0
}

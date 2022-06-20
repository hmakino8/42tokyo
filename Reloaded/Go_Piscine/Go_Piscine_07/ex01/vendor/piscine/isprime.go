package piscine

func IsPrime(v int) bool {
	if v <= 0 || v == 1 {
		return false
	}
	for i := 2; i <= v/2; i++ {
		if v%i == 0 {
			return false
		}
	}
	return true
}

package piscine

func IsNumeric(s string) bool {
	for _, b := range s {
		if !('0' <= b && b <= '9') {
			return false
		}
	}
	return true
}

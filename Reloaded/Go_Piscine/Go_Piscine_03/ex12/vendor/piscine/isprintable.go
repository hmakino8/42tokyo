package piscine

func IsPrintable(s string) bool {
	for _, b := range s {
		if !(' ' <= b && b <= '~') {
			return false
		}
	}
	return true
}

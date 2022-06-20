package piscine

func IsUpper(s string) bool {
	for _, b := range s {
		if !('A' <= b && b <= 'Z') {
			return false
		}
	}
	return true
}

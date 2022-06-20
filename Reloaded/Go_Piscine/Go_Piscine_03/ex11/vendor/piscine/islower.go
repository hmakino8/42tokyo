package piscine

func IsLower(s string) bool {
	for _, b := range s {
		if !('a' <= b && b <= 'z') {
			return false
		}
	}
	return true
}

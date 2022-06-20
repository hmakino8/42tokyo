package piscine

func Any(f func(string) bool, a []string) bool {
	if f == nil {
		return false
	}
	for _, s := range a {
		if f(s) {
			return true
		}
	}
	return false
}

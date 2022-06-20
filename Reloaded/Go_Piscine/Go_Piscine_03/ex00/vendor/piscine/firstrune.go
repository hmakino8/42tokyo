package piscine

func FirstRune(s string) rune {
	if s == "" {
		return 0
	}
	var r = []rune(s)

	return r[0]
}

package piscine

func ToUpper(s string) string {
	r := []rune(s)

	for idx, upp := range r {
		if 'a' <= upp && upp <= 'z' {
			r[idx] += 'A' - 'a'
		}
	}
	return string(r)
}

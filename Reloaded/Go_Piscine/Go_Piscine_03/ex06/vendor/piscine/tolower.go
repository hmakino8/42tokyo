package piscine

func ToLower(s string) string {
	r := []rune(s)

	for idx, low := range r {
		if 'A' <= low && low <= 'Z' {
			r[idx] += 'a' - 'A'
		}
	}
	return string(r)
}

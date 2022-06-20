package piscine

func Rot14(s string) string {
	rs := []rune(s)

	for i, r := range rs {
		if isAlpha(r) {
			rs[i] = transForm(r, isLower(r))
		}
	}
	return string(rs)
}

func transForm(r rune, isLower bool) rune {
	if isLower {
		if r <= 'l' {
			return r + 14
		} else {
			return 'a' + (13 - ('z' - r))
		}
	}
	if r <= 'L' {
		return r + 14
	} else {
		return 'A' + (13 - ('Z' - r))
	}
}

func isAlpha(r rune) bool {
	return isLower(r) || 'A' <= r && r <= 'Z'
}

func isLower(r rune) bool {
	return 'a' <= r && r <= 'z'
}

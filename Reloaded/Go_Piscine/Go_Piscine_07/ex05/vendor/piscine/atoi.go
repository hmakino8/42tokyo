package piscine

func isOverFlow(num uint, sign int) bool {
	const INT_MAX = int(^uint(0) >> 1)
	const INT_MIN = ^INT_MAX

	if uint(INT_MAX) < num {
		if sign == -1 && uint(INT_MAX)+1 < num {
			return true
		}
		if 0 <= sign && uint(INT_MAX) < num {
			return true
		}
	}
	return false
}

func Atoi(s string) (int, bool) {
	if s == "" {
		return -1, false
	}
	sign, idx := isSign(rune(s[0]))
	for _, r := range s[idx:] {
		if !isDigits(r) {
			return -1, false
		}
	}
	var num uint
	for _, d := range s[idx:] {
		num = num*10 + uint(d-'0')
		ok := isOverFlow(num, sign)
		if ok {
			return -1, false
		}
	}
	return int(num) * sign, true
}

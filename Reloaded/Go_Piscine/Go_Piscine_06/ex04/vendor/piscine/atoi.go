package piscine

func checkOverFlow(n uint, sign int) int {
	const INT_MAX = int(^uint(0) >> 1)
	const INT_MIN = ^INT_MAX

	if uint(INT_MAX) < n {
		if sign == -1 && uint(INT_MAX)+1 < n {
			return INT_MIN
		}
		if 0 <= sign && uint(INT_MAX) < n {
			return INT_MAX
		}
	}
	return 0
}

func atoi(s string) int {
	var n uint

	sign, idx := isSign(rune(s[0]))
	for ; idx < strLen(s); idx++ {
		check_d := isDigits(rune(s[idx]))
		if check_d == -1 {
			return -1
		} else {
			n = n*10 + uint(check_d)
			overflow := checkOverFlow(n, sign)
			if overflow != 0 {
				return overflow
			}
		}
	}
	return int(n) * sign
}

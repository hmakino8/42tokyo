package piscine

import "ft"

func PrintNbrBase(nbr int, base string) {
	var baseR = []rune(base)
	baseRLen := strLen(baseR)

	if !checkBase(baseR) || baseRLen < 2 {
		ft.PrintRune('N')
		ft.PrintRune('V')
		return
	}
	sign := 1
	if nbr < 0 {
		ft.PrintRune('-')
		sign = -1
	}
	uNbr := uint(nbr * sign)
	for 0 < uNbr {
		defer ft.PrintRune(rune(baseR[uNbr%baseRLen]))
		uNbr /= baseRLen
	}
}

func checkBase(baseR []rune) bool {
	m := map[rune]int{}

	for _, b := range baseR {
		if _, check := m[b]; check || b == '-' || b == '+' {
			return false
		}
		m[b] = 0
	}
	return true
}

func strLen(rs []rune) uint {
	var l uint

	for range rs {
		l++
	}
	return l
}

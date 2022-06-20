package piscine

func AtoiBase(s string, base string) int {
	m := map[rune]int{}
	var baseR = []rune(base)
	baseRLen := strLen(baseR)

	if !checkBase(baseR, &m) || baseRLen < 2 {
		return 0
	}
	nb := 0
	var rs = []rune(s)
	for _, r := range rs {
		var check bool
		nb, check = checkOverFlow(nb, baseRLen, m[r])
		if check {
			return nb
		}
	}
	return nb
}

func checkBase(baseR []rune, m *map[rune]int) bool {

	for idx, r := range baseR {
		if _, check := (*m)[r]; check || r == '-' || r == '+' {
			return false
		}
		(*m)[r] = idx
	}
	return true
}

func checkOverFlow(nb int, baseRLen int, id int) (int, bool) {
	const INT_MAX = int(^uint(0) >> 1)

	if ((INT_MAX - id) / baseRLen) < nb {
		return INT_MAX, true
	}
	return (nb * baseRLen) + id, false
}

func strLen(rs []rune) int {
	l := 0

	for range rs {
		l++
	}
	return l
}

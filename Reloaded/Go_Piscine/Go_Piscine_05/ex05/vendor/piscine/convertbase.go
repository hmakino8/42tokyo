package piscine

func ConvertBase(nbr, baseFrom, baseTo string) string {
	return printNbrBase(atoiBase(nbr, baseFrom), baseTo)
}

func atoiBase(s string, base string) int {
	m := map[rune]int{}
	baseLen := strLen(base)

	if !isValidBase(base, &m) || baseLen < 2 {
		return 0
	}
	nb := 0
	var rs = []rune(s)
	for _, r := range rs {
		var overFlow bool
		nb, overFlow = isOverFlow(nb, baseLen, m[r])
		if overFlow {
			return nb
		}
	}
	return nb
}

func isValidBase(base string, m *map[rune]int) bool {

	for idx, r := range base {
		if _, check := (*m)[r]; check {
			return false
		}
		(*m)[r] = idx
	}
	return true
}

func isOverFlow(nb int, baseLen int, id int) (int, bool) {
	const INT_MAX = int(^uint(0) >> 1)

	if ((INT_MAX - id) / baseLen) < nb {
		return INT_MAX, true
	}
	return (nb * baseLen) + id, false
}

func printNbrBase(nbr int, base string) string {
	baseLen := strLen(base)
	ret := ""

	if baseLen < nbr {
		ret += printNbrBase(nbr/baseLen, base)
	}
	ret += string(base[nbr%baseLen])
	return ret
}

func strLen(s string) (l int) {
	for range s {
		l++
	}
	return l
}

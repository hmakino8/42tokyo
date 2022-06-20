package piscine

func Index(s string, toFind string) int {
	var rs, ts = []rune(s), []rune(toFind)
	rLen, tLen := strLen(rs), strLen(ts)

	if rLen == 0 || tLen == 0 || rLen < tLen {
		return -1
	}
	for rIdx := 0; rIdx+tLen <= rLen; rIdx++ {
		if string(rs[rIdx:rIdx+tLen]) == string(ts) {
			return rIdx
		}
	}
	return -1
}

func strLen(r []rune) (l int) {
	for range r {
		l++
	}
	return l
}

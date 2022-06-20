package piscine

func SplitWhiteSpaces(s string) []string {
	ret := []string{}
	sLen := strLen(s)

	if sLen == 0 {
		return ret
	}
	for i := 0; i < sLen; i++ {
		for ; i < sLen && isCtrlChar(s[i]); i++ {
		}
		elem, elemLen := split(s[i:])
		if elemLen != 0 {
			ret = append(ret, elem)
		}
		i += elemLen
	}
	return ret
}

func isCtrlChar(b byte) bool {
	return b == ' ' || b == '\t' || b == '\n'
}
func split(s string) (string, int) {
	i := 0

	for _, r := range s {
		if isCtrlChar(byte(r)) {
			break
		}
		i++
	}
	return s[:i], i
}

func strLen(s string) (l int) {
	for range s {
		l++
	}
	return l
}

package piscine

func split(s, sep string) ([]string, int) {
	sLen := strLen(s)
	sepLen := strLen(sep)
	rtn := []string{}

	for sIdx, locate := 0, 0; sIdx < sLen && 0 <= locate; sIdx++ {
		locate, ok := sepLocate(s[sIdx:], sep, sepLen)
		if locate == 0 {
			if ok {
				sIdx += sepLen - 1
			} else {
				rtn = append(rtn, s[sIdx:])
				return rtn, sliceLen(rtn)
			}
		}
		if 0 < locate {
			rtn = append(rtn, s[sIdx:sIdx+locate])
			sIdx += locate
		}
	}
	return rtn, sliceLen(rtn)
}

func sepLocate(s string, sep string, sepLen int) (int, bool) {
	sLen := strLen(s)

	if sLen == 0 || sepLen == 0 {
		return -1, false
	}
	for locate := 0; locate+sepLen <= sLen; locate++ {
		if s[locate:locate+sepLen] == sep {
			return locate, true
		}
	}
	return 0, false
}

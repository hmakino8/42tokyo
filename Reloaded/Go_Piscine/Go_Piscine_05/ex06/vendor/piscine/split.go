package piscine

func Split(s, sep string) []string {
	sLen := strLen(s)
	sepLen := strLen(sep)
	ret := []string{}

	if sepLen == 0 {
		ret = append(ret, s)
		return ret
	}
	for i, locate := 0, 0; i < sLen && 0 <= locate; i++ {
		locate, ok := sepLocate(s[i:], sep, sepLen)
		if locate == 0 {
			if ok {
				i += sepLen - 1
			} else {
				ret = append(ret, s[i:])
				return ret
			}
		}
		if 0 < locate {
			ret = append(ret, s[i:i+locate])
			i += locate + sepLen - 1
		}
	}
	return ret
}

func sepLocate(s string, sep string, sepLen int) (int, bool) {
	sLen := strLen(s)

	if sLen == 0 {
		return -1, false
	}
	for locate := 0; locate+sepLen <= sLen; locate++ {
		if s[locate:locate+sepLen] == sep {
			return locate, true
		}
	}
	return 0, false
}

func strLen(s string) (l int) {
	for range s {
		l++
	}
	return l
}

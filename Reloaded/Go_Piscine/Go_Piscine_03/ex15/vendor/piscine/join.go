package piscine

func Join(strs []string, sep string) string {
	var rtn string

	for idx, str := range strs {
		if 0 < idx {
			rtn += sep
		}
		rtn += str
	}
	return rtn
}

package piscine

func Join(strs []string, sep string) string {
	var ret string

	for i, str := range strs {
		if 0 < i {
			ret += sep
		}
		ret += str
	}
	return ret
}

package piscine

func StrRev(s string) string {
	var r = []rune(s)
	var l = StrLen(s)

	for st := 0; st < l / 2; st++ {
		r[st], r[l - st - 1] = r[l - st - 1], r[st]
	}
	return string(r)
}

func StrLen(s string) int {
	l := 0
	for range s {
		l++
	}
	return l
}

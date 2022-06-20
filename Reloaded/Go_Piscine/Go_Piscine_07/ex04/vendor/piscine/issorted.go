package piscine

func IsSorted(f func(a, b int) int, a []int) bool {
	if f == nil {
		return false
	}
	first, asc, desc, eq := 0, 0, 0, 0
	for itr, second := range a {
		if 0 < itr {
			switch f(first, second) {
			case 1:
				asc++
			case -1:
				desc++
			case 0:
				eq++
			}
			if asc+eq != itr && desc+eq != itr {
				return false
			}
		}
		first = second
	}
	return true
}

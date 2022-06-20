package piscine

func Compact(ptr *[]string) int {
	if ptr == nil {
		return 0
	}
	cnt := countEmptyElem(*ptr)
	newPtr := make([]string, cnt)
	i := 0

	for _, elem := range *ptr {
		if elem != "" {
			newPtr[i] = elem
			i++
		}
	}
	*ptr = newPtr
	return cnt
}

func countEmptyElem(ptr []string) (cnt int) {
	for _, elem := range ptr {
		if elem != "" {
			cnt++
		}
	}
	return
}

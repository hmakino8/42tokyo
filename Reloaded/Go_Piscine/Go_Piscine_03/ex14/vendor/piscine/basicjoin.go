package piscine

func BasicJoin(elems []string) string {
	var rtn string

	for _, elem := range elems {
		rtn += elem
	}
	return rtn
}

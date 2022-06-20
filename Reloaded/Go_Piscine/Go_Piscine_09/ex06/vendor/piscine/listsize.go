package piscine

func listSize(l *List) int {
	var lSize int

	for it := l.Head; it != nil; lSize++ {
		it = it.Next
	}
	return lSize
}

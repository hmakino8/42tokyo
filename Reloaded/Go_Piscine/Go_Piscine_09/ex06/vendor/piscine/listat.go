package piscine

func listAt(l *NodeL, pos int) *NodeL {
	for idx, it := 0, l; it != nil; idx++ {
		if idx == pos {
			return it
		}
		it = it.Next
	}
	return nil
}

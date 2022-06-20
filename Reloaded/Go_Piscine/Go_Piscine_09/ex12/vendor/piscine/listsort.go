package piscine

type NodeI struct {
	Data int
	Next *NodeI
}

func ListSort(l *NodeI) *NodeI {
	for i1 := l; i1 != nil; i1 = i1.Next {
		for i2 := i1.Next; i2 != nil; i2 = i2.Next {
			if i2.Data < i1.Data {
				i1.Data, i2.Data = i2.Data, i1.Data
			}
		}
	}
	return l
}

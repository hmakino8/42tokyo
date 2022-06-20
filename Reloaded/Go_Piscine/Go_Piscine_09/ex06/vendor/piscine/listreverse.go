package piscine

type NodeL struct {
	Data interface{}
	Next *NodeL
}

type List struct {
	Head *NodeL
	Tail *NodeL
}

func ListReverse(l *List) {
	if l == nil {
		return
	}
	lSize := listSize(l)

	if lSize == 1 {
		return
	}

	for i, j := 0, lSize-1;  i < j; i++ {
		listAt(l.Head, i).Data, listAt(l.Head, j).Data = listAt(l.Head, j).Data, listAt(l.Head, i).Data
		j--
	}
}

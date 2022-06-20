package piscine

func ListPushFront(l *List, data interface{}) {
	if l == nil {
		return
	}

	node := listNew(data)
	node.Next = l.Head
	l.Head = node
}

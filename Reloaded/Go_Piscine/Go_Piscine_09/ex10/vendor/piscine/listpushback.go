package piscine

func ListPushBack(l *List, data interface{}) {
	if l == nil {
		return
	}

	node := listNew(data)
	if l.Head == nil {
		l.Head = node
		l.Tail = node
	} else {
		l.Tail.Next = node
		l.Tail = node
	}
}

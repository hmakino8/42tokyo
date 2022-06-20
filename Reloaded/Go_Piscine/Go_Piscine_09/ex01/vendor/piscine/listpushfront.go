package piscine

type NodeL struct {
	Data interface{}
	Next *NodeL
}

type List struct {
	Head *NodeL
	Tail *NodeL
}

func ListPushFront(l *List, data interface{}) {
	if l == nil {
		return
	}

	node := listNew(data)
	node.Next = l.Head
	l.Head = node
}

package piscine

type NodeL struct {
	Data interface{}
	Next *NodeL
}

type List struct {
	Head *NodeL
	Tail *NodeL
}

func ListRemoveIf(l *List, data_ref interface{}) {
	if l == nil {
		return
	}
	it := l.Head
	l.Head = nil
	var nodeNew *NodeL = nil

	for it != nil {
		if it.Data != data_ref {
			if nodeNew == nil {
				nodeNew = it
				l.Head = it
			} else {
				nodeNew.Next = it
				nodeNew = it
			}
		}
		it = it.Next
	}
	if nodeNew != nil {
		nodeNew.Next = nil
	}
	l.Tail = nodeNew
}

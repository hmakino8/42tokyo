package piscine

type NodeL struct {
	Data interface{}
	Next *NodeL
}

type List struct {
	Head *NodeL
	Tail *NodeL
}

func CompStr(a, b interface{}) bool {
	return a == b
}

func ListFind(l *List, ref interface{}, comp func(a, b interface{}) bool) *interface{} {
	if l == nil || comp == nil {
		return nil
	}
	it := l.Head
	for it != nil {
		if comp(it.Data, ref) {
			return &it.Data
		}
		it = it.Next
	}
	return nil
}

package piscine

func listNew(data interface{}) *NodeL {
	var newL NodeL
	newL.Data = data
	newL.Next = nil
	return &newL
}

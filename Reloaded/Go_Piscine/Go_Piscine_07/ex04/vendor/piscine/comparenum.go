package piscine

func CompareNum(a, b int) int {
	switch {
	case a > b:
		return 1
	case a == b:
		return 0
	default:
		return -1
	}
}

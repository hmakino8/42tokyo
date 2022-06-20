package piscine

func AppendRange(min, max int) []int {
	aRange := []int{}

	if min >= max {
		return nil
	}
	for idx := 0; idx < max-min; idx++ {
		aRange = append(aRange, min+idx)
	}
	return aRange
}

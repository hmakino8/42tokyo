package piscine

func MakeRange(min, max int) []int {
	mRange := []int{}

	if min >= max {
		return nil
	}
	mRange = make([]int, max-min, max-min)
	for idx, _ := range mRange {
		mRange[idx] = min + idx
	}
	return mRange
}

package piscine

func ActiveBits(n int) int {
	intSize := 32 << (^uint(0) >> 63)
	aBits := 0

	for itr := 0; itr < intSize; itr++ {
		if n>>itr&1 == 1 {
			aBits++
		}
	}
	return aBits
}

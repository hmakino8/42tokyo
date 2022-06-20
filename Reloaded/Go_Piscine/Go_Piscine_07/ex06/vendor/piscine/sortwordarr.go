package piscine

func SortWordArr(result []string) {
	rLen := sliceLen(result)

	for i, _ := range result {
		for j := i + 1; j < rLen; j++ {
			if result[j] < result[i] {
				result[i], result[j] = result[j], result[i]
			}
		}
	}
}

func sliceLen(s []string) (l int) {
	for range s {
		l++
	}
	return l
}

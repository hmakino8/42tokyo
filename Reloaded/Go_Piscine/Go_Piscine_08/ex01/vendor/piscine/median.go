package piscine

func Median(a, b, c, d, e int) int {
	m := []int{a, b, c, d, e}

	sortParams(&m)
	return m[2]
}

func sortParams(m *[]int) {
	for i, _ := range *m {
		for j := i + 1; j < 5; j++ {
			if (*m)[j] < (*m)[i] {
				(*m)[i], (*m)[j] = (*m)[j], (*m)[i]
			}
		}
	}
}

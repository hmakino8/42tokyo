package piscine

func SortIntegerTable(table []int) {
	for j, _ := range table {
		for i, _ := range table {
			if (table[j] < table[i]) {
				table[j], table[i] = table[i], table[j]
			}
		}
	}
}

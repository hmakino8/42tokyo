package piscine

import "ft"

func EightQueens() {
	q := []int{0, 0, 0, 0, 0, 0, 0, 0}

	setQ(q, 0)
}

func setQ(q []int, i int) {
	if (i == 8) {
		if (checkLocate(q) == true) {
			printQueenLocate(q)
		}
		return
	}
	for j := 1; j <= 8; j++ {
		q[i] = j
		setQ(q, i + 1)
	}
}

func checkLocate(q []int) bool {
	for i := 0; i < 7; i++ {
		for j := i + 1; j < 8; j++ {
			if (check(q[i], q[j], i, j) == false) {
				return false
			}
		}
	}
	return true
}

func check(qi int, qj int, i_idx int, j_idx int) bool {
	abs := qi - qj

	if (abs < 0) {
		abs = -abs
	}
	if (abs == 0 || abs == j_idx - i_idx) {
		return false
	}
	return true
}

func printQueenLocate(q []int) {
	for itr := 0; itr < 8; itr++ {
		ft.PrintRune(rune(q[itr] + '0'))
	}
	ft.PrintRune('\n')
}

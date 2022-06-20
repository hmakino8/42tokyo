package piscine

import "ft"

func PrintCombN(n int) {
	init := []int{0, 1, 2, 3, 4, 5, 6, 7, 8, 9}
	comb := init[0:n]

	Putcomb(init, comb, n)
	for ; comb[0] < 10 - n || comb[n - 1] < 9; {
		if (comb[n - 1] < 9) {
			comb[n - 1]++
		}else if (1 < n) {
			Carry(comb, n)
		}
		Putcomb(init, comb, n)
	}
}

func Putcomb(init []int, comb []int, n int) {
	for _, num := range comb {
		ft.PrintRune(rune(num) + '0')
	}
	if (comb[0] == 10 - n && comb[n - 1] == 9) {
		ft.PrintRune('\n')
	}else{
		ft.PrintRune(',')
		ft.PrintRune(' ')
	}
}

func Carry(comb []int, n int) {
	idx := n - 1
	for max := 9; 0 < idx && comb[idx] == max; max-- {
		idx--
	}
	comb[idx]++
	for ; idx < n - 1; idx++ {
		comb[idx + 1] = comb[idx] + 1
	}
}


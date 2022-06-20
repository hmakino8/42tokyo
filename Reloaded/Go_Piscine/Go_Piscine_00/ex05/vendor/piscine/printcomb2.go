package piscine

import "ft"

func PrintComb2() {
	for comb := []int{0, 1}; comb[0] < 99; {
		for ; comb[1] < 100 ; {
			PutComb(comb)
			comb[1]++
		}
		comb[0]++
		comb[1] = comb[0] + 1
	}
}

func PutComb(comb []int) {
	for itr := range comb {
		ft.PrintRune(rune(comb[itr] / 10) + '0')
		ft.PrintRune(rune(comb[itr] % 10) + '0')
	if (itr == 0) {
		ft.PrintRune(' ')
	}
	if (itr == 1 && comb[0] == 98 && comb[1] == 99) {
		ft.PrintRune('\n')
	}else if (itr == 1) {
		ft.PrintRune(',')
		ft.PrintRune(' ')
	}
	}
}

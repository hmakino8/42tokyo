package piscine

import "ft"

func PrintComb() {
	comb := []int{0, 1, 2}
	for ; comb[0] <= 7; {
		for ; comb[1] <= 8; {
			for ; comb[2] <= 9; {
				PutComb(comb)
				comb[2]++
			}
			comb[1]++
			comb[2] = comb[1] + 1
		}
		comb[0]++
		comb[1] = comb[0] + 1
		comb[2] = comb[1] + 1
	}
}

func PutComb(comb []int) {
	for i := 0; i < 3 ;i++ {
		ft.PrintRune(rune(comb[i]) + '0')
	}
	if (comb[0] == 7 && comb[2] == 9) {
		ft.PrintRune('\n')
	}else{
		ft.PrintRune(',')
		ft.PrintRune(' ')
	}
}

package piscine

import "ft"

func PrintReverseAlphabet() {
	for c := 'z'; 'a' <= c; c-- {
		ft.PrintRune(c)
	}
	ft.PrintRune('\n')
}

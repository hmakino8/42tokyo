package piscine

import "ft"

func PrintWordsTables(a []string) {
	for _, elem := range a {
		for _, r := range elem {
			ft.PrintRune(r)
		}
		ft.PrintRune('\n')
	}
}

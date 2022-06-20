package piscine

import (
	"ft"
	"os"
)

func PrintParams() {
	for _, arg := range os.Args[1:] {
		for _, r := range arg {
			ft.PrintRune(r)
		}
		ft.PrintRune('\n')
	}
}

package piscine

import (
	"ft"
	"os"
)

func RevParams() {
	for _, arg := range os.Args[1:] {
		defer printParams(arg)
	}
}

func printParams(arg string) {
	for _, r := range arg {
		ft.PrintRune(r)
	}
	ft.PrintRune('\n')
}

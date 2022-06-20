package piscine

import (
	"ft"
	"os"
)

func PrintProgramName() {
	var latestSlash int

	for i, c := range os.Args[0] {
		if c == '/' {
			latestSlash = i
		}
	}
	for _, c := range os.Args[0][latestSlash+1:] {ft.PrintRune(c)}
	ft.PrintRune('\n')
}

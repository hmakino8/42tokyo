package main

import (
	"ft"
	"os"
)

func printStr(s string) {
	for _, r := range s {
		ft.PrintRune(r)
	}
	ft.PrintRune('\n')
}

func even(nbr int) int {
	return nbr % 2
}

type boolean int

func isEven(nbr int) boolean {
	const yes boolean = 1
	const no boolean = 0

	if even(nbr) == 1 {
		return yes
	} else {
		return no
	}
}

func lengthOfArg(args []string) (length int) {
	for range args {
		length++
	}
	return
}

func main() {
	const EvenMsg = "I have an even number of arguments"
	const OddMsg = "I have an odd number of arguments"
	lengthOfArg := lengthOfArg(os.Args)

	if isEven(lengthOfArg) == 1 {
		printStr(EvenMsg)
	} else {
		printStr(OddMsg)
	}
}

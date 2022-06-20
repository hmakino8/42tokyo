package piscine

import (
	"ft"
	"os"
)

func SortParams() {
	sort := os.Args[1:]
	sortLen := strLen(sort)

	for fixedI, _ := range sort {
		for fluctI := fixedI + 1; fluctI < sortLen; fluctI++ {
			if sort[fluctI] < sort[fixedI] {
				sort[fixedI], sort[fluctI] = sort[fluctI], sort[fixedI]
			}
		}
	}
	PrintParams(sort)
}

func PrintParams(sort []string) {
	for _, arg := range sort {
		for _, r := range arg {
			ft.PrintRune(r)
		}
		ft.PrintRune('\n')
	}
}

func strLen(s []string) (l int) {
	for range s {
		l++
	}
	return l
}

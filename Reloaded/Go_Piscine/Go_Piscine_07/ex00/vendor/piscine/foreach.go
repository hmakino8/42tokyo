package piscine

import "ft"

func ForEach(f func(int), a []int) {
	if f == nil {
		return
	}
	for _, v := range a {
		f(v)
	}
	ft.PrintRune('\n')
}

package piscine

import "ft"

func PrintNbr(nbr int) {
	sign := 1

	if nbr < 0 {
		ft.PrintRune('-')
		sign = -1
	}
	uNbr := uint(nbr * sign)
	for 0 < uNbr {
		defer ft.PrintRune(rune(uNbr%10 + '0'))
		uNbr /= 10
	}
}

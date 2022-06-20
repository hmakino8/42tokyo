package main

import (
	"ft"
	"piscine"
)

func main() {
	result := piscine.Rot14("Hello! How are You?")
	result := piscine.Rot14("")

	for _, r := range result {
		ft.PrintRune(r)
	}
	ft.PrintRune('\n')
}

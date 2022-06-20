package piscine

import "os"

func ComCheck() {
	args := os.Args

	for _, elem := range args {
		if elem == "42" || elem == "piscine" || elem == "piscine 42" {
			os.Stdout.WriteString("Alert!!!")
			return
		}
	}
	return
}

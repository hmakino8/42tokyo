package main

import (
	"flag"
	"fmt"
)

func main() {
	delim := flag.String("s", "", "separator (default \" \")")
	isFlagN := flag.Bool("n", false, "omit trailing newline")

	flag.Parse()
	args := flag.Args()
	output := ""
	for itr, arg := range args {
		switch {
		case itr != 0:
			if *delim == "" {
				output += " "
			} else {
				output += *delim
			}
		}
		output += arg
	}
	if *isFlagN {
		fmt.Printf("%s", output)
		return
	}
	fmt.Println(output)
}

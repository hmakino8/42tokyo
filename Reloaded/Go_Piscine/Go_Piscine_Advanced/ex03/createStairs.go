package main

import (
	"fmt"
	"os"
	"strconv"
)

func main() {
	stair, _ := strconv.Atoi(os.Args[1])

	if 0 < stair {
		for itr := 1; itr <= stair; itr++ {
			stair -= itr
			for count := itr; 0 < count; count-- {
				fmt.Printf("*")
			}
			fmt.Printf("\n")
		}
	}
}

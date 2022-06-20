package main

import (
	"fmt"
	"os"
	"regexp"
)

func main() {
	re := regexp.MustCompile(`[\w\-\._]+@[\w\-\._]+\.[A-Za-z]+`)
	if len(os.Args) == 1 {
		fmt.Println("Invalid argument")
		return
	}
	for itr := 1; itr < len(os.Args); itr++ {
		res := re.MatchString(os.Args[itr])
		if res == true {
			fmt.Println(os.Args[itr], "is a valid email address.")
		} else {
			fmt.Println(os.Args[itr], "is NOT a valid email address.")
		}
	}
}

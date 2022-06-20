package main

import (
	"fmt"
	"piscine"
)

func main() {
	fmt.Println("[PDF test]")
	fmt.Println(piscine.Capitalize("Hello! How are you? How+are+things+4you?"))
	fmt.Println("[original test]")
	fmt.Println(piscine.Capitalize("heLLo! HOw ArE yOu? HOw+ARe+tHINGs+4yOu"))
}

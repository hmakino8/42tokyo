package main

import (
	"fmt"
	"piscine"
	//"strings"
)

func main() {
	s1 := "HelloHAhowHAareHAyou?"
	s2 := "HelloHAhowHAareHAyouHA?"
	s3 := "Hellohowareyou?"
	s4 := "AHHAe"
	s5 := "A"
	s6 := ""
	s7 := "HelloHAHAHAHAHAhowHAareHAyouHA?"
	sep1 := "HA"
	sep2 := "H"
	sep3 := "A"
	sep4 := ""
	sep5 := "HAHA"

	fmt.Printf("string :%s\nsep    :%s\nresult :%v\n\n", s1, sep1, piscine.Split(s1, sep1))
	fmt.Printf("string :%s\nsep    :%s\nresult :%v\n\n", s2, sep1, piscine.Split(s2, sep1))
	fmt.Printf("string :%s\nsep    :%s\nresult :%v\n\n", s3, sep2, piscine.Split(s3, sep2))
	fmt.Printf("string :%s\nsep    :%s\nresult :%v\n\n", s4, sep1, piscine.Split(s4, sep1))
	fmt.Printf("string :%s\nsep    :%s\nresult :%v\n\n", s5, sep3, piscine.Split(s5, sep3))
	fmt.Printf("string :%s\nsep    :%s\nresult :%v\n\n", s6, sep3, piscine.Split(s6, sep3))
	fmt.Printf("string :%s\nsep    :%s\nresult :%v\n", s6, sep4, piscine.Split(s6, sep4))
	fmt.Printf("string :%s\nsep    :%s\nresult :%v\n", s7, sep5, piscine.Split(s7, sep5))
	fmt.Printf("string :%s\nsep    :%s\nresult :%v\n", s7, sep4, piscine.Split(s7, sep4))
}

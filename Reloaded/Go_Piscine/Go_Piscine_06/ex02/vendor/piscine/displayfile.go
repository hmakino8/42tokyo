package piscine

import (
	"ft"
	"os"
)

func DisplayFile() {
	args := os.Args

	if !isValidArgs(args) {
		return
	}
	f, err := os.Open(args[1])
	defer f.Close()
	if err != nil {
		os.Stderr.WriteString("Fail to open file\n")
		return
	}
	var tmpbuf [1024]byte
	buf := tmpbuf[:]
	for {
		readSize, err := f.Read(buf)
		if err != nil {
			if err.Error() == "EOF" {
				break
			}
			os.Stderr.WriteString("Fail to read file\n")
		}
		os.Stdout.Write(buf[:readSize])
	}
}

func isValidArgs(args []string) bool {
	count := argsCount(args)

	if count == 1 {
		os.Stderr.WriteString("File name missing\n")
		return false
	}
	if 2 < count {
		os.Stderr.WriteString("Too many arguments\n")
		return false
	}
	return true
}

func argsCount(args []string) (count int) {
	for range args {
		count++
	}
	return
}

func printStr(s string) {
	for _, r := range s {
		ft.PrintRune(r)
	}
}

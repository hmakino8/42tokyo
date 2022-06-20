package piscine

import "os"

func Cat() {
	args := os.Args
	count := argsCount(args)
	var tmpbuf [1024]byte

	if count == 1 {
		printStdin(args, tmpbuf)
		return
	}
	printFileContent(args, tmpbuf)
}

func printStdin(args []string, tmpbuf [1024]byte) {
	r := os.Stdin

	for {
		buf := tmpbuf[:]
		readSize, err := r.Read(buf)
		if err != nil {
			os.Exit(1)
		}
		os.Stdout.Write(buf[:readSize])
	}
}

func printFileContent(args []string, tmpbuf [1024]byte) {
	for _, filename := range args[1:] {
		f, err := os.Open(filename)
		defer f.Close()
		if err != nil {
			os.Stderr.WriteString("ERROR: "+err.Error()+"\n")
			os.Exit(1)
		}
		for {
			buf := tmpbuf[:]
			readSize, err := f.Read(buf)
			if err != nil {
				if err.Error() == "EOF" {
					break
				}
				os.Stderr.WriteString("Fail to read\n")
				os.Exit(1)
			}
			os.Stdout.Write(buf[:readSize])
		}
	}
}

func argsCount(args []string) (count int) {
	for range args {
		count++
	}
	return
}

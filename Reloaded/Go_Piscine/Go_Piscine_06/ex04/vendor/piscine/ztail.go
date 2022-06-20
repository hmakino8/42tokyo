package piscine

import "os"

func ZTail() {
	argS := os.Args
	argC := argsCount(argS)
	var tmpBuf [1024]byte

	checkArgsCount(argC)
	op := checkOption(argS, argC)
	if 0 < op {
		hasOption(argS, argC, tmpBuf, op)
	} else {
		noOption(argS, argC, tmpBuf)
	}
}

func hasOption(argS []string, argC int, tmpBuf [1024]byte, op int64) {
	for itr, fName := range argS[3:] {
		f, err := os.Open(fName)
		defer f.Close()
		if err != nil {
			os.Stderr.WriteString(err.Error() + "\n")
			defer os.Exit(1)
			continue
		}
		fi, err := f.Stat()
		if err != nil {
			break
		}
		fsize := fi.Size()
		var stc []byte
		var rstc []string
		elmcnt := 0
		for {
			buf := tmpBuf[:]
			if fsize < op {
				op = fsize
			}
			rSize, err := f.ReadAt(buf, fsize-op)
			stc = appendStock(stc, buf[:rSize])
			rstc, elmcnt = replaceStock(stc)
			if err != nil {
				if err.Error() == "EOF" {
					printLine(argC-2, itr, fName, rstc, elmcnt)
					break
				}
				os.Exit(1)
			}
		}
	}
}

func noOption(argS []string, argC int, tmpBuf [1024]byte) {
	for itr, fName := range argS[1:] {
		f, err := os.Open(fName)
		defer f.Close()
		if err != nil {
			os.Stderr.WriteString(err.Error() + "\n")
			defer os.Exit(1)
			continue
		}
		var stc []byte
		var rstc []string
		elmcnt := 0
		for {
			buf := tmpBuf[:]
			rSize, err := f.Read(buf)
			if err != nil {
				if err.Error() == "EOF" {
					break
				}
				os.Exit(1)
			}
			stc = appendStock(stc, buf[:rSize])
			rstc, elmcnt = replaceStock(stc)
		}
		printLine(argC, itr, fName, rstc, elmcnt)
	}
}

func replaceStock(stc []byte) (rstc []string, elmcnt int) {
	cnt := 0

	for _, lf := range stc {
		if lf == '\n' {
			cnt++
		}
	}
	rstc, elmcnt = split(string(stc), "\n")
	if 10 < cnt {
		return rstc[elmcnt-10:], elmcnt
	}
	return rstc, elmcnt
}

func appendStock(stc []byte, buf []byte) []byte {
	for _, r := range buf {
		stc = append(stc, r)
	}
	return stc
}

func printLine(argC int, itr int, fName string, rstc []string, elmcnt int) {
	if itr != 0 && itr < argC {
		os.Stdout.WriteString("\n")
	}
	if 2 < argC {
		os.Stdout.WriteString("==> " + fName + " <==\n")
	}
	for _, elem := range rstc {
		os.Stdout.WriteString(elem)
		os.Stdout.WriteString("\n")
	}
}

func argsCount(argS []string) (argC int) {
	for range argS {
		argC++
	}
	return
}

func checkArgsCount(argC int) {
	if argC == 1 {
		os.Exit(1)
	}
}

func checkOption(argS []string, argC int) (op int64) {
	if argS[1] == "-c" {
		if argC <= 3 {
			os.Exit(1)
		}
		op = int64(atoi(argS[2]))
		if op <= 0 {
			os.Exit(1)
		}
	}
	return
}

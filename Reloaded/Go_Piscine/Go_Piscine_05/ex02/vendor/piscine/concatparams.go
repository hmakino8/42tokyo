package piscine

func ConcatParams(args []string) string {
	var s string

	for itr, arg := range args {
		if itr != 0 {
			s += "\n"
		}
		s += arg
	}
	return s
}

package main

import "ft"

func PrintStr(s string) {
	for _, r := range s {
		ft.PrintRune(r)
	}
	ft.PrintRune('\n')
}

const OPEN = 1
const CLOSE = 0

type Door struct {
	state int
}

func OpenDoor(ptrDoor *Door) {
	PrintStr("Door Opening...")
	ptrDoor.state = OPEN
}

func CloseDoor(ptrDoor *Door) {
	PrintStr("Door Closing...")
	ptrDoor.state = CLOSE
}

func IsDoorOpen(ptrDoor *Door) bool {
	PrintStr("is the Door opened ?")
	if ptrDoor.state == OPEN {
		PrintStr("YES")
		return true
	}
	PrintStr("NO")
	return false
}

func IsDoorClose(ptrDoor *Door) bool {
	PrintStr("is the Door closed ?")
	if ptrDoor.state == CLOSE {
		PrintStr("YES")
		return true
	}
	PrintStr("NO")
	return false
}

func main() {
	door := &Door{}

	OpenDoor(door)
	if IsDoorClose(door) {
		OpenDoor(door)
	}
	if IsDoorOpen(door) {
		CloseDoor(door)
	}
	if door.state == OPEN {
		CloseDoor(door)
	}
}

package main

import (
	"fmt"
)

var ps = fmt.Printf
var ss = fmt.Scanf

const mod int = 1000000007

func main() {
	a := 0
	status := false
	var s string
	ss("%d\n%s\n", &a, &s)
	A, I := 0, 0
	for i := 0; i < a; i++ {
		if s[i] == 'A' {
			A++
		} else if s[i] == 'I' {
			status = true
			I++
		}
	}
	if status == false {
		ps("%d\n", A)
	} else {
		if I == 1 {
			ps("1\n")
		} else {
			ps("0\n")
		}
	}
}

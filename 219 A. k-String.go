package main

import (
	"fmt"
)

var ps = fmt.Printf
var ss = fmt.Scanf

func main() {

	var s string
	var k int
	ss("%d\n%s\n", &k, &s)
	count := [27]int{0}
	for i := 0; i < len(s); i++ {
		count[int(s[i])-97]++
	}
	s = ""
	for i := 0; i <= 25; i++ {
		c := count[i] / k
		if count[i]%k == 0 {
			for j := 0; j < c; j++ {
				s = s + string(i+97)
			}
		} else {
			ps("-1")
			return
		}
	}
	for k > 0 {
		ps(s)
		k--
	}
}

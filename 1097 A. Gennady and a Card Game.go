package main

import (
	"fmt"
)

var ps = fmt.Printf
var ss = fmt.Scanf

const mod int = 1000000007

func main() {
	t := 5
	var s, s1 string
	res := "NO\n"
	ss("%s\n", &s)
	for t > 0 {
		ss("%s", &s1)
		for i := range s {
			for j := range s1 {
				if s[i] == s1[j] {
					res = "YES\n"
				}
			}
		}
    
		t = t - 1
	}
	ps("%s", res)
}

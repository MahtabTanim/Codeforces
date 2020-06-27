package main

import (
	"fmt"
)

var ps = fmt.Printf
var ss = fmt.Scanf

const mod int = 1000000007

func main() {
  t,m,count :=0
	var s, s1 string
	res := ""
	ss("%d\n%s", &t, &s)
	for i := 0; i < t-1; i++ {
		s1 = ""
		count = 0
		s1 = s1 + string(s[i]) + string(s[i+1])
		for j := 0; j < t-1; j++ {
			if s[j] == s1[0] && s[j+1] == s1[1] {
				count++
			}
		}
		if count > m {
			m = count
			res = s1
		}
	}
	ps("%s", res)
}

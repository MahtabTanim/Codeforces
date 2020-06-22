package main

import (
	"fmt"
)

var ps = fmt.Printf
var ss = fmt.Scanf

const mod int = 1000000007

func main() {
	t, n := 0, 0
	ss("%d\n", &t)
	for t > 0 {
		ss("%d\n", &n)
		var sum int64 = int64(n) * int64(n+1)
		sum /= 2
		var sum2, j int64 = 0, 1
		for j <= int64(n) {
			sum2 += j * 2
			j = j * 2
		}
		ps("%d\n", sum-sum2)
		t = t - 1
	}
}

package main

import (
	"fmt"
	"math"
)

var ps = fmt.Printf
var ss = fmt.Scanf

const mod int = 1000000007

func main() {
	n, a := 0, 0
	ss("%d\n", &n)
	A := []int{0, 0, 0, 0, 0, 0, 0, 0}
	for i := 0; i < n; i++ {
		ss("%d", &a)
		A[a]++
	}
	a36, a24, a26 := 0, 0, 0
	a36 = int(math.Min(float64(A[1]), float64(A[3])))
	a36 = int(math.Min(float64(a36), float64(A[6])))
	A[1] -= a36
	A[3] -= a36
	A[6] -= a36
	a24 = int(math.Min(float64(A[1]), float64(A[2])))
	a24 = int(math.Min(float64(a24), float64(A[4])))
	A[1] -= a24
	A[2] -= a24
	A[4] -= a24
	a26 = int(math.Min(float64(A[1]), float64(A[2])))
	a26 = int(math.Min(float64(a26), float64(A[6])))
	A[1] -= a26
	A[2] -= a26
	A[6] -= a26
	for i := 1; i <= 7; i++ {
		if A[i] > 0 {
			ps("-1")
			return
		}
	}
	for i := 1; i <= a26; i++ {
		ps("1 2 6\n")
	}
	for i := 1; i <= a36; i++ {
		ps("1 3 6\n")
	}
	for i := 1; i <= a24; i++ {
		ps("1 2 4\n")
	}
}

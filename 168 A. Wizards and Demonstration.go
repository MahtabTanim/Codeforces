package main

import (
	"fmt"
	"math"
)

func main() {
	var n, x, y int
	fmt.Scanf("%d %d %d\n", &n, &x, &y)
	var ans = int(math.Ceil(float64(n*y) / 100))
	if x >= ans {
		fmt.Printf("0\n")
	} else {
		fmt.Printf("%d\n", ans-x)
	}
}

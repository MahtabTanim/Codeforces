package main

import (
	"fmt"
	"math"
)

func main() {
	t := 0
	fmt.Scanf("%d\n", &t)
	for t > 0 {
		n := 0
		fmt.Scanf("%d\n", &n)
		if n < 60 {
			fmt.Printf("NO\n")
		} else {
			if status(n) == false {
				fmt.Printf("NO\n")
			} else {
				fmt.Printf("YES\n")
			}
		}
		t = t - 1
	}
}

func status(x int) bool {
	n := 180 - x
	n = int(math.Abs(float64(n)))
	if 360%n == 0 {
		return true
	}
	return false
}

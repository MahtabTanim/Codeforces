package main

import (
	"fmt"
	"math"
)

func main() {
	var x, y float64
	fmt.Scanf("%f %f\n", &x, &y)
	var ans float64 = math.Min((x+y)/3, math.Min(x, y))
	var ans2 = int(ans)
	fmt.Println(ans2)
}

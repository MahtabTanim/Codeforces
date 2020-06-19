package main

import (
	"fmt"
)

var ps = fmt.Printf

//main function

func main() {
	var s string
	fmt.Scanf("%s\n", &s)
	if len(s) == 1 {
		ps("%d\n", 0)
		return
	}
  
	sum := ss(s)
	count := 1
	for lens(sum) > 1 {
		sum = lenss(sum)
		count++
	}
	ps("%d", count)
}

//function returning sum of the initial string 

func ss(s string) int {
	sum := 0
	for i := 0; i < len(s); i++ {
		sum = sum + (int(s[i]) - 48)
	}
	return sum
}

//function returning number of digits 

func lens(n int) int {
	dcount := 0
	for n > 0 {
		dcount++
		n = n / 10
	}
	return dcount
}

//function returning sum of a number

func lenss(n int) int {
	sum := 0
	for n > 0 {
		sum += n % 10
		n = n / 10
	}
	return sum
}

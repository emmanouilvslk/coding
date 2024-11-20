package main

import "fmt"

type gasEngine struct{
	mpg uint8
	gallons uint8
}

func main(){

	var myEngine gasEngine

	fmt.Println(myEngine.gallons)
	// fmt.Println("Hello World!")

	// var myInt int
	// fmt.Println(myInt)

	// var intNum32 = 10
	// fmt.Println(intNum32)

	// myString := "Hello sir"

	// fmt.Println(myString)

	// printme("Hellow WORLD!")

	// fmt.Println(intDivision(10,2))

	// var i int = 0

	// for i<10{
	// 	fmt.Println(i)
	// 	i= i+1
	// }

	// for i := 0; i < 5; i++ {
	// 	fmt.Println(i)
	// }


	var myString = []rune("résumé")
	var indexed = myString[0]
	fmt.Println(indexed)
	fmt.Printf("%v, %T", indexed, indexed)

	for i, v := range myString{
		fmt.Println(i,v)
	}

	fmt.Println(len(myString))

	var myRune = 'a'
	fmt.Printf("\n myRune = %v", myRune)



}

func printme(myString string){
	fmt.Println(myString)
}

func intDivision(numerator int, denominator int) int{
	var result int = numerator / denominator
	return result
}
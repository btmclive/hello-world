package main

import "fmt"

func main() {
	var name string

	fmt.Print("Please enter your name: ")
	fmt.Scanln(&name)
  
  fmt.Println("\nIf you read this, you lost the Game.")
  ret := fmt.Sprintf("Hello! My name is %s. I just lost the game. Incredible. yuh", name)
  fmt.Println(ret)
}

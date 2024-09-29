#include <iostream>

int main() {
  std::string buf;

  std::cout << "Please enter your name: ";
  std::cin >> buf;
  std::cout << "\n";
  std::cout << "If you read this, you lost the Game.\n";
  std::cout << "Hello! My name is " + buf +
                   ". I just lost the game. Incredible. yuh"
            << std::endl;
  return 0;
}

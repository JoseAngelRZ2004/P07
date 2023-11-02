#include "sum-of-digits.h"

void PrintProgramPurpose () {
  std::cout << "Write a program that reads a natural number and prints as output the sum of the digits of the number in question." << std::endl << std::endl;
}
/*bool CheckCorrectParameters (const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wrong number of parameters" << std::endl << std::endl;
    std::cout << "This program should be called" << argv[0] << " param1 param2" << std::endl;
    std::cout << "param1: " << " An integer number meaning bla, bla, bla" << std::endl;
    std::cout << "param2: " << " A string representing la, bla, bla" << std::endl;
    return false;
  }
  return true;
}*/
void SumOfDigits () {
  unsigned num;
  unsigned sum{0};
  std::cin >> num;
  while (num > 0) {
    sum += num % 10;
    num / 10;
  }
  std::cout << sum << std::endl;
}

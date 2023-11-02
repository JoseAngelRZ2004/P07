/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author José Ángel Ramón Zabala
 * @date 2 Nov 2023
 * @brief The program reads several numbers, and for each one prints the product of its digits, and the product of the digits of the latest product, etcetera, until the resulting product has just one digit.
 * @see https://jutge.org/problems/P61061_en
 */

#include <iostream>

int main (void) {
  int number, number_to_print, product{1};
  std::cin >> number;
  while (number != 0) {
  number_to_print = number;
  while (number > 0) {
    product *= number % 10;
    number /= 10;
  }
  std::cout << "The product of the digits of "<< number_to_print << " is " << product << "." << std::endl; 
  number = product;
  product = 1;
  if (number < 10)
    break;
  }
  std::cout << "----------" << std::endl;
  return 0;
}

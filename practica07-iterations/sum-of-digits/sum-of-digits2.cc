#include <iostream>

int main (void) {
  unsigned num, sum{0};
  std::cin >> num;
  while (num > 0) {
    sum += num % 10;
    num / 10;
    if (num < 1) {
      std::cout << sum << std::endl;
      return 0;
    }
  }
}

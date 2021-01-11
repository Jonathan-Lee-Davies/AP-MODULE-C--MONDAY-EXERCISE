#include <iostream>
 
int main()
{
    int num;
    std::cout << "Please enter a value: ";
    std::cin >> num;
    if (num % 2 == 0) {
      std::cout << num << " is an even number";
    }
    if (num % 2 != 0) {
      std::cout << "\n" << num << " is an odd number" "\n";
    }
    return 0;
}

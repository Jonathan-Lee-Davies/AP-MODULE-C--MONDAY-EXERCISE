#include <iostream>

int main () {

  double temp, result;
  std::string choice;

  std::cout << "Please enter the starting temperature: ";
  std::cin >> temp; 

    std::cout << "Press 'C' to convert from Fahrenheit to Centigrade" "\n";
    std::cout << "Press 'F' to convert from Centigrade to Fahrenheit" "\n";
    std::cin >> choice;

    std::cout << "\n" << "Your choice: " << choice << "\n";


    if (choice == "c" || choice == "C") {
        result = (temp - 32)* 5 / 9;
        std::cout << temp << " degrees Fahrenheit is " << result << " degrees Celsius";
    } else if (choice == "f" || choice == "F") {
      result = (temp * 9 / 5) + 32;
      std::cout << temp << " degrees Celsius is " << result << " degrees Farenheit";
    }


  return 0;
}

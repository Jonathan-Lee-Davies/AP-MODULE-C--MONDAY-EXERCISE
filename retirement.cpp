#include <iostream>
#include <ctime>

int main() {

  int currentYear, age, retAge, retYear, yearsLeft;

  time_t now = time(0);
  tm *ltm = localtime(&now);

  currentYear = 1900 + ltm->tm_year;

  std::cout << "Please enter your current age: ";
  std::cin >> age;
  std::cout << "At what age would you like to retire? ";
  std::cin >> retAge;

  retYear = currentYear + (retAge - age);
  yearsLeft = retYear - currentYear;

  std::cout << "\n" << "The current year is " << currentYear << ", you can retire in " << retYear << "; you have " << yearsLeft << " years remaining." ;


  return 0; 
}

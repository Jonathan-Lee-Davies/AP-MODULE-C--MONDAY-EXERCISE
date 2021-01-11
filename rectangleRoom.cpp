#include <iostream>

int main() {

  double width, length, areaf, aream, result;

  std::cout << "What is the length of the room in feet? " ;
  std::cin >> length;
  std::cout << "What is the width of the room in feet? " ;
  std::cin >> width; 

  areaf = length * width;
  aream = (length / 3.281) * (width / 3.281);

  std::cout << "\n" << "Your room's dimensions are " << length << " by " << width << " feet, the area is: ";
  std::cout << "\n" << areaf << " square foot" << "\n" << aream << " square metres";

  return 0;
}

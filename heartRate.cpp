//INCOMPLETE, TO BE CONTINUED

#include <iostream>

int main () {

  int age, heartRate, targetHR;
  double intensity;

  std::cout << "Please enter your age: ";
  std::cin >> age;
  std::cout << "Please enter your resting heart rate: ";
  std::cin >> heartRate;

  targetHR = (((220 - age) - heartRate) * intensity) + heartRate;
  std::cout << targetHR;
 
 std::cout << "\n" << "Resting pulse: " << heartRate << "  Age: " << age;

 return 0;
}

#include <iostream>

bool isNumber(const std::string s)
{
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}

int main () {

  int age, restingHR, targetHR;
  std::string ageInput;


  while(true) {
  std::cout << "Please enter your age: " ; 
  std::cin >> ageInput;

  if (isNumber(ageInput)){
      age = std::stoi(ageInput);
      break;
    }
    std::cout << "Please enter a valid age value\n";
  }


  std::cout << "Please enter your resting heart rate: ";
  std::cin >> restingHR;

  std::cout << "\nResting heart rate: " << restingHR << "\tAge: " << age ; 

  for(float intensity = 0.4; intensity < 1; intensity += 0.05) {
    targetHR = (((220 - age) - restingHR) * intensity) + restingHR;
    
    std::cout << "\n" << intensity << "%\t\t\t\t\t" << targetHR << "bpm";
  }

return 0;
}

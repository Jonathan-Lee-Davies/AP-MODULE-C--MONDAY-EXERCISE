#include <iostream>
#include <vector>
#include <regex>

//Function to determine if the userInput is a number 

bool isNumber(std::string s){
    std::regex e ("[-+]?([0-9]*[0-9]+|[0-9]+)");
    if (regex_match (s,e))
        return true;
    return false;
}

//Function which loops through the UserInputs, if they are numbers
void logger(int input) {
  for(int i = 0; input; i++) {
    std::cin >> input;
    if(int input = 0) {
    }
  };
}

int main () {
  
  //Variable declarations
  int input, zeroes = 0, positives = 0, negatives = 0, totalValues = 0;
  std::string userInput;
  


  //While userInput is a number, loop through logger()
    while(true){
      std::cin.clear();
      std::cout<<  "Please enter a value, or 'Q' to finish: ";
      std::cin>> userInput;
      if(isNumber(userInput)) {
      totalValues++;
      int input = std::stoi(userInput);
      if(input == 0) {        
        zeroes++;
      } else if (input < 0) {
        negatives++;
      } else if (input > 0) {
        positives++;
        }
      } else if(userInput == "Q" || userInput == "q") {
        break;
      } else {
        std::cout<< "Invalid value, please try again...\n ";
      }
    }

    std::cout<< "Total number of values entered: "<< totalValues ;
    std::cout<< "\n Zeroes: " << zeroes;
    std::cout<< "\n Positives: " << positives;
    std::cout<< "\n Negatives: " << negatives;
  
  return 0;
}

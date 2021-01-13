#include <bits/stdc++.h> 

bool isNumber(std::string s){
    std::regex e ("[-+]?([0-9]*[0-9]+|[0-9]+)");
    if (regex_match (s,e))
        return true;
    return false;
}


int Findlarge(std::vector<int> values) {     
	int largest = values[0];   
	for (int i = 1; i < values.size(); i++) 
		if (values[i] > largest) 
			largest = values[i];
	return largest; 
} 

int FindMin(std::vector<int> values){     
	int smallest = values[0]; 
	for (int i = 1; i < values.size(); i++) 
		if (values[i] < smallest) 
			smallest = values[i]; 
	return smallest; 
} 

int main() 
{ 
  int input, totalValues = 0;
  std::string userInput;
  std::vector<int> values;

    while(true){
      std::cin.clear();
      std::cout<<  "Please enter a value, or 'Q' to finish: ";
      std::cin>> userInput;
      
      if(isNumber(userInput)) {
        totalValues++;
        int input = std::stoi(userInput);
        values.push_back(input);
    
      } else if(userInput == "Q" || userInput == "q") {
        break;
      } else {
        std::cout<< "Invalid value, please try again...\n ";
      }
    }

  std::cout<< "Total number of values entered: "<< totalValues << "\n";
	std::cout << "Lowest value: " << FindMin(values) << "\n"; 
	std::cout << "Largest value: " << Findlarge(values) << "\n";
	return 0; 
} 

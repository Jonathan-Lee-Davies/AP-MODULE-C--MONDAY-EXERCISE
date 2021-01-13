#include <cctype>
#include <iostream>
#include <cstring>

using namespace std;


int main()
{
    char input;
    std::string response;

    while(true) {
    cout << "\nPlease enter a character: ";
    cin >> input;
      if(isdigit(input)) {
        cout << "Number detected\n";
        cout<< "\nTry again Y/N?";
        cin >> response;
        if(response == "N" || response == "n") {
          cout<< "Thank you, good bye.";
          break;
        }
      } else if (isalpha(input)) {
        cout << "Alphabetic character detected\n";
        cout<< "\nTry again Y/N?";
        cin >> response;
        if(response == "N" || response == "n") {
          cout<< "Thank you, good bye.";
          break;
        }
      } else if (ispunct(input)) {
        cout << "Special character detected\n";
        cout<< "\nTry again Y/N?";
        cin >> response;
        if(response == "N" || response == "n") {
          cout<< "Thank you, good bye.";
          break;
        }
      }
    }

    return 0;
}

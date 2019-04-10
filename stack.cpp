#include <iostream>
#include <string>
#include <stack>
#include <iomanip>
#include <cassert>
using namespace std;
// palindrome check using queue
bool ispalindromeStack(const string text){ //prototype
    std::stack <char> reverse;
    std::stack <char> forward;
    char letter;
    for (int i=0; i < text.length(); i++){
        letter = std::tolower(text[i]);
        reverse.push(letter);
        forward.push(letter);
    }
    assert(reverse.size()==forward.size());
    while (!forward.empty()){
        if(reverse.top()!= forward.bottom()){
            return false; //negative case
        }
        reverse.pop();
        forward.pop();
    }
    return true; //postive case
}
int main(){
    std::string phrase;
    std:: cout << "Please enter phrase: ";
    std::getline (std::cin,phrase);
    std::cout << "Is bool? " << std::boolalpha << ispalindromeStack(phrase) << std::endl;
    
}




#include <iostream>
#include <string>
#include <queue>
#include <iomanip>
#include <cassert>
using namespace std;
// palindrome check using queue
bool ispalindromeQueue(const string text){ //prototype
    std::queue <char> reverse;
    std::queue <char> forward;
    char letter;
    for (int i=0; i < text.length(); i++){
        letter = std::tolower(text[i]);
        reverse.push(letter);
        forward.push(letter);
    }
    assert(reverse.size()==forward.size());
    while (!forward.empty()){
        if(reverse.front() != forward.back()){
            return false; //negative case
        }
        reverse.pop();
        forward.pop();
    }
    return true; //postive case
}
int main(){
    std::string phrase;
    std:: cout << "Please enter a phrase: ";
    std::getline (std::cin,phrase);
    std::cout << "Is bool? " << std::boolalpha << ispalindromeQueue(phrase) << std::endl;
    
}



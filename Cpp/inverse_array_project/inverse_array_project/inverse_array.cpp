#include<iostream>
using namespace std;

int main(){
    char word[5];
    std::cout << "Type in 5-letter word" << std::endl;
    cin >> word;
    for (int i=0; i<=5; i++){
        std::cout << word[5-i];
    }
    std::cout << std::endl;
}
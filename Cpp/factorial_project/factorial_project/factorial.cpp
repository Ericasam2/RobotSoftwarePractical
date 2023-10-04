#include<iostream>
using namespace std;

int factorial(int);

int main(){
    int num;
    std::cout << "type in number of num: ";
    std::cin >> num;
    std::cout << "the result is : " << factorial(num) << std::endl;
    return 0;
}

int factorial(int num){
    if (num > 1){
        return num*factorial(num-1);
    }
    return 1;
}
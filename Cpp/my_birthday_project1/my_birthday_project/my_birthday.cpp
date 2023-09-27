#include<iostream>
using namespace std;

int main(){
    int year;
    int birthyear;
    int age;

    std::cout << "Type in year: " << std::endl;
    cin >> year ;
    std::cout << "Type in birthyear: " << std::endl;
    cin>> birthyear;
    age = year - birthyear;
    std::cout << "I am " << age << " years old" << std::endl;
    return 0;
}
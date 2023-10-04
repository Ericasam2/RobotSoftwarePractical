#include<iostream>
using namespace std;

void pass_by_reference(int& a){
    a = 10;
}

void pass(int a){
    a = 10;
}

int main(){
    int a;
    std::cout << "type the value of a: ";
    std::cin >> a;
    pass(a);
    std::cout << "a should be  your value:  " << a << std::endl;
    pass_by_reference(a);
    std::cout << "a should be altered to 10 now:  " << a << std::endl;
    return 0;
}
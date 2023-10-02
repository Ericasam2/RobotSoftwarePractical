#include <iostream>
using namespace std;

int main(){
    int myvar1 = 10;
    int myvar2 = 20;
    int *mypointer1 = &myvar1;
    int *mypointer2;

    *mypointer1=15;
    mypointer2 = mypointer1;
    mypointer1 = &myvar2;
    *mypointer1 = 30;

    std::cout << mypointer1 << std::endl;
    std::cout << mypointer2 << std::endl;
    std::cout << *mypointer1 << std::endl;
    std::cout << *mypointer2 << std::endl;
    std::cout << myvar1 << std::endl;
    std::cout << myvar2 << std::endl;
    std::cout << &myvar1 << std::endl;
    std::cout << &myvar2 << std::endl;
    return 0;
}
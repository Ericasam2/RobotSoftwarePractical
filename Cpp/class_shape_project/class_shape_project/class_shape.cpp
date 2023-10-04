#include <iostream>
#include <string>

using namespace std;

class Shape
{
    public:
        virtual double area()
        {
            std::cout << "shape base class does not have a defined area" << std::endl;
            return 0;
        }
};

class Square: public Shape
{
    private:
        double side_;
    public:
        // initialize
        Square(double side): side_(side)
        {}

        virtual double area()
        {
            std::cout << "Calculating square area" << std::endl;
            return side_*side_;
        }
};

int main()
{
    Shape circle;
    circle.area();
    Square square(5);
    square.area();
    return 0;
}
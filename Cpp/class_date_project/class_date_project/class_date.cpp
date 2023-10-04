#include <iostream>
#include <string>

using namespace std;

class Date
{
    public:
        int day_;
        int month_;
        int year_;
        
        Date(int day, int month, int year)
        {
            day_ = day;
            month_ = month;
            year_ = year;
        }
        Date()
        {
            day_ = 1;
            month_ = 1;
            year_ = 1970;
        }
};

class Information
{
    public:
        std::string some_information_;
        void printInformation()
        {
            std::cout << "Information: " << some_information_ << std::endl;
        }
        Information(std::string some_information){
            some_information_ = some_information;
        }
        Information()
        {
            some_information_ = "the default constructor.";
        }
};

class ExtendedInformation: public Information
{
    public:
        std::string more_information_;
        void printInformation()
        {
            // the default initialization of Information class
            Information::printInformation();
            std::cout << "ExtendedInformation: " << more_information_ << std::endl;
        }
        ExtendedInformation(std::string more_information){
            more_information_ = more_information;
        }
};

int main(){
    // parameter 
    Date today(1, 7, 2014);
    // parameter-free
    Date epoch;
    std::cout << "today: " <<today.day_ << "." << today.month_ << "." << today.year_ << std::endl;
    std::cout << "epoch: " <<epoch.day_ << "." << epoch.month_ << "." << epoch.year_ << std::endl;

    Information base("this is the base class.");
    ExtendedInformation extend("this is the extended class.");
    // base.printInformation();
    extend.printInformation();
    return 0;
}
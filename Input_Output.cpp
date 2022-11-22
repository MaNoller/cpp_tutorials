#include <iostream>
#include <string>

int main(){
    /*
    //std::cout : printing stuff to the console
    std::cout << "Hello World" << std::endl;

    std::cout << "This number is : " << 12 << std::endl;

    int age {21};
    std::cout << "The age is : " << age << std::endl;

    //Error
    std::cerr << "std::cerr output : Something went wrong" << std::endl;

    //Log msg
    std::clog << "std::clog output : This is a log message" << std::endl;
    */
    /*
    int age;
    std::string name;
    std::cout << "Please type in your Last Name : " << std::endl;
    std::cin >> name;

    std::cout << "Please type in your age : " << std::endl;
    std::cin >> age;

    std::cout << "Hello " << name << "! Your are " << age << " years pld" << std::endl;
    */


    /*
    //Printing data
    std::cout << "Hello C++20 " << std::endl;

    int age {21};
    std::cout << "Age : " << age << std::endl;

    std::cerr << "Error message : OH NOES!" << std::endl;
    std::clog  << "Log msg: Something happened" << std::endl;
    */

    // Data input
    /*
    int age1;
    std::string name;

    std::cout << "Please type your name and age : " << std::endl;

    //std::cin >> name;
    //std::cin >> age1;
    std::cin >> name >> age1; //geht auch in one line

    std::cout << "Hello " << name << " you are " << age1 << " years old!" << std::endl;
    */

    //Data with spaces

    //Data with spaces

    std::string full_name;
    int age3;

    std::cout << "Please type in your full name and age " << std::endl;

    std::getline(std::cin,full_name);

    std::cin >> age3;

    std::cout << "Hello " << full_name  << " you are " << age3 << " years old!" << std::endl;



return 0;

}

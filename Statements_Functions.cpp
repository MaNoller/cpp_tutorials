#include <iostream>

int addNumbers(int first_number, int second_number){
    int sum = first_number +  second_number;
    return sum;
}

/*
int main(int argc, char **argv){
    int firstNumber = 12;
    int secondNumber= 9;

    int sum = firstNumber + secondNumber;


    sum = addNumbers(firstNumber, secondNumber);

    sum = addNumbers(34,7);

    std::cout << "The sum of the two numbers is :" << sum << std::endl;
    std::cout << "The sum of the two numbers is :" << addNumbers(23,8) << std::endl;

    return 0;

}*/

int main(){

    int first_number = 13; //statement
    int second_number {7}; // also works

    std::cout << "First number : " << first_number << std::endl;
    std::cout << "Second number : " << second_number << std::endl;

    int sum = first_number + second_number;
    std::cout << "Sum : " << sum << std::endl;

    sum = addNumbers(25,7);
    std::cout << "Sum : " << sum << std::endl;

    std::cout << "Sum : " << addNumbers(3,42) << std::endl;

    return 0;
}

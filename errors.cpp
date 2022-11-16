#include <iostream>

int main(int argc, char **argv){

    std::cout << "Hello World" << std::endl;  // without ; get an error om compile
    

    //Runtime error
    int value = 7/0;
    std::cout << "value ;" << value << std::endl; //runtime error


    return 0;
}

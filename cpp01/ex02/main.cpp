#include <iostream>

int main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = *stringPTR;
    
    std::cout << "------ Adress String ------" << std::endl;
    std::cout << "String = " << &string << std::endl << "StringPTR = " << stringPTR << std::endl << "StringREF = " << &stringREF << std::endl << std::endl;
    std::cout << "------ Value String ------" << std::endl;
    std::cout << "String = " << string << std::endl << "StringPTR = " << *stringPTR << std::endl << "StringREF = " << stringREF << std::endl;

    return 0;
}
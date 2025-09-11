#include <iostream>
#include <string>

int main()
{
    //V.at(1)=999;

    std::string the_line{};

    //Read a line of text from the user
    std::cout << "Enter a line of text: " << std::endl;
    std::getline(std::cin, the_line);
    // the_line = "asdfgjhdrg";
    // the_line = std::getline(std::cin);

    //Print it back out
    std::cout << "The line was [" << the_line << "]" << std::endl;

    return 0;
}

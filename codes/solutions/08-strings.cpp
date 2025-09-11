#include <iostream>
#include <string>

int main()
{
    //A string of characters can be represented with the std::string type.
    // std::vector<char> string;
    // std::string s1;

    //Task 0: Create two strings s1 and s2, each with some initial text.
    std::string s1{"Hello"};
    std::string s2{"World"};

    //Task 1: Print out the value of s1
    std::cout << "the value of s1 is \"" << s1 << "\"" << std::endl;
    std::cout << "the value of s2 is \"" << s2 << "\"" << std::endl;

    // s2.append("K");
    // s2 = s2 + "K";
    s2 += "K";

    std::cout << "the first character of s2 is " << s2[0] << std::endl;
    std::cout << "the second character of s2 is " << s2.at(1) << std::endl;

    //Task 2: Create an empty string s3.
    //        Is an initializer necessary?
    std::string s3;

    std::cout << "the value of s3 is \"" << s3 << "\"" << std::endl;

    //Task 3: Set s3 to contain the concatenation of s1 and s2,
    //        then print out the value of s3.
    s3 = s1 + s2;

    std::cout << "after: the value of s3 is \"" << s3 << "\"" << std::endl;

    //Task 4: Print out the length of s1, s2 and s3.
    std::cout << s1.length() << std::endl;
    std::cout << s2.length() << std::endl;
    std::cout << s3.length() << std::endl;

    //Task 5: Iterate over each character in s3 (with two different kinds of
    //        loop) and print each character by itself.
    for (char c : s3)
    {
        std::cout << c << " ";
    }
    std::cout << std::endl;

    for (int i{0}; i < s3.length(); ++i)
    {
        std::cout << s3.at(i) << " ";
    }
    std::cout << std::endl;

    return 0;
}

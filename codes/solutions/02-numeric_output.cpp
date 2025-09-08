#include <iostream>

int main()
{
    //Task 1: Create two variables i (integer) and g (double)
    //        containing the values 6 and 1.87, respectively.
    //        (Use C-style variable initialization)
    int i = 6;
    double g = 1.87;

    //Task 2: Print the message "The value of i is " followed by the value of i and a newline
    //        (using one statement)
    std::cout << "The value of i is " << i << std::endl;

    //Task 3: Print the message "The value of g is " followed by the value of g and a newline.
    //        Use separate statements for each of the three parts of the output line.
    std::cout << "The value of g is ";
    std::cout << g;
    std::cout << std::endl;

    // printf("g=%.2lf\n", g);

    return 0;
}
#include <iostream>

int main()
{
    // int *more_hugly = (int *)malloc(10 * sizeof(int));

    // While loop version
    int i{0};
    while (i < 10)
    {
        std::cout << i << " squared is " << i * i << std::endl;
        i++;
    }

    // For loop version
    for (int j{0}; j < 10; j++)
    {
        std::cout << j << " squared is " << j * j << std::endl;
    }

    return 0;
}
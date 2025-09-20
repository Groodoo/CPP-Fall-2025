#include <iostream>
#include <string>

int main()
{

    int x{100};

    std::cout << "x is " << x << std::endl;
    x = 6;
    std::cout << "x is " << x << std::endl;

    //Task: Create an alias "y" for the variable x,
    //      and use y to set the value of x to 1000
    // int y{x};

    int &y{x};
    // int &y = x;

    // int &r1;

    // int *p=&x;

    // int dsfsfighlsdfuig{42};
    // *p=&dsfsfighlsdfuig;
    // y = dsfsfighlsdfuig;
    // ++p;

    // x = 100;
    y = 100;

    // int *p = &x;
    // *p = 20;

    std::cout << "x is " << x << std::endl;

    //Task: Create an alias "z" for the variable x
    //      using the auto keyword, then use z to
    //      set the value of x to 1000.
    auto &z{x};

    z = 1000;

    std::cout << "x is " << x << std::endl;

    return 0;
}

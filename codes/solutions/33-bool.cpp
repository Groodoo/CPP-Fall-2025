#include <iostream>

int main()
{
    int x{6};
    int y{10};
    //x+y -> int
    //y = -x
    //x<y -> bool

    // bool q{false};
    // bool q{x < y};
    // bool q{x == y};
    bool q{true};

    bool r{!q};
    bool s{q && r};

    // if (q == true)
    if (q)
    {
        std::cout << "q is true" << std::endl;
    }
    else
    {
        std::cout << "q is false" << std::endl;
    }

    return 0;
}
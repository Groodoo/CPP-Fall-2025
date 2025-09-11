#include <iostream>
#include <random>
#include <cstdlib>

int main()
{
    std::srand(std::time({})); // use current time as seed for random generator

    //Task 1: create a random number between 2 and 3
    const int random_value = std::rand();
    std::cout << "Random value on [0, " << RAND_MAX << "]: " << random_value << '\n';
    double zo{random_value / ((double)RAND_MAX)};
    std::cout << zo << std::endl;

    double tt{zo + 2};
    std::cout << tt << std::endl;

    /////////////////////Approximate PI////////////////////////

    //Task 3: Create a variable to store the trials and one to create the hits.
    int trials{0};
    int hits{0};

    //Task 4: Randomly generate points in the square from -1 to 1.
    //        If the point is inside the circle, increment the hits.
    //        Compute the ratio of hits to trials and multiply by 4 to get an approximation of PI.

    for (int n{0}; n < 1000000000; ++n)
    {
        const int rand_val_x = std::rand();
        double num_bet_one_and_zero_x{rand_val_x / ((double)RAND_MAX)};
        double x{num_bet_one_and_zero_x * 2 - 1};

        const int rand_val_y = std::rand();
        double num_bet_one_and_zero_y{rand_val_y / ((double)RAND_MAX)};
        double y{num_bet_one_and_zero_y * 2 - 1};

        double d2 = x * x + y * y;

        if (d2 <= 1)
            ++hits;

        ++trials;

        if (trials % 100000 == 0)
        {

            double pi_approx = ((double)hits) / trials * 4;

            std::cout << "pi approx" << pi_approx << std::endl;
        }
    }

    return 0;
}
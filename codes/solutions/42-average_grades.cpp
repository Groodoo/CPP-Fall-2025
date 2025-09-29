#include <iostream>
#include <vector>
#include <stdexcept>

/* average_grades( grades )
   Given a vector of grades (integers in the range 0 - 100),
   compute and return the average of all elements.

   Task: Improve this code to deal with cases where the
         vector is empty or where grades in the vector are
         outside the range 0 - 100.

*/
float average_grades(std::vector<int> const &grades)
{
    if (grades.size() <= 0)
    {
        // std::invalid_argument error{"empty grade list is bad and sad!"};
        // throw error;

        throw std::invalid_argument{"empty grade list is bad and sad!"};
    }

    float sum{0};
    // for (unsigned int i{0}; i < grades.size(); i++)
    for (auto g : grades)
    {
        if (g < 0 || g > 100)
        {
            // std::out_of_range bad_grade{"The grade is negative or above 100"};
            // throw bad_grade;

            throw std::out_of_range{"The grade is negative or above 100"};
            ;
        }
        sum += g;
    }
    return sum / grades.size();
}

int main()
{
    std::vector<int> grades1{90, 70, 80};
    std::vector<int> grades2{};            //Invalid (can't average zero things)
    std::vector<int> grades3{90, 70, -80}; //Invalid (grades can't be negative)

    try
    {
        auto av{average_grades(grades3)};
        std::cout << "Average: " << av << std::endl;
    }
    // catch (std::exception &e)
    // {
    //     std::cout << "I am superman, I handle evertthing (probably i shoudnt)" << std::endl;
    // }
    catch (std::invalid_argument &exception)
    {
        std::cout << ":(" << std::endl;
        std::cout << exception.what() << std::endl;
    }
    catch (std::out_of_range &exception)
    {
        std::cout << ":P" << std::endl;
        std::cout << exception.what() << std::endl;
    }
    return 0;
}
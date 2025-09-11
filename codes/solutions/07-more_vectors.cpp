#include <iostream>
#include <vector>

int main()
{

    //Task 1: Create a vector W of element type float containing the sequence
    //        10.6, 1.87, 11.1, 11.6, 4.45
    std::vector<double> V{10.6, 1.87, 11.1, 11.6, 4.45};
    // std::vector<double> V1{10.6, 1.87, 11.1, 11.6, 4.45};

    // V.append(V1);
    // V.push_back(10.6);
    // V.push_back(1.87);

    //Task 2: Print the contents of the vector on one line.
    //        (Challenge exercise for later: Print commas between each element, but not after the last element)
    std::cout << "printing the stuff inside V" << std::endl;
    for (double value : V)
    {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    //Task 3: Modify the element at index 1 to equal 999.
    //        Weigh the benefits of the .at() function versus square brackets.
    // V.at(1) = 999;
    // V[1000] = 999;
    // V.at(1000) = 999;
    // std::cout << V.at(1) << std::endl;

    //Task 4: Copy/paste the loop from task 2 to print the vector again.
    std::cout << "printing the stuff inside V after change" << std::endl;
    for (double value : V)
    {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    return 0;
}

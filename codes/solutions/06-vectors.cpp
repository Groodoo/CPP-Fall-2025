#include <iostream>
#include <vector> //Don't forget to include this every time you need to use vectors

int main()
{

    //Task 0: Create an empty vector V for integer elements
    std::vector<int> V{};

    //Task 1: Add the elements 6, 10, 17 to V (in that order)
    V.push_back(6);
    V.push_back(10);
    V.push_back(17);

    //Task 2: Print out the size of V
    std::cout << V.size() << std::endl;

    //Task 3: Print out the element at index 1 of V
    std::cout << "element at index 1 (second element) " << V.at(1) << std::endl;
    // std::cout << "element at index 1 (second element) " << V[1000] << std::endl;
    // std::cout << "element at index 1 (second element) " << V.at(1000) << std::endl;

    //Task 4: Iterate over V and print out each element.
    std::cout << "--------------- 4 ---------------" << std::endl;
    for (int value : V)
    {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    //Task 5: Use an indexing loop (that is, a C-style for-loop) to iterate
    //        over each index of the vector. For each index, print the index
    //        and the element at that index.
    //        Note that the "natural" type for an index variable is "unsigned int".
    std::cout << "--------------- 5 ---------------" << std::endl;
    for (int i{0}; i < V.size(); ++i)
    {
        std::cout << V.at(i) << " ";
    }
    std::cout << std::endl;

    //Task 6: Add the value 187 to the end of V, then repeat steps 2-4 (by copying/pasting)
    V.push_back(187);
    std::cout << "------------------------------" << std::endl;
    std::cout << "------------------------------" << std::endl;
    std::cout << "------------------------------" << std::endl;

    //Task 2: Print out the size of V
    std::cout << V.size() << std::endl;

    //Task 3: Print out the element at index 1 of V
    std::cout << "element at index 1 (second element) " << V.at(1) << std::endl;
    // std::cout << "element at index 1 (second element) " << V[1000] << std::endl;
    // std::cout << "element at index 1 (second element) " << V.at(1000) << std::endl;

    //Task 4: Iterate over V and print out each element.
    std::cout << "--------------- 4 ---------------" << std::endl;
    for (int value : V)
    {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    for (int i{0}; i < 100000000; ++i)
        V.push_back(i);

    return 0;
}

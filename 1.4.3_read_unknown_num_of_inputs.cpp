#include <iostream>
int main()
{
    int sum = 0, value = 0;
    // read until end-of-file, calculating a running total of all values read
    // An istream becomes invalid when we hit end-of-fie or encounter an invalid
    // input, such as reading a value that's not an integer, can causes it to yield false.
    // After input, use ctrl-d to enter an end-of-file.
    while (std::cin >> value)
        sum += value; // equivalent to sum = sum + value
    std::cout << "Sum is: " << sum << std::endl;
    return 0;
}
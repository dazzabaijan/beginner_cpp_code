#include <iostream>
#include <vector>
#include <string>

using namespace std;
// std::cout means to use the name cout defined in the namespace std (standard)

// int main() can only have interger output type
int main()
{
    // The output operator << takes left-hand operand which must be an ostream object
    // right-hand operaand is a value to print
    // The result is the ostream on which we wrote the given value
    // The result of first operator becomes the helf-hand operand of the second
    // chaining together output requests
    std::cout << "Enter two numbers: " << std::endl;
    // This is identical to 
    // std::cout << "Enter two numbers:";
    // std::cout << std::endl;

    // define 2 integer type variables and initialise as 0
    int v1 = 0, v2 = 0;

    // The input operator >> taktes istream as left-hand operand
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1 << " and " << v2
              << " is " << v1 + v2 << std::endl;
    return 0;
}
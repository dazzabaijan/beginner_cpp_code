#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item item1, item2;
    std::cin >> item1 >> item2;   // read a pair of transaction
    std::cout << item1 + item2 << std::endl; // print their sum
    return 0;
}
// note that the addition here is performed between
// two different Sales)item type object

/*  input of 
    0-201-78345-x 3 20.00 
    0-201-78345-x 2 25.00
    should give 
    0-201-78345-x 5 110 22
*/
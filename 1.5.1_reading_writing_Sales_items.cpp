#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item book;
    // read ISBN, number of copies sold, and sales price
    std::cin >> book;
    // write ISBN, number of copies sold, total revenuw, and average price
    std::cout << book << std::endl;
    return 0;
}
/* input of 0-201-70353-x 4 24.99 should give
   input of 0-201-70353-x 4 99.96 24.99
*/
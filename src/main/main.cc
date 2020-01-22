#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    std::vector<int> inputs = {2, 2, 3, 4};
    std::cout << "inputs: {1, 2, 3, 4}, output: " << solution.FindAverage(inputs)
            << std::endl;
    return 0;
}
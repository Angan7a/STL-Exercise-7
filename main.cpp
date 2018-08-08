#include <iostream>
#include <functional>
#include <algorithm>

int main()
{
    std::function<int(int)> multiplay_by_five = std::bind(std::multiplies<int>(), std::placeholders::_1, 5);
    return 0;
}

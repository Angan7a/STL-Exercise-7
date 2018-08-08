#include <iostream>
#include <functional>
#include <algorithm>

int main()
{
    std::function<int(int)> multiplay_by_five = [](int a){ return std::multiplies<int>()(a, 5);};
    std::cout << multiplay_by_five(11) << std::endl;
    return 0;
}

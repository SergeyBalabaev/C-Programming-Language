#include <iostream>
#include <algorithm>
#include <array>

int main()
{
    srand(time(NULL));
    std::array<int, 10> arr;
    for (size_t i = 0; i < 10; ++i)
        arr[i] = rand() % 100;
    std::sort(arr.begin(), arr.end());
    for (auto it = arr.begin(); it != arr.end(); it++)
        std::cout << *it << std::endl;
    return 0;
}

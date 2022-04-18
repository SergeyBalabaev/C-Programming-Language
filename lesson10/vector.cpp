#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    srand(time(NULL));
    std::vector<int> arr;
    for (size_t i = 0; i < 10; ++i)
        arr.push_back(rand() % 100);
    std::sort(arr.begin(), arr.end());
    for (auto it = arr.begin(); it != arr.end(); it++)
        std::cout << *it << std::endl;
    return 0;
}

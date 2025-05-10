#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    srand(time(NULL));
    std::vector<int> arr;
    for (size_t i = 0; i < 10; ++i)
        arr.push_back(rand() % 100);    //вставить в конец
    for (auto it = arr.begin(); it != arr.end(); it++)
        std::cout << *it << std::endl;
    
    std::cout << "\n";
    auto it = arr.begin();
    it = it + 5;
    arr.insert(it, 1000);       //вставить на 6ю позицию

    for (auto it = arr.begin(); it != arr.end(); it++)
        std::cout << *it << std::endl;
    return 0;
}

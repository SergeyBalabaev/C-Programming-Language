#include <iostream>
#include <algorithm>
#include <list>
int N = 10;
int main()
{
    srand(time(NULL));
    std::list<int> arr;
    for (size_t i = 0; i < N; ++i)
        arr.push_front(rand() % 100);
    arr.sort();
    for (auto it = arr.begin(); it != arr.end(); it++)
        std::cout << *it << std::endl;
    arr.push_back(25);
    for (auto it = arr.begin(); it != arr.end(); it++)
        std::cout << *it << std::endl;
    return 0;
}

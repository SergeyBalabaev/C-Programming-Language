#include <iostream>
#include <algorithm>
#include <forward_list>
int N = 10;
int main()
{
    srand(time(NULL));
    std::forward_list<int> arr;
    for (size_t i = 0; i < N; ++i)
        arr.push_front(rand() % 100);
    arr.sort();
    for (auto it = arr.begin(); it != arr.end(); it++)
        std::cout << *it << std::endl;
    return 0;
}

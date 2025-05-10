#include <iostream>
#include <algorithm>
#include <deque>
int N = 10;
int main()
{
    srand(time(NULL));
    std::deque<int> arr;
    for (size_t i = 0; i < N; ++i)
        arr.push_back(rand() % 100);
    for (size_t i = 0; i < N; ++i)
        std::cout << arr[i] << std::endl;
    std::cout << "**********" << std::endl;
    for (size_t i = 0; i < N; ++i)
        arr.push_front(rand() % 100);
    for (size_t i = 0; i < N*2; ++i)
        std::cout << arr[i] << std::endl;
    std::cout << "Size = " << arr.size() << std::endl;

    std::cout << "\n";
    auto it = arr.begin();
    it = it + 5;
    arr.insert(it, 1000);       //вставить на 6ю позицию

    return 0;
}

#include <iostream>
#include <memory>

using namespace std;

const int N = 10;

int main() {
    srand(time(NULL));
    shared_ptr<int[]> x(new int[N]);
    shared_ptr<int[]> y;
    for (size_t i = 0; i < N; i++)
    {
        x.get()[i] = rand() % 100 - 50;
    }
       
    y = x;
    return 0;
}

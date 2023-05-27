#include <iostream>
#include <memory>

using namespace std;

const int N = 10;

int main() {
    srand(time(NULL));
    unique_ptr<int[]> x(new int[N]);
    for (size_t i = 0; i < N; i++)
    {
        x.get()[i] = rand() % 100 - 50;
    }
        
    for (size_t i = 0; i < N; i++)
    {
        cout << x.get()[i] << "\n";
    }
    return 0;
}

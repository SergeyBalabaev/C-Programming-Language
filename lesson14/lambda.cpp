#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>

using namespace std;

double fRand(double fMin, double fMax)
{
    double f = (double)rand() / RAND_MAX;
    return fMin + f * (fMax - fMin);
}

template <typename T>
void print_vec(const T& x)
{
    cout << x << " ";
}

int main()
{
    srand(time(NULL));
    vector <int> vec1;
    int N = 10;
    for (size_t i = 0; i < N; i++)
        vec1.push_back(fRand(0,100));
    for (size_t i = 0; i < N; i++)
        cout << vec1[i] << " ";
    cout << endl;
    for (size_t i = 0; i < N; i++)
        print_vec(vec1[i]);
    cout << endl;

    auto f = [](auto value) {print_vec(value); };
    for_each(vec1.begin(), vec1.end(), print_vec<double>);
    cout << endl;
    for_each(vec1.begin(), vec1.end(), f);
}

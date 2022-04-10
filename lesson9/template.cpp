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
    //vector <int> vec1;
    vector <double> vec1;
    int N = 10;
    for (size_t i = 0; i < N; i++)
        vec1.push_back(fRand(0,100));
    for (size_t i = 0; i < N; i++)
        cout << vec1[i] << " ";
    cout << endl;
    for (size_t i = 0; i < N; i++)
        print_vec(vec1[i]);
    cout << endl;
}

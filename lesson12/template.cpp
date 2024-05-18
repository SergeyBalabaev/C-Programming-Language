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

//создание шаблона
template <typename T>
void print_vec(const T& x)
{
    cout << x << " ";
}

int main()
{
    srand(time(NULL));
    vector <double> vec1;
    //vector <int> vec1; //В случае изменения типа будет вызвана функция print_vec с входным параметром типа int
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

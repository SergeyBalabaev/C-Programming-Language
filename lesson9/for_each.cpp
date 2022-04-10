#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>

using namespace std;

void print_vec(int x)
{
    cout << x << " ";
}

int main()
{
    srand(time(NULL));
    vector <int> vec1, vec2;
    int N = 10;
    for (size_t i = 0; i < N; i++)
        vec1.push_back(rand()%100);
    for (size_t i = 0; i < N; i++)
        cout << vec1[i] << " ";
    cout << endl;
    for (size_t i = 0; i < N; i++)
        print_vec(vec1[i]);
    cout << endl;
    for_each(vec1.begin(), vec1.end(), print_vec);

}

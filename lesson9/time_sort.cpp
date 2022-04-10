#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>

using namespace std;

vector <int> sorting_vec(vector <int> arr) {
    int temp;
    for (int i = 0; i < arr.size() - 1; i++) {
        for (int j = 0; j < arr.size() - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return arr;
}

int main()
{
    srand(time(NULL));
    vector <int> vec;
    int N = 50000;
    for (size_t i = 0; i < N; i++)
        vec.push_back(rand()%100);
    chrono::high_resolution_clock::time_point t1 = chrono::high_resolution_clock::now();
    vec = sorting_vec(vec);
    chrono::high_resolution_clock::time_point t2 = chrono::high_resolution_clock::now();
    auto duration = (chrono::duration_cast<chrono::milliseconds>(t2 - t1).count());

    cout << "D1=" << (double)duration/1000 << endl;
    t1 = chrono::high_resolution_clock::now();
    sort(vec.begin(), vec.end());
    t2 = chrono::high_resolution_clock::now();
    duration = chrono::duration_cast<chrono::milliseconds>(t2 - t1).count();
    cout << "D2=" << (double)duration / 1000 << endl;
}

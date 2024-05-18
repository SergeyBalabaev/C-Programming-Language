#include <iostream>
#include <vector>
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
    int N = 10;
    for (size_t i = 0; i < N; i++)
        vec.push_back(rand()%100);
    for (size_t i = 0; i < N; i++)
        cout << "Vec[" << i << "] = " << vec[i] << endl;
    vec = sorting_vec(vec);
	  cout << "Sorting..." << endl;
    for (size_t i = 0; i < N; i++)
        cout << "Vec[" << i << "] = " << vec[i] << endl;
}

#include <iostream>
#include <vector>
using namespace std;

const int N = 5;

void* operator new(std::size_t size)
{
cout << "Malloc: " << size << endl;
void* ptr;
ptr = malloc(size);
return ptr;
}

void* operator new[](std::size_t size)
{
cout << "Malloc[]: " << size << endl;
void* ptr;
ptr = malloc(size);
return ptr;
}

void operator delete[](void* ptr)
{
cout << "Free[]\n";
free(ptr);
}

void operator delete(void* ptr)
{
cout << "Free\n";
free(ptr);
}

int main()
{
vector<int> vec;
for (size_t i = 0; i < N; i++)
{
vec.push_back(i);
}
return 0;
}

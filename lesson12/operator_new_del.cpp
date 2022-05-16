#include <iostream>
#include <vector>
using namespace std;

const int N = 10;

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
	srand(time(NULL));

	int* a = new int[N];
	int* b = new int;
	*b = 10;
	for (size_t i = 0; i < N; i++)
	{
		a[i] = rand() % 100;
	}
	for (size_t i = 0; i < N; i++)
	{
		cout << a[i] << endl;
	}
	delete[]a;
	delete b;
	return 0;
}

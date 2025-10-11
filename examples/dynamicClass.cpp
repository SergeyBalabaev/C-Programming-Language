#include <iostream>
#include <cstring>

class A {
public:
    int a = 0;
    int* ptr;
    int size;
    A(int x) {
        ptr = new int[x];
        size = x;
    }
    ~A() {
        delete[] ptr;
    }
    A& operator=(const A& other) {
        if (this == &other) {
            return *this;
        }
        delete[] ptr;
        this->a = other.a;
        this->size = other.size;
        this->ptr = new int[other.size];
        memcpy(this->ptr, other.ptr, other.size + 1);
        return *this;
    }

};

int main()
{
    A a1(10), a2(5);
    a1.ptr[0] = 10;
    a1 = a1;
    std::cout << a1.ptr[0];
}


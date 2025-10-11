#include <iostream>
void swap(int& x, int& y){
    int temp = x;
    x = y;
    y = temp;
}

template <typename T>
void swap(T& x, T& y){
    T temp = x;
    x = y;
    y = temp;
}


int main(){
    int a = 1, b = 2;
    swap(a,b);
    std::cout << a << b;
}

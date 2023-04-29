#include <iostream>
#include <stdlib.h>
#include "vector.h"

#include <vector>

int main()
{
    cont::Vector <double> Vec, Vec1;
    Vec.Push_back(5);
    Vec.Push_back(2.5);
    Vec.Push_back(-9.84);
    Vec.Erase(0);
    Vec.Insert(0, 123.456);
    Vec.Insert(0, 123.456);
    printf("Size=%d\n", Vec.size());
    printf("A[0]=%lf\n", Vec[0]);
    //Vector <double> Vec2(std::move(Vec));
    Vec1 = Vec;

    Vec1.Print();
    return 0;
}


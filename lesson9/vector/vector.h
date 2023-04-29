#pragma once
#include <stdio.h>
#include <stdlib.h>

// containers
namespace cont {

    template <typename T>
    struct Vector
    {
    private:
        T* A;
        int count;
        void CopyArray(T* V, int Vcount);
    public: 
        Vector();
        Vector(const Vector& obj);
        Vector(Vector&& obj);
        ~Vector();
        void Push_back(T a);
        void Print();
        void Insert(int N, T a);
        void Erase(int N);
        void Pop_back();
        int size();
        T get_vector_element(int elem);
        T operator[] (int i);
        Vector& operator= (const Vector& obj);
    };

    template <typename T>
    Vector<T>::Vector()
    {
        A = nullptr;
        count = 0;
    }

    template <typename T>
    Vector<T>::Vector(const Vector& obj)
    {
        CopyArray(obj.A, obj.count);
    }

    template <typename T>
    Vector<T>::Vector(Vector&& obj)
    {
        A = obj.A;
        count = obj.count;
        obj.count = 0;
        obj.A = nullptr;
    }

    template <typename T>
    Vector<T>::~Vector()
    {
        count = 0;
        free(A);
    }

    template <typename T>
    int Vector<T>::size()
    {
        return count;
    }

    template <typename T>
    void Vector<T>::Push_back(T a)
    {
        A = (T*)realloc(A, (count + 1) * sizeof(T));
        A[count] = a;
        count++;
    }

    template <typename T>
    void Vector<T>::Print()
    {
        for (size_t i = 0; i < count; ++i)
            printf("%lf\n", A[i]);
    }

    template <typename T>
    void Vector<T>::Insert(int N, T a)
    {
        A = (T*)realloc(A, (count + 1) * sizeof(T));
        count++;
        for (size_t i = count - 1; i > N; i--)
            A[i] = A[i - 1];
        A[N] = a;
    }

    template <typename T>
    void Vector<T>::Erase(int N)
    {
        for (size_t i = N; i < count - 1; ++i)
            A[i] = A[i + 1];
        A = (T*)realloc(A, (count - 1) * sizeof(T));
        count--;
    }

    template <typename T>
    void Vector<T>::Pop_back()
    {
        A = (T*)realloc(A, (count - 1) * sizeof(T));
        count--;
    }
    template <typename T>
    T Vector<T>::get_vector_element(int elem)
    {
        return A[elem];
    }

    //перегрузка операторов
    template <typename T>
    T Vector<T>::operator[] (int i)
    {
        return A[i];
    }

    template <typename T>
    Vector<T>& Vector<T>::operator= (const Vector& obj)
    {
        CopyArray(obj.A, obj.count);
        return *this;
    }

    template <typename T>
    void Vector<T>::CopyArray(T* V, int Vcount)
    {
        A = (T*)malloc(Vcount * sizeof(T));
        count = Vcount;
        for (int i = 0; i < Vcount; i++)
            A[i] = V[i];
    }



}


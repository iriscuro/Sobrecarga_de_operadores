#ifndef ARRPOINT_H
#define ARRPOINT_H
#include "Point.h"
#include <iostream>

using namespace std;

template <typename T>
class ArrPoint
{
    public:
        ArrPoint();
        ArrPoint(const T pts[],const int size);
        ArrPoint(ArrPoint &o);
        ~ArrPoint();

        int getSize();
        void print();

        T operator+(T &otro);
        ostream operator<<(ostream &nuevo);

        void push_back(const T &p);
        void insert(const int pos,const T &p);
        void remove(const int pos);
        void juntar( T &a,T &b);

    private:
        int size;
        T *points;
        void reSize(int newSize);
};

template <typename T>
ArrPoint<T>::ArrPoint()
{
    this ->size = 0;
    this ->points = new T[size];
}

template <typename T>
ArrPoint<T>::ArrPoint(const T pts[],const int size){
    this->size = size;
    this->points = new T[size];
    for(int i=0;i<size;i++){
    points[i]=pts[i];
    }
}

template <typename T>
ArrPoint<T>::ArrPoint(ArrPoint &o){
    this->size = o.size;
    this->points = new T[o.size];
    for(int i=0;i<size;i++){
        points[i]=o.points[i];
    }
}

template <typename T>
ArrPoint<T>::~ArrPoint()
{
    delete[] points;
}

template <typename T>
int ArrPoint<T>::getSize(){
    return this ->size;
}

template <typename T>
void ArrPoint<T>::print(){
    for(int i=0;i<size;i++){
        points[i].print();
        //points->print();
    }
   }

   template <typename T>
void ArrPoint<T>::reSize(int newSize){
    T *pts = new T[newSize];
    int minisize = (newSize<size)?size:newSize;
    for(int i=0;i < minisize;i++){
        pts[i] = points[i];
    }
    delete[] points;
    size = newSize;
    points = pts;
}

template <typename T>
void ArrPoint<T>::push_back(const T &p){
    reSize(size+1);
    points[size-1] = p;

}

template <typename T>
void ArrPoint<T>::insert(const int pos, const T &p){
    reSize(size+1);
    for(int i=size;i>=pos;i--){
        points[i]=points[i-1];
    }
    points[pos] = p;
}
template <typename T>
void ArrPoint<T>::remove(const int pos){
    for(int i=pos;i<size;i++){
        points[i]=points[i+1];
    }
    reSize(size-1);
}

template <typename T>
void ArrPoint<T>::juntar(T &a,T &b){
    int size = sizeof(b)/sizeof(b[0]);
    for(int i=0;i<size;i++)
        a.push_back(b[i]);
}

template <typename T>
T ArrPoint<T>::operator+(T &otro) //T=ArrPoint
{
    //int size = sizeof(otro)/sizeof(otro[0]);
    //int size1 = sizeof(other)/sizeof(other[0]);
    //T a[]=new T(otro);

    for(int i=0;i<size;i++)
        return points->push_back(otro);

}

template <typename T>
std::ostream ArrPoint<T>::operator<<(std::ostream &nuevo)
{
    nuevo<<points->print();
    return nuevo;
}
#endif // POINTARRAY_H

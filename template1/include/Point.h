#ifndef POINT_H
#define POINT_H

#include <iostream>
using namespace std;

template <typename T>
class Point
{
    public:
        Point();
        Point(T, T);
        Point(Point &o);

        void offset(T,T);
        void print();
        double getx();
        double gety();
        void setx(T x);
        void sety(T y);
    private:
        T x,y;
};

template<class T>
Point<T>::Point()
{
    x = 0;
    y = 0;
}
template<class T>
Point<T>::Point(T tx, T ty){
    x = tx;
    y = ty;
}
template<class T>
Point<T>::Point(Point &o){
    x = o.x;
    y = o.y;
}
template<class T>
void Point<T>::offset(T nx,T ny){
    x += nx;
    y += ny;
}
template<class T>
void Point<T>::print(){
    cout << "(" << x << "," << y << ")" << endl;
}

#endif // POINT_H


#include <iostream>
#include "Point.h"
#include "ArrPoint.h"
#include <math.h>
#include <stdlib.h>
#include <fstream>

using namespace std;
/*
ostream &operator<<(ostream& salida , const Numero& a){
  salida << a.x ;
  return salida;
}
*/
/*
//template <typename T>
ArrPoint<Point<int> > operator+(ArrPoint<Point<int> > &otro,ArrPoint<Point<int> > &other)
//Point<int> operator+(Point<int>  otro[],Point<int>  other[])
//ArrPoint<int> operator+(ArrPoint<Point<int> > &otro,Point<int> &other[])
{
    //int size = sizeof(otro)/sizeof(otro[0]);
    //int size1 = sizeof(other)/sizeof(other[0]);
    ArrPoint<Point<int> > aux(otro);
    aux.juntar(otro,other);

    return aux;
}
ArrPoint<Point<int> > operator <<(ArrPoint<Point<int> >  &reult){
    result.print();

}
*/
int main()
{
    Point<int> c(13,40);
    Point<int> p(1,3);
    Point<int> q(3,3);
    Point<int> r(3,1);
    Point<int> s(9,8);
    Point<int> t(8,7);
    Point<int> z(5,3);
    Point<int> a(94,12);
    Point<int> arr[] = {p,q,r};
    Point<int> esp[] = {t,z,a};
    int size = sizeof(arr)/sizeof(arr[0]);
    int size1 = sizeof(esp)/sizeof(esp[0]);
    int larg;
    larg=size+size1;

    ArrPoint<Point<int> > ps(arr,size);
    ArrPoint<Point<int> > ps2 = ps;
    cout << ps2.getSize() << endl;
    //ArrPoint<Point<int> > suma(arr,size);
    Point<int> suma[larg];
    suma= arr+esp;
/*
    ofstream archivo_salida("file.txt");

    for(int i=0;i<larg;i++) {
            cin.getline(suma[i], 80);
            archivo_salida << suma[i]<< endl;
            archivo_salida.close();
    }
*/
    return 0;
}

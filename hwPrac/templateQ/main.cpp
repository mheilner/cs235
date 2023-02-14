#include <iostream>
#include <cmath>
using namespace std;

//int sum (int array[], const int size){
//    int total = 0;
//    for (int i = 0; i < size; i++){
//        total += array[i];
//    }
//    return total;
//}
//double sum (double array[], const int size){
//    double total = 0;
//    for (int i = 0; i < size; i++){
//        total += array[i];
//    }
//    return total;
//}
//template <class T>
//T sum (T array[], const int size){
//    T total = 0;
//    for (int i = 0; i < size; i++){
//        total += array[i];
//    }
//    return total;
//}
template <class T>
class Point{
public:
    Point(){}
    Point (T x, T y): m_x(x),m_y(y){}
    T getX() const { return m_x; }
    T getY() const { return m_y; }
    void setX(T val) {m_x=val;}
    void setY(T val) {m_y=val;}
    T distanceFromOrigin(){
        return sqrt(m_x*m_x + m_y*m_y);
    }
private:
    T m_x = 0;
    T m_y = 0;
};

int main() {


    int iArr[] = {1,2,3,4,5};
    cout << sum(iArr, size(iArr)) << endl;

    double dArr[] = {1.0,2.0,3.0,4.0,5.6};
    cout << sum(dArr, size(dArr)) << endl;

}

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//Functions Quiz
//Problem 1
double triArea(double base, double height){
    return .5 * base * height;
}
void swap(int & v1, int & v2){
    int swp = v1;
    v1 = v2;
    v2 = swp;
//    cout << "The vals of v1 and v2 are " << v1 << " and " << v2 << " respectively." << endl;
}
void swap(double & v1, double & v2){
    double swp = v1;
    v1 = v2;
    v2 = swp;
}
void swap(bool & v1, bool & v2){
    bool swp = v1;
    v1 = v2;
    v2 = swp;
}
int main(int argc, char *argv[]) {
//Problem 1
//    cout << "The Area of triangle base 23.15 and height: 12.37 is: " << triArea(23.15, 12.37) << endl;
//Problem 3
    int v1= 2;int v2 = 3;
    cout << "INTS: The vals of v1 and v2 are " << v1 << " and " << v2 << " respectively." << endl;
    swap(v1, v2);
    cout << "After the swap the vals of v1 and v2 are " << v1 << " and " << v2 << " respectively." << endl;
    double d1= 2.4;double d2 = 3.3;
    cout << "DOUBLES: The vals of v1 and v2 are " << d1 << " and " << d2 << " respectively." << endl;
    swap(d1, d2);
    cout << "After the swap the vals of v1 and v2 are " << d1 << " and " << d2 << " respectively." << endl;
    bool b1= true;bool b2 = false;
    cout << "BOOLS: The vals of v1 and v2 are " << b1 << " and " << b2 << " respectively." << endl;
    swap(b1, b2);
    cout << "After the swap the vals of v1 and v2 are " << b1 << " and " << b2 << " respectively." << endl;
    return 0;
}

#include <iostream>
#include "Vector.h"
using namespace std;

int main() {
//    std::cout << "Hello, World!" << std::endl;
    Vector<int> v1;
    for (int i=0;i<10;i++){
        v1.push_back(i+1);
    }
//Part 3 - Acccessing Operators
    cout << "lets test part 3 with the access operators" << endl;
    cout << "index 4: " << v1.at(4) << endl;
//To string
    cout << v1.toString() << endl;
    cout <<"the size of the vector: " << v1.size() << endl;
    cout <<"The vector is empty: " << v1.empty() << endl;
//    v1.pop_back();
//    cout << v1.toString() << endl;
//    cout <<"the size of the vector: " << v1.size() << endl;
//    cout <<"The vector is empty: " << v1.empty() << endl;
//Testing the resize
//    cout << "-- Testing the pushback -- " << endl;
//    v1.push_back(1);
//    v1.push_back(1);
//    cout << v1.toString() << endl;
//    cout <<"the size of the vector: " << v1.size() << endl;
//    cout <<"The vector is empty: " << v1.empty() << endl;
//Inserting
    cout <<"the size of the vector: " << v1.size() << endl;
    v1.insert(0,32);
    cout << v1.toString() << endl;
    cout <<"the size of the vector: " << v1.size() << endl;
//Erase
//    cout << "i am erasing" << endl;
//    v1.erase(13);
//    cout << v1.toString() << endl;
//    cout <<"the size of the vector: " << v1.size() << endl;
//at try catch
//    v1.at(12);

    return 0;
}

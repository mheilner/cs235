#include <iostream>
#include "arrayFunctions.h"
#include <iomanip>
#include <string.h> //for the memset function
#include <cstdlib> //generate random numbers for the array
using namespace std;

int main(){
    unsigned int maxSize = 100;
    //Make an array of 100 elements all asigned to the val 0
    int * f = new int[maxSize];
    memset(f, 0, sizeof(f)); //set all the values to 0

    arrayFunctions var;
    //PART 2: printArray function
    var.printArray(f, maxSize); unsigned int fill=0;
    //PART 3: push_back
    for(int x=0;x<100;x++){
        var.push_back(f, maxSize, ::rand()%50, fill);
    }
    var.printArray(f, maxSize);
    //PART 4: find
    cout << "we want to find the value 20, it is at position: " << var.find(f, fill, 20) << endl;
    cout << "we want to find the value 70 (which is not in the array), it is at position: " << var.find(f, fill, 70) << endl;
    cout << "we want to find the value 15, it is at position: " << var.find(f, fill, 15) << endl;

    //PART 5: remove
//    cout << "Let's now remove the 4th element (3rd index) of the array" << endl;
//    var.remove(f, fill, 3);
//    var.printArray(f, maxSize);

    //PART 6: insert
//    cout << var.insert(f, maxSize,fill, 2, 200) << endl;
//    cout << var.insert(f, maxSize,fill, 81, 200) << endl;
//    cout << var.insert(f, maxSize,fill, 41, 300) << endl;
//    var.printArray(f, maxSize);
    //
    //POINTERS & ARRAYS HW
    //
    //7 GROW FUNCTION
//    cout << "We are going to make the double of the array" << endl;
//    var.grow(f, maxSize);
//    var.printArray(f, maxSize);
    //INSERT CHANGE FUNCTION
    //COMMENT OUT SECTIONS 5,6,7
    cout << var.insert(f, maxSize,fill, 2, 200) << endl;
    var.printArray(f, maxSize);

    return 0;
}
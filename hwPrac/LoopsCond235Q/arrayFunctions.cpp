// Created by markh on 1/16/2023.
#include <iostream>
#include <iomanip>
#include "arrayFunctions.h"

using namespace std;
//prints values of the array (given number) spaced w max 10 each line
void arrayFunctions:: printArray(const int array[], unsigned int size){
    int count = 0;
    for(int x=0; x<size;x++){
        count++;
        if (count%10==0){
            cout << setw(6) << array[x] << endl;
        }
        else{
            cout << setw(6) << array[x];
        }
    }
    cout << endl;
}
//Adds element to the array at the first unfilled spot. If full returns false
bool arrayFunctions:: push_back(int array[], unsigned int maxSize, int value, unsigned int & nFilled){
    if(nFilled==maxSize){return false;}
    else{
        array[nFilled]=value;
        nFilled++;
        return true;
    }
}
//finds a value and returns the index of the value if it is present, otherwise it returns 1 + the search size
int arrayFunctions:: find(const int array[], unsigned int size, int value){
    for(int x=0;x<size;x++){
        if(array[x]==value){return x;}
    } return size;
}
//removes an element at a specified index. Returns true if successful, otherwise false
bool arrayFunctions:: remove(int array[], unsigned int &size, unsigned int pos){
    if(size<=pos){return false;}
    for(int x=pos;x<size;x++){
        array[x]=array[x+1];
    }
    size--;
    return true;

}
//inserts a given value at a given index. Returns true if successful and false if out of bounds
bool arrayFunctions:: insert (int* &array, unsigned int & maxSize, unsigned int & nFilled, unsigned int pos, int value){
//    if(nFilled >= maxSize || pos > nFilled){return false;}
    if(pos > nFilled) {
        return false;
    }
    if(nFilled >= maxSize && pos <= nFilled){
        grow(array, maxSize);
    }
    for(int x = 0; x < (nFilled-pos); x ++){
        array[nFilled-x] = array[nFilled-1-x];
    }
    array[pos] = value;
    nFilled++;
    return true;

}
//Grow function in Pointers and Array HW
void arrayFunctions:: grow(int* & array, unsigned int & capacity){
    int * newArr = new int[capacity*2];
    for(int x = 0; x<capacity;x++){
        newArr[x] = array[x];
    }
    swap(array, newArr);
    capacity *= 2;
    delete [] newArr;
}

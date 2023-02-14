// Created by markh on 1/16/2023.
#ifndef LOOPSCOND235Q_ARRAYFUNCTIONS_H
#define LOOPSCOND235Q_ARRAYFUNCTIONS_H
#include <iostream>
#include <iomanip>


class arrayFunctions {
public:
    void printArray(const int array[], unsigned int size);
    bool push_back(int array[], unsigned int maxSize, int value,unsigned int & nFilled);
    int find(const int array[], unsigned int size, int value);
    bool remove(int array[], unsigned int &size, unsigned int pos);
    bool insert (int* &array, unsigned int & maxSize, unsigned int & nFilled, unsigned int pos, int value);
    void grow(int* & array, unsigned int & capacity);
};


#endif //LOOPSCOND235Q_ARRAYFUNCTIONS_H

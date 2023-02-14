//
// Created by dagor on 11/8/2022.
//

#ifndef VECTOR_H
#define VECTOR_H
#include <string>
#include <ostream>
#include <stdexcept>
#include <cstring>

const size_t INITIAL_CAPACITY = 10;
const std::string OUT_OF_RANGE_MESSAGE = "Index provided is out of range";

template <class T>
class Vector{
private:
    size_t capacity;
    size_t sz = 0;
    T* data = nullptr;
public:
    // constructors and destructor
    Vector(size_t size = INITIAL_CAPACITY){
        capacity = size;
        data = new T[size];
    }
    Vector(Vector<T>& other){
        *this = other;
    }
    ~Vector() {
        delete[] data;
        data = nullptr;
    }
    // data access
    const T& operator[] (size_t index) const{return operator[](index);}
    T& operator[] (size_t index){return data[index];}
    const T& at(size_t index) const{return at(index);}
    T& at(size_t index){
        if(index>=sz){
            throw std::out_of_range(OUT_OF_RANGE_MESSAGE);
        }
        return data[index];
    }
    // state functions
    bool empty() const{
        if(sz == 0)
            return true;
        return false;
    }
    size_t size() const{return sz;}
    void resize(size_t new_size){
        T* ar = new T[new_size];
        if(sz < new_size){
            for(int i=0;i<sz;i++){
                ar[i] = data[i];
                capacity = new_size;
            }
            std::swap(data,ar);
            delete[] ar;
        }
    }
    std::string toString() const{
        std::string str = "";
        for(size_t i=0; i < sz; i++){
            str += std::to_string(data[i]);
            if(i != sz - 1){ str += " ";}
        }
        return str;
    }
    friend std::ostream & operator<< (std::ostream & os, Vector<T> & obj); // not sure if we should include this one
    // adding data
    void push_back(const T& value){
        if(sz >= capacity)
            resize(capacity*2);
        data[sz] = value;
        sz++;
    }
    void insert(size_t index, const T& value){
//        std::cout << capacity << std::endl;
        if(index > sz) {
            throw std::out_of_range("Index provided is out of range");
        }
        else{
            if(capacity==sz){resize(2*capacity);}
            for(int i=sz-1;i>=index;i--){
                data[i+1] = data[i];
                if(i==0){break;}
            }
            data[index] = value;
            sz++;
        }
    }
    // removing data
    void pop_back(){
        sz --;
        data[sz] = NULL;
    }
    void erase(size_t index){
        if(index >= sz){
            throw std::out_of_range(OUT_OF_RANGE_MESSAGE);
        }
        else{
            for(size_t i=index;i<sz;i++){
                data[i] = data[i+1];
            }
            data[sz] = NULL;
            sz--;
        }

    }
    // bulk change methods
    void swap(Vector<T>& other){
        size_t tCap = capacity;
        capacity = other.capacity;
        other.capacity = tCap;

        size_t tSZ = sz;
        sz = other.sz;
        other.sz = tSZ;

        T* tData = data;
        data = other.data;
        other.data = tData;
    }
    Vector<T>& operator= (const Vector<T>& other){
        delete[] data;
        capacity = other.capacity;
        sz = other.sz;
        data = new T[other.capacity];
//        std::memcpy(dataCopy, data, sz);
//        for the iterative copying over
        for(int i=0;i<other.sz;i++){
            data[i] = other.data[i];
        }

    }
    // comparison operators
    bool operator== (const Vector<T>& other){
        if(this==&other){return true;}
        if(sz != other.sz){return false;}
        for(size_t i=0; i<sz;i++){
            if(data[i] != other.data[i]){
                return false;
            }
        }
        return true;
    }

};

#endif //VECTOR_H
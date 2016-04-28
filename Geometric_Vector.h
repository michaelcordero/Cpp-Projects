//
//  Geometric_Vector.h
//  Perfect_Square_Vector
//
//  Created by Michael Cordero on 4/27/16.
//  Copyright © 2016 com.cordero.michael. All rights reserved.
//
//  Purpose: Wrapper class to add more functionality to <vector> data type.

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

#ifndef Geometric_Vector_h
#define Geometric_Vector_h

class Geometric_Vector{
    
public:
    //constructor
    Geometric_Vector(int a, int b);
    //prototype functions
    void setSize(unsigned long s);
    unsigned long getSize();
    void setVector(vector<int> x);
    vector<int> getVector();
    void setSeries(int s);
    int getSeries();
    
    //member variables
    int series;
    unsigned long size;
    vector<int> v;
    
};

Geometric_Vector::Geometric_Vector(int a, int b){
    int max = fmax(a, b);
    int min = fmin(a, b);
    vector<int> v;
    int series = max-min+1;
    
    for(int i=0;i<series;i++){
        if(fmod(sqrt(min +i),1) == 0){
            v.push_back(min+i);
        }
    }
    setSize(v.size());
    setVector(v);
    setSeries(series);
}

void Geometric_Vector::setSize(unsigned long s){
    this->size=s;
}

unsigned long Geometric_Vector::getSize(){
    return size;
}

void Geometric_Vector::setVector(vector<int> x){
    this->v = x;
}

vector<int> Geometric_Vector::getVector(){
    return v;
}

void Geometric_Vector::setSeries(int s){
    this->series=s;
}

int Geometric_Vector::getSeries(){
    return series;
}

#endif /* Geometric_Vector_h */

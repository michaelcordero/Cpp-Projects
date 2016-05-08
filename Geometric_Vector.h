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
    Geometric_Vector(int a, int b, bool c);
    //prototype functions
    
    //member variables
    int series;
    vector<int> v;
    string msg;
    string msg1;
};

Geometric_Vector::Geometric_Vector(int a, int b){
    int max = fmax(a, b);
    int min = fmin(a, b);
    vector<int> y;
    int x = max-min+1;
    
    for(int i=0;i<x;i++){
        if(fmod(sqrt(min +i),1) == 0){
            y.push_back(min+i);
        }
    }
    msg = "The number of perfect squares in between those two integers inclusively are: ";
    msg1= "The perfect squares are: ";
    series=x;
    v=y;
}

Geometric_Vector::Geometric_Vector(int a, int b, bool c){
    //bool c, placeholder flag when user wants to get the cube roots
    int max = fmax(a, b);
    int min = fmin(a, b);
    vector<int> y;
    int x = max-min+1;
    
    for(int i=0;i<x;i++){
        if(fmod(cbrt(min +i),1) == 0){
            y.push_back(min+i);
        }
    }
    msg="The number of perfect cubes in between those two integers inclusively are:";
    msg1= "The perfect cubes are: ";
    series=x;
    v=y;
}

#endif /* Geometric_Vector_h */

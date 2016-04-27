//
//  Geometric_Vector.h
//  Perfect_Square_Vector
//
//  Created by Michael Cordero on 4/27/16.
//  Copyright © 2016 com.cordero.michael. All rights reserved.
//
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;


#ifndef Geometric_Vector_h
#define Geometric_Vector_h

class Geometric_Vector{
    
public:
    
    static vector<int> create_perfect_square_vector(int a, int b);
    
};

 static vector<int> create_perfect_square_vector(int a, int b){
    
    int max = fmax(a, b);
    int min = fmin(a, b);
    vector<int> v;
    int series = max-min+1;
    
    for(int i=0;i<series;i++){
        if(fmod(sqrt(min +i),1) == 0){
            v.push_back(min+i);
        }
    }
    return v;
}
#endif /* Geometric_Vector_h */

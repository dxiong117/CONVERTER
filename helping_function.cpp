//
//  helping_function.cpp
//  converter
//
//  Created by Hao Peng on 15/9/8.
//  Copyright (c) 2015年 Hao Peng. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <unistd.h>
#include <string>
#include <stdio.h>
#include "Header.h"
using namespace std;

char* extract_x(char* line)
{
    char * error_message = "error";
    char * x  = (char*)malloc(7*sizeof(char));
    int x_location = -1;
    x_location = find_x(line);
    
    if(x_location == -1)
        return error_message;
    x_location++;
    for(int i =0; i<6; i++)
        x[i] = line[x_location + i] ;
    x[6] = '\0';
   // cout<< "x_value is: "<< x<<endl;
    return x;

}

char* extract_y(char* line)
{
    char * error_message = "error";
    char * y  = (char*)malloc(7*sizeof(char));
    int y_location = -1;
    y_location = find_y(line);
    
    if(y_location == -1)
        return error_message;
    y_location++;
    for(int i =0; i<6; i++)
        y[i] = line[y_location + i] ;
    y[6] = '\0';
    //cout<< "y_value is: "<< y<<endl;
    return y;

}

char* extract_z(char* line)
{
    char * error_message = "error";
    char * z  = (char*)malloc(7*sizeof(char));
    int z_location = -1;
    z_location = find_z(line);
    
    if(z_location == -1)
        return error_message;
    z_location++;
    for(int i =0; i<5; i++)
        z[i] = line[z_location + i] ;
    z[5] = '\0';
    // cout<< "x_value is: "<< x<<endl;
    return z;
    
}

int find_x(char* line)
{
    int position= 0;
    for(; line[position]!='\0' && line[position]!='X'; position++) ;
    if(line[position]=='\0')
        position=-1;
    //cout<<"x's position: "<<position<<endl;
    return position;
}

int find_y(char* line)
{
    int position= 0;
    for(; line[position]!='\0' && line[position]!='Y'; position++) ;
    if(line[position]=='\0')
        position=-1;
    //cout<<"y's position: "<<position<<endl;
    return position;
}

int find_z(char* line)
{
    int position= 0;
    for(; line[position]!='\0' && line[position]!='Z'; position++) ;
    if(line[position]=='\0')
        position=-1;
    //cout<<"z's position: "<<position<<endl;
    return position;
}

char* append(char* left, char* right)
{
    char* result = (char*)malloc(40*sizeof(char));
    int i = 0;
    int j = 0;
    for(i = 0; left[i]!='\0'; i++)
    {
        result[i] = left[i];
    }
    
    // seperate x and y value
    
    for(j = 0; right[j]!='\0'; j++)
    {
        result[i+j] =right[j];
    }
    result[i+j] = '\0';
    return result;
}





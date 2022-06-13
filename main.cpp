//
//  main.cpp
//  converter
//
//  Created by Deng Xiong, Hao Peng on 15/9/8.
//  Copyright (c) 2015年 Deng Xiong, Hao Peng. All rights reserved.
//


#include "Header.h"
#include <unistd.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    string STRING;
    ifstream infile;
    infile.open ("input.txt");
    char* x_value;
    char* y_value;
    char* z_value = "Unknown";
    char* new_line;
    char* head = "Line Passing,	";
    char* middle = "    ,   ";
    
    while( !infile.eof() )
    {
        getline(infile,STRING);
        char* url = (char*)STRING.data();
        cout<<url<<endl;
        if(find_z(url) != -1)
        {
            cout<<"This line sets z value"<<endl;
            z_value = extract_z(url);
            continue;
        }
        x_value = extract_x(url);
        y_value = extract_y(url);
        //cout<< "x_value is: "<< x_value<<endl;
        //cout<< "y_value is: "<< y_value<<endl;
        new_line = append(head, x_value);
        new_line = append(new_line, middle);
        new_line = append(new_line,y_value);
        new_line = append(new_line,middle);
        new_line = append(new_line, z_value);
        cout<<new_line<<endl;
    }
    
    cout << "This is the end of the file.\n"<<endl;
    return 0;
}

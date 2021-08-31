//
//  Header.h
//  converter
//
//  Created by Hao Peng on 15/9/8.
//  Copyright (c) 2015年 Hao Peng. All rights reserved.
//

#ifndef converter_Header_h
#define converter_Header_h

#include <iostream>
#include <fstream>
#include <unistd.h>
#include <string>
#include <stdio.h>

//general functions
//to convert the regular g code to src line
char* extract_x(char*);
char* extract_y(char*);
char* extract_z(char*);

//helping functions
int find_x(char*);
int find_y(char*);
int find_z(char*);

char* append(char*,char*);


#endif

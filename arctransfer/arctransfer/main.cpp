//
//  main.cpp
//  arctransfer
//
//  Created by YaoxinZhuo on 2/29/16.
//  Copyright © 2016 YaoxinZhuo. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bitset>
using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    int i1 = 0;
    int i2 = -1;
    int i3 =  17;
    int i4 = -17;
    float f1 = 0;
    float f2 = -1;
    float f3 = 17;
    float f4 = -17;
    double d1 = 0;
    double d2 = -1;
    double d3 = 17;
    double d4 = -17;
    
    cout<<"binary format of "<<i1<<" is "<<bitset<sizeof(int)*1>(i1)<<endl;
    cout<<"binary format of "<<f1<<" is "<<bitset<sizeof(float)*1>(f1)<<endl;
    cout<<"binary format of "<<d1<<" is "<<bitset<sizeof(double)*1>(d1)<<endl;
    
    cout<<"binary format of "<<i2<<" is "<<bitset<sizeof(int)*1>(i2)<<endl;
    cout<<"binary format of "<<f2<<" is "<<bitset<sizeof(float)*1>(f2)<<endl;
    cout<<"binary format of "<<d2<<" is "<<bitset<sizeof(double)*1>(d2)<<endl;
    
    cout<<"binary format of "<<i3<<" is "<<bitset<sizeof(int)*1>(i3)<<endl;
    cout<<"binary format of "<<f3<<" is "<<bitset<sizeof(float)*1>(f3)<<endl;
    cout<<"binary format of "<<d3<<" is "<<bitset<sizeof(double)*1>(d3)<<endl;
    
    cout<<"binary format of "<<i4<<" is "<<bitset<sizeof(int)*1>(i4)<<endl;
    cout<<"binary format of "<<f4<<" is "<<bitset<sizeof(float)*1>(f4)<<endl;
    cout<<"binary format of "<<d4<<" is "<<bitset<sizeof(double)*1>(d4)<<endl;
    
    return 0;
}

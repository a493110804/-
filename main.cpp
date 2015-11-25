//
//  main.cpp
//  类和对象的简单应用
//
//  Created by 魏新宇 on 15/11/25.
//  Copyright © 2015年 魏新宇. All rights reserved.
//

#include <iostream>
using namespace std;
class Time
{
public:
    int hour;
    int minute;
    int sec;
};
int main()
{
    Time t1;
    cin>>t1.hour>>t1.minute>>t1.sec;
    cout<<t1.hour<<":"<<t1.minute<<":"<<t1.sec<<endl;
    return 0;
}

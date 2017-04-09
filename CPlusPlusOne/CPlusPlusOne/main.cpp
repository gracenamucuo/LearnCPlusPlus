//
//  main.cpp
//  CPlusPlusOne
//
//  Created by 戴运鹏 on 2017/4/9.
//  Copyright © 2017年 戴运鹏. All rights reserved.
//

#include <iostream>

using namespace std;//名字空间

int addArray(int *array, int n);

int main(int argc, const char * argv[]) {
    int data[] = {0,1,2,3,4,5,6,7,8,9};
    int size = sizeof(data) / sizeof(data[0]);
    cout << "结果是:" << addArray(data, size) << endl;
    return 0;
}
//重载是事实上就是允许我们按照不同的方式使用同一个操作符。
int addArray(int *array,int n){
    int sum = 0;
    int i ;
    for (i = 0; i < n; i++) {
        sum += *array++;
    }
    return sum;
}





























//
//  main.cpp
//  bookstore
//
//  Created by 李子晨 on 16/5/29.
//  Copyright © 2016年 李子晨. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include "good.hpp"
int main(int argc, const char * argv[]) {
    Background a;//建立一个后台管理系统的对象
    string barcode;
    int num;
    printf("please enter the first barcode and number\n(enter two quit to finish)\n");
    //读入商品信息直到输入quit
    while (std::cin >> barcode >> num && barcode != "quit") {
        a.add_good(barcode, num);
        printf("ok,next(enter two quit to finish)\n");
    }
    //输出结账信息
    a.print_list();
    a.print_sum();
    return 0;
}

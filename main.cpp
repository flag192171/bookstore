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
    Background a;
    string barcode;
    int num;
    printf("please enter the first barcode and number\n(enter two quit to finish)\n");
    while (std::cin >> barcode >> num && barcode != "quit") {
        a.add_good(barcode, num);
        printf("ok,next(enter two quit to finish)\n");
    }
    a.print_list();
    a.print_sum();
    return 0;
}

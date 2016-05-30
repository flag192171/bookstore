//
//  good.cpp
//  bookstore
//
//  Created by 李子晨 on 16/5/29.
//  Copyright © 2016年 李子晨. All rights reserved.
//

#include "good.hpp"
#include <string>
#include <cstdio>
//book类的构造函数
book::book (string _name, string _barcode, string _author,string _isbn, float _price, int _num ) {
    name = _name;
    barcode = _barcode;
    autour = _author;
    price = _price;
    num = _num;
    ISBN = _isbn;
}
//magizine类的构造函数
magizine::magizine (string _name, string _barcode, string _ISSN, string _frequecy, int _issue, float _price, int _num) {
    name = _name;
    price = _price;
    barcode = _barcode;
    num = _num;
    issue = _issue;
    frequency = _frequecy;
    ISSN = _ISSN;
}
//cd类的构造函数
CD::CD (string _name, string _barcode, string _style, int _length, float _price, int _num) {
    name = _name;
    price = _price;
    barcode = _barcode;
    num = _num;
    style = _style;
    length = _length;
}
//VCD类的构造函数
VCD::VCD (string _name, string _barcode, int _length, float _price, int _num) {
    name = _name;
    price = _price;
    barcode = _barcode;
    num = _num;
    length = _length;
}
//dvd类的构造函数
DVD::DVD (string _name, string _barcode, int _length, float _price, int _num) {
    name = _name;
    barcode = _barcode;
    price = _price;
    num = _num;
    length = _length;
}
//background类的构造函数，初始化商品列表
Background::Background() {
    book_list.push_back(book("cpp", "001", "lzc001","001", 23.3, 0));
    book_list.push_back(book("c", "002", "lzc002","002", 23.4, 0));
    book_list.push_back(book("php", "003", "lzc003","003", 23.5, 0));
    mag_list.push_back(magizine("obj-c", "004", "233", "year", 23, 5.1, 0));
    mag_list.push_back(magizine("asp", "005", "234", "month", 234, 5.2, 0));
    mag_list.push_back(magizine("ruby", "006", "235", "year", 24, 5.3, 0));
    cd_list.push_back(CD("python", "007", "light", 233, 20.1, 0));
    cd_list.push_back(CD("haskell", "008", "new age", 234, 20.1, 0));
    cd_list.push_back(CD("lisp", "009", "light", 235, 20.1, 0));
    vcd_list.push_back(VCD("c#", "010", 1000, 50, 0));
    vcd_list.push_back(VCD("prolog", "011", 1001, 51, 0));
    vcd_list.push_back(VCD(".net", "012", 1002, 52, 0));
    dvd_list.push_back(DVD("perl", "013", 1003, 53, 0));
    dvd_list.push_back(DVD("swift", "014", 1004, 54, 0));
    dvd_list.push_back(DVD("matlab", "015", 1005, 55, 0));

}
//用于向background类的数据成员中添加商品数量
//接受两个参数，第一个是商品条形码，第二个是商品数量
bool Background::add_good(string _barcode, int _num) {
    for(auto &c :book_list) {
        if (c.get_barcode() == _barcode) {
            c.set_num(c.get_num() + _num);
            return true;
        }
        
    }
    for(auto &c :mag_list) {
        if (c.get_barcode() == _barcode) {
            c.set_num(c.get_num() + _num);
            return true;
        }
    }
    for(auto &c :cd_list) {
        if (c.get_barcode() == _barcode) {
            c.set_num(c.get_num() + _num);
            return true;
        }
    }
    for(auto &c :vcd_list) {
        if (c.get_barcode() == _barcode) {
            c.set_num(c.get_num() + _num);
            return true;
        }
    }
    for(auto &c :dvd_list) {
        if (c.get_barcode() == _barcode) {
            c.set_num(c.get_num() + _num);
            return true;
        }
    }

    return false;
}

//用于格式化输出已添加的商品信息
void Background::print_list() {
    printf("\ntypename: book\n");
    for(auto c :book_list) {
        if (c.get_num() != 0) {
            printf("name: %-8s",(c.get_name()).c_str());
            printf("barcode: %-5s",(c.get_barcode()).c_str());
            printf("author: %-7s",(c.get_autour()).c_str());
            printf("isbn: %-5s",(c.get_isbn()).c_str());
            printf("price: %-7.2f",c.get_price());
            printf("num : %-5d",c.get_num());
            printf("\n");
        }
    }
    printf("\ntypename: magizine\n");
    for(auto c :mag_list) {
        if (c.get_num() != 0) {
            printf("name: %-8s",(c.get_name()).c_str());
            printf("barcode: %-5s",(c.get_barcode()).c_str());
            printf("ISSN: %-7s",(c.get_ISSN()).c_str());
            printf("frequency: %-5s",(c.get_frequency()).c_str());
            printf("issue: %-5d",c.get_issue());
            printf("price: %-7.2f",c.get_price());
            printf("num : %-5d",c.get_num());
            printf("\n");
        }
    }
    printf("\ntypename: CD\n");
    for(auto c :cd_list) {
        if (c.get_num() != 0) {
            printf("name: %-8s",(c.get_name()).c_str());
            printf("barcode: %-5s",(c.get_barcode()).c_str());
            printf("style: %-10s",(c.get_style()).c_str());
            printf("length: %-5d",c.get_length());
            printf("price: %-7.2f",c.get_price());
            printf("num : %-5d",c.get_num());
            printf("\n");
        }
    }
    printf("\ntypename: VCD\n");
    for(auto c :vcd_list) {
        if (c.get_num() != 0) {
            printf("name: %-8s",(c.get_name()).c_str());
            printf("barcode: %-5s",(c.get_barcode()).c_str());
            printf("length: %-5d",c.get_length());
            printf("price: %-7.2f",c.get_price());
            printf("num : %-5d",c.get_num());
            printf("\n");
        }
    }
    printf("\ntypename: DVD\n");
    for(auto c :dvd_list) {
        if (c.get_num() != 0) {
            printf("name: %-8s",(c.get_name()).c_str());
            printf("barcode: %-5s",(c.get_barcode()).c_str());
            printf("length: %-5d",c.get_length());
            printf("price: %-7.2f",c.get_price());
            printf("num : %-5d",c.get_num());
            printf("\n");
        }
    }
}
//用于计算商品的总价格
double Background::total() {
    double sum = 0;
    for(auto c : book_list) {
        sum += c.get_price() * c.get_num();
    }
    for(auto c : mag_list) {
        sum += c.get_price() * c.get_num();
    }
    for(auto c : cd_list) {
        sum += c.get_price() * c.get_num();
    }
    for(auto c : vcd_list) {
        sum += c.get_price() * c.get_num();
    }
    for(auto c : dvd_list) {
        sum += c.get_price() * c.get_num();
    }
    return sum;
}
//格式化输出商品总价格
void Background::print_sum() {
    for(int i = 0; i < 40; i++) {
        printf("*");
    }
    printf("\n");
    printf("total : %10.2lf\n",total());
}
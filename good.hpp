//
//  good.hpp
//  bookstore
//
//  Created by 李子晨 on 16/5/29.
//  Copyright © 2016年 李子晨. All rights reserved.
//

#ifndef good_hpp
#define good_hpp

#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

class good {
public:
    string name;
    string barcode;//商品条形码
    string autour;
    float price;
    int num;
    string get_barcode(void) {
        return barcode;
    }
    string get_name(void) {
        return name;
    }
    string get_autour(void) {
        return autour;
    }
    float get_price (void) {
        return price;
    }
    int get_num(void) {
        return num;
    }
    void set_num(int _num) {
        num = _num;
    }
    
};
class book : public good {
public:
    string ISBN;//图书isbn号
    string get_isbn(void) {
        return ISBN;
    }
    book (string _name, string _barcode, string _author, string _isbn, float _price, int _num );//构造函数
    
};
class magizine : public good {
public:
    string ISSN;//发行刊号
    string frequency;//发行周期
    int issue;//杂志期号
    magizine (string _name, string _barcode, string _ISSN, string _frequecy, int _issue, float _price, int _num);//构造函数
    string get_ISSN(void) {
        return ISSN;
    }
    string get_frequency(void) {
        return frequency;
    }
    int get_issue(void) {
        return issue;
    }
};
class CD :public good {
public:
    CD() = default;//默认构造函数，使vcd&&dvd类可以直接继承cd类
    string style;//音乐风格
    int length;//专辑长度
    string get_style(void) {
        return style;
    }
    int get_length(void) {
        return length;
    }
    CD (string _name, string _barcode, string _style, int _length, float _price, int _num);//构造函数
};

class VCD : public CD {
public:
    VCD() = default;//默认构造函数，dvd类可以直接继承cd类
    VCD (string _name, string _barcode, int _length, float _price, int _num);//构造函数

};
class DVD :public VCD {
public:
    DVD (string _name, string _barcode, int _length, float _price, int _num);//构造函数

};
class Background {
public:
    Background();//构造函数
    bool add_good(string _barcode, int num);//用于向background类的数据成员中添加商品数量。接受两个参数，第一个是商品条形码，第二个是商品数量
    void print_list();//用于格式化输出已添加的商品信息
    void print_sum ();//格式化输出商品总价格
    double total();//用于计算商品的总价格

private:
    vector<book> book_list;
    vector<magizine> mag_list;
    vector<CD> cd_list;
    vector<VCD> vcd_list;
    vector<DVD> dvd_list;
};
#endif /* good_hpp */

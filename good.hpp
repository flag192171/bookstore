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
    string barcode;
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
    string ISBN;
    string get_isbn(void) {
        return ISBN;
    }
    book (string _name, string _barcode, string _author, string _isbn, float _price, int _num );
    
};
class magizine : public good {
public:
    string ISSN;//发行刊号
    string frequency;//发行周期
    int issue;//杂志期号
    magizine (string _name, string _barcode, string _ISSN, string _frequecy, int _issue, float _price, int _num);
    
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
    CD() = default;
    string style;//音乐风格
    int length;//专辑长度
    string get_style(void) {
        return style;
    }
    int get_length(void) {
        return length;
    }
    CD (string _name, string _barcode, string _style, int _length, float _price, int _num);
};

class VCD : public CD {
public:
    VCD() = default;
    VCD (string _name, string _barcode, int _length, float _price, int _num);

};
class DVD :public VCD {
public:
    DVD (string _name, string _barcode, int _length, float _price, int _num);

};
class Background {
public:
    Background();
    bool add_good(string _barcode, int num);
    
    void print_list();
    void print_sum ();
    double total();
private:
    vector<book> book_list;
    vector<magizine> mag_list;
    vector<CD> cd_list;
    vector<VCD> vcd_list;
    vector<DVD> dvd_list;
};
#endif /* good_hpp */

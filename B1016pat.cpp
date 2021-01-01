//
// Created by Xiang_Duan on 2021/1/1.
//

#include <iostream>
#include <string>

int main() {
    std::string a, b;
    char da, db;
    //input
    std::cin >> a >> da >> b >> db;
    int alen = a.size();
    int blen = b.size();


    int acnt = 0, bcnt = 0;
    for (int i = 0; i < alen; ++i) {
        if (a[i] == da) {
            acnt++;
        }
    }
    for (int j = 0; j < blen; ++j) {
        if (b[j] == db) {
            bcnt++;
        }
    }
    int anum = (int) da - '0';
    int bnum = (int) db - '0';
    int ares = 0, bres = 0;
    for (int i = 0; i < acnt; ++i) {
        ares = anum + ares * 10;
    }
    for (int i = 0; i < bcnt; ++i) {
        bres = bnum + bres * 10;
    }
//    if (acnt == 0 && bcnt == 0){
//        std::cout<<0<<std::endl;
//    } else{
//        std::cout<<ares+bres<<std::endl;
//    }
    std::cout<<ares+bres<<std::endl;


        return 0;
}

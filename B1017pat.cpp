//
// Created by Xiang_Duan on 2021/1/1.
//

#include <iostream>
#include <string>

int main() {
    std::string dividend;//被除数，除数，商，余数
    int divisor,consult,remainder=0;
    std::cin >> dividend >> divisor ;

    int len = dividend.size();
    for (int i = 0; i < len; ++i) {
        consult = ((dividend[i]-'0')+remainder*10)/divisor;
        remainder=((dividend[i]-'0')+remainder*10)%divisor;
        if (i!=0||consult !=0||len==1){
            std::cout<<consult;
        }
    }
    std::cout<<" " <<remainder<<std::endl;
    return 0;
}

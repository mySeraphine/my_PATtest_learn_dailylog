#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    int input;
    std::cin >> input; //输入
    string res;
    for (int i=0; input>0; i++){
        int x = input % 10 ;
        input = input / 10;
        if (i == 0){//个位
            for (int g = 1; g <= x;g++){
                res = res + to_string(g);
            }
        }else if(i == 1) {//十位
            for (int s = 0; s < x; s++ ){
                res.insert(0, "S");
            }
        }else {//百位
            for (int b = 0; b < x; b++){
                res.insert(0, "B");
            }
        }
    }
    std:: cout << res << std::endl;
    return 0;
}

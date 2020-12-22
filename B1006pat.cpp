//让我们用字母 B 来表示“百”、字母 S 表示“十”，用 12...n 来表示不为零的个位数字 n（<10），换个格式来输出任一个不超过 3 位的正整数。例如 234 应该被输出为 BBSSS1234，因为它有 2 个“百”、3 个“十”、以及个位的 4。
//每个测试输入包含 1 个测试用例，给出正整数 n（<1000）。
//每个测试用例的输出占一行，用规定的格式输出 n。
//输入示例：234
//输出示例：BBSSS1234

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

////
//// Created by Xiang_Duan on 2020/12/18.
////
//读入 n（>0）名学生的姓名、学号、成绩，分别输出成绩最高和成绩最低学生的姓名和学号。
//每个测试输入包含 1 个测试用例，格式为:
//第 1 行：正整数 n
//第 2 行：第 1 个学生的姓名 学号 成绩
//        第 3 行：第 2 个学生的姓名 学号 成绩
//        ... ... ...
//        第 n+1 行：第 n 个学生的姓名 学号 成绩
//        其中姓名和学号均为不超过 10 个字符的字符串，成绩为 0 到 100 之间的一个整数，这里保证在一组测试用例中没有两个学生的成绩是相同的。

#include <iostream>
#include <string>
using namespace std;

int main(){
    string maxName;
    string maxId;
    int maxScore = 0;

    string minName;
    string minId;
    int minScore = 100;

    string name;
    string id;
    int score;

    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> name >> id >> score;
        if (score > maxScore){
            maxName = name;
            maxId = id;
            maxScore = score;
        }
        if (score < minScore){
            minName = name;
            minId = id;
            minScore = score;
        }
    }
    cout << maxName << " " << maxId << endl;
    cout << minName << " " << minId << endl;
}

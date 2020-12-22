//
// Created by Xiang_Duan on 2020/12/22.
//
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
    //input
    string instr;
    string buff;
    vector<string> vecstr; //不能再这里设置数组长度
    vecstr.reserve(10); //要在这里设置vector长度，否则会认为输出错误


    getline(cin, instr);
    stringstream sinstr(instr);
    while (sinstr >> buff)
    {
        vecstr.push_back(buff);  //使用stringstream字符串流输入，可以按空格分隔各个单词
    }

    //output
    for (int j = (int)vecstr.size()-1; j>0 ; j--)
    {
        cout << vecstr.at(j) << " ";
    }
    cout << vecstr.at(0) << endl;




    return 0;
}

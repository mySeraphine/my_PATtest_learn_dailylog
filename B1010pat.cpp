//
// 不完善版本
//
#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

vector<int> Derivate (vector<int> nums);

int main()
{

    vector<int> vec;
    vec.reserve(4);

    while (true){
        int input;
        cin >> input;
        vec.push_back(input);

        if ('\n' == getchar()) break;
    }

//    while (true){  //使用无限循环输入数字，不使用do-while是因为有变量定义在循环体内部
//        (void) scanf("%d",&d);
//        vec.push_back(d);
//        char ch=(char) getchar();
//        if (ch =='\n') break;
//    }

    vector<int> nwnums = Derivate(vec);
    int L = nwnums.size();
    for (int j = 0; j < L-1 ; j++)
    {
        cout << nwnums.at(j) << " ";
    }
    cout<< nwnums.at(L-1) << endl;

    return 0;
}

vector<int> Derivate (vector<int> nums)
{
    int L =nums.size();
    vector<int> derivated;
    if (nums.at(0) == 0 && nums.at(1) == 0) { //如果是零项式，需要返回0 0.
        derivated = {0,0};
    }else{
        for (int i = 0; i< L; i+=2)
        {
            int coefficient = nums.at(i) * nums.at(i+1);
            int pointer = nums.at(i+1) -1;

            if (coefficient != 0){ //如果求导后的系数不为0的话，就记录下来
                derivated.push_back(coefficient);
                derivated.push_back(pointer);
            }


        }

    }

    return derivated;
}

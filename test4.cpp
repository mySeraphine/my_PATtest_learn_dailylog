#include <iostream>
#include <windows.h>
#include "string"

using namespace std;

int main(){
    SetConsoleOutputCP(65001);

    string inputs;
    cin >> inputs;
    long sums = 0;

    for (int i = 0; i < inputs.size(); ++i) {
        int nums = inputs[i] - '0';
        sums = sums + nums;
    }
    //cout << sums << endl;
    string res ;

    string str[]= {"零","一","二","三","四","五","六","七","八","九"};
    for ( ; sums>0 ; ){
        int temp = sums % 10 ;
        sums /= 10;
        res = str[temp]+"_"+ res;
    }
    res.pop_back();
    cout << res << endl;
    return 0;
}
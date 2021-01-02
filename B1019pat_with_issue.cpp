
#include <iostream>
#include <set>


using namespace std;

int pro_num(int input);

int r_pro_num(int input);


int main() {
    int input = 0;
    cin >> input;

    while (input != 6174) {
        int output = pro_num(input);
        int routput = r_pro_num(input);
        if (output == routput) {
            printf("%04d - %04d = 0000\n", output, routput);
            break;
        }
        int greater = output > routput ? output : routput;
        int less = output < routput ? output : routput;
        input = greater-less;
        printf("%04d - %04d = %04d\n", greater, less, input);//一定要注意输出时需要用0占位补足
    }
    return 0;
}

int pro_num(int input) {
    int N = 4;
    multiset<int> inputs;
    while (input > 0) {
        inputs.insert(input % 10);
        input /= 10;
    }
    int L = inputs.size();
    if (L < 4) {
        for (int i = 0; i < N - L; ++i) {
            inputs.insert(0);
        }
    }
    int output = 0;
    for (int e:inputs) {
        output = output * 10 + e;
    }
    return output;
}

int r_pro_num(int input) {
    int N = 4;
    multiset<int, greater<>> rinputs;
    while (input > 0) {
        rinputs.insert(input % 10);
        input /= 10;
    }
    int L = rinputs.size();
    if (L < N) {
        for (int i = 0; i < N - L; ++i) {
            rinputs.insert(0);
        }
    }
    int output = 0;
    for (int e:rinputs) {
        output = output * 10 + e;
    }
    return output;
}


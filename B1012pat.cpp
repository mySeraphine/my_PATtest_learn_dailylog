#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    //input
    int N;
    cin >> N;


    int A1 = 0, cA1 = 0;
    int A2 = 0, cA2 = 0;
    int A3 = 0, cA3 = 0;
    vector<int> A4;
    A4.reserve(3);
    int cA4 = 0;
    int A5 = 0, cA5 = 0;

    while (N > 0)
    {
        int cur_num = 0;
        cin >> cur_num;
        if (cur_num % 2 == 0 && cur_num % 5 == 0){//A1
            A1 += cur_num;
            ++cA1;

        }
        switch (cur_num % 5) {
            case 1://A2
                A2 += (int)pow(-1, cA2)*cur_num;
                ++cA2;
                break;

            case 2://A3
                ++A3;
                ++cA3;
                break;

            case 3://A4
                A4.push_back(cur_num);
                ++cA4;
                break;

            case 4://A5
                A5 = max(cur_num,A5);
                ++cA5;
                break;
        }
        --N;
    }

    //output
    if (cA1 == 0){
        cout << "N" ;
    } else {
        cout << A1;
    }
    if (cA2 == 0){
        cout << " " << "N" ;
    } else {
        cout  << " " << A2;
    }
    if (cA3 == 0){
        cout << " " << "N" ;
    } else {
        cout << " " << A3;
    }
    if (cA4 == 0){
        cout << " " << "N" ;
    } else {
        int A4_L = A4.size();
        float sum = 0;

        for (int i = 0; i < A4_L; ++i) {
            sum += A4.at(i);
        }
        cout << " " << fixed << setprecision(1) << sum / (float)A4_L;
    }
    if (cA5 == 0){
        cout << " " << "N" ;
    } else {
        cout << " " << A5 << '\n';
    }

    return 0;
}

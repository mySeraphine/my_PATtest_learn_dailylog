
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

const string DAY_IN_WEEK[7] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };

int main() {
    vector<string> dateInfo(4);

    for (int i = 0; i < 4; ++i) {
        cin >> dateInfo[i];
    }

    //星期
    int i = 0;
    for (; i < dateInfo[0].size() && dateInfo[1].size(); ++i) {
        if (dateInfo[0][i] == dateInfo[1][i] && dateInfo[0][i] >= 'A' && dateInfo[0][i] <= 'G') {
            cout << DAY_IN_WEEK[dateInfo[0][i] - 'A'] << ' ';
            break;
        }
    }

    //小时
    //上个循环中找到之后直接break，此处++i是从上一个循环的下一个位置开始
    for (++i; i < dateInfo[0].size() && dateInfo[1].size(); ++i) {
        if (dateInfo[0][i] == dateInfo[1][i]) {
            if (dateInfo[0][i] >= '0' && dateInfo[0][i] <= '9') {
                cout << 0 << dateInfo[0][i];
                break;
            }
            else if (dateInfo[0][i] >= 'A' && dateInfo[0][i] <= 'N') {
                cout << dateInfo[0][i] - 'A' + 10;
                break;
            }
        }
    }

    //分钟
    for (i = 0; i < dateInfo[2].size() && i < dateInfo[3].size(); ++i) {
        if (dateInfo[2][i] == dateInfo[3][i]) {
            if (dateInfo[2][i] >= 'a' && dateInfo[2][i] <= 'z' ||
                dateInfo[2][i] >= 'A' && dateInfo[2][i] <= 'Z') {
                cout << ':' << setw(2) << setfill('0') << i;
                break;
            }
        }
    }

    return 0;
}

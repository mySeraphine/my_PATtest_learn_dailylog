//在循环时，需要小心设定边界，要考虑到本次循环执行后，循环条件变为不满足才会退出循环。

#include <vector>
#include <iostream>

using namespace std;

int main() {
    system("chcp 65001");
    vector<int> vec;
    for (int i = 0; i < 6; ++i) {
        vec.push_back(i);
    }
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec.at(i) << " ";
    }
    cout<<endl;
    cout << "=========="<<endl;

    int temp = vec.at(vec.size() - 1);
    cout << "当前vector最后一个元素的临时变量值：" << temp <<endl;
    int L = vec.size();
    cout << "当前最后一个元素的值"<<vec[L-1] << endl;
    for (L; L >= 2; --L) { //注意此处的L为真的条件，只有L >= 2时，才会继续进行下一步,也就是对vector的倒数第二个元素赋值
        vec[L-1] = vec[L - 2];
        cout << vec[L-1];
    }
    cout << endl;
    cout << "当前临时变量的值" << temp;
    vec.at(0) = temp;

    for (int i = 0; i < vec.size(); ++i) {
        cout << vec.at(i) << " ";
    }
    return 0;
}

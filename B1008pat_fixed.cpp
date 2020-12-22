#include <iostream>
#include <vector>

using namespace std;

void Movefn (vector<int> &numsls, int move);
void Printfn (vector<int> &numls , int n);

int main()
{
    int N,N2;
    int move;
    cin >> N >> move;
    N2 = N;


    vector<int> nums;

    while (N > 0)//输入数据
    {
        int i;
        cin >> i;
        nums.push_back(i);
        N--;
    }
    
    Movefn(nums, move);
    
    Printfn(nums,N2);
}

void Movefn (vector<int> &numsls, int move)
{
    for (int i = 0; i < move; ++i) {
        int last = (int)numsls.size() - 1;
        int temp = numsls[last]; //最后一个元素
        while (last >= 1) {
            numsls.at(last) = numsls.at(last - 1);
            last--;
        }
        numsls.at(0) = temp;
    }
}



void Printfn (vector<int> &numls , int n)
{
    for (int i = 0; i < n-1; ++i) {
        cout << numls.at(i) << " ";
    }
    cout<< numls.at(n-1) << endl;
}

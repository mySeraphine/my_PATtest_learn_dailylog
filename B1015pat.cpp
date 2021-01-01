#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct Student{
    int id, moral, talent;	//德，才
}temp;
bool cmp(Student a, Student b){
    if(a.moral + a.talent != b.moral + b.talent)
        return a.moral + a.talent > b.moral + b.talent;
    else if(a.moral != b.moral)
        return a.moral > b.moral;
    else
        return a.id < b.id;
}
int main(){
    int N, L, H;
    cin >> N >> L >> H;
    int total = N;
    vector<Student> v[4];
//    Student temp;
    for(int i = 0; i < N; i++){
        scanf("%d %d %d", &temp.id, &temp.moral, &temp.talent);
        if(temp.moral < L || temp.talent < L)//菜鸡不予录取
            total--;
        else if(temp.moral >= H && temp.talent >= H)//德才全尽
            v[0].push_back(temp);
        else if(temp.moral >= H && temp.talent < H)
            v[1].push_back(temp);
        else if(temp.moral < H && temp.talent < H && temp.moral >= temp.talent)
            v[2].push_back(temp);
        else
            v[3].push_back(temp);
    }
    printf("%d\n", total);
    for(int i = 0; i < 4; i++){
        sort(v[i].begin(), v[i].end(), cmp);
        for(int j = 0; j < v[i].size(); j++)
            printf("%d %d %d\n", v[i][j].id , v[i][j].moral, v[i][j].talent);
    }
    return 0;
}

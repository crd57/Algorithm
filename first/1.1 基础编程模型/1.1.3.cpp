//
// Created by crd57 on 2018/11/25.
//
#include <iostream>

using namespace std;

int main() {
    int a,b,c;
    cout <<"请输入第一个整数：";cin >> a;
    cout <<"请输入第二个整数：";cin >> b;
    cout <<"请输入第三个整数：";cin >> c;
    if (a==b && b==c)
        cout<<"equal";
    else
        cout<<"not equal";
    return 0;
}

//
// Created by crd57 on 2018/11/25.
//

#include <iostream>
using namespace std;

int LessLog(int N);

int main() {
    cout<<LessLog(9);
}

int LessLog(int N){
    int i=0;
    int m =0 ;
    for(i =0 ;m<=N;i++)
    {
        m = i*i;

    }
    return (i-2);
}

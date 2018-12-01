//
// Created by crd57 on 2018/11/25.
//
#include <iostream>
#include <vector>
using namespace std;

int* LessLog(int *N,int M);

int main() {
    int a[4] = {0,1,2,4} ;
    int M = 3;
    int* historgram = LessLog(a,M);
    for (int j = 0; j < M; j++)
        cout<<historgram[j]<<endl;
}

int* LessLog(int *N,int M){
    int *histogram = new int[M];
    for (int j = 0; j < M; j++)
    {
        histogram[j] = 0;
    }
    for(int i =0;i< sizeof(N);i++) {
        for (int j = 0; j < M; j++) {
            if (N[i] == j)
                histogram[j] = 1;
        }
    }
    return histogram;
}




//
// Created by crd57 on 2018/11/25.
//

#include <iostream>
#include <cmath>
using namespace std;

double n(double data);

int main() {
    cout <<log(n(1));
    return 1;
}
double n(double data){
    if(data == 1 || data ==0)
        return 1;
    else
        return (data*n(data-1));

}

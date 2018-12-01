//
// Created by crd57 on 2018/11/25.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void PrintBool2D(vector<vector<bool>> vec);
int main() {
    vector<vector<bool>> vec ;
    vector<bool> a;
    a.push_back(true);
    a.push_back(false);
    a.push_back(false);

    vector<bool> b;
    b.push_back(false);
    b.push_back(true);
    b.push_back(false);

    vec.push_back(a);
    vec.push_back(b);
    PrintBool2D(vec);
}

void PrintBool2D(vector<vector<bool>> vec)
{
    if (vec.empty())
    {
        cout << "The vector is empty!" << endl;
        return;
    }
    vector<bool>::iterator it;
    vector<vector<bool>>::iterator iter;
    vector<bool> vec_tmp;
    for(iter  = vec.begin(); iter != vec.end(); iter++)
    {
        vec_tmp = *iter;
        for(it = vec_tmp.begin(); it != vec_tmp.end(); it++)
            if(*it)
                cout<<"*";
            else
                cout<<" ";
        cout << endl;
    }

}

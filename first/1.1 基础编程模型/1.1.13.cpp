//
// Created by crd57 on 2018/11/25.
//

#include <iostream>
#include <vector>
using namespace std;

void transform(vector <vector<int>> vec);

int main() {
    vector<vector<int>> vec;

    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);

    vector<int> b;
    b.push_back(4);
    b.push_back(5);
    b.push_back(6);

    vec.push_back(a);
    vec.push_back(b);
    transform(vec);
}

void transform(vector <vector<int>> vec) {
    vector<vector<int>> array(vec[0].size());
    for (int i = 0; i < array.size(); i++)
        array[i].resize(vec.size());
    for(int i =0;i<vec.size();i++)
    {
        for(int j =0;j<vec[0].size();j++)
        {
            array[j][i] = vec[i][j];
            cout <<vec[i][j];
        }
        cout<<endl;
    }
    cout<<"transformed:"<<endl;
    for(int j =0;j<vec[0].size();j++)
    {
        for(int i =0;i<vec.size();i++)
            cout <<array[j][i];
        cout<<endl;


    }

}


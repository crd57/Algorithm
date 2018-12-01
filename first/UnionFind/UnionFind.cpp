//
// Created by crd57 on 2018/12/1.
//
#include "UnionFind.h"
#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include <time.h>

UF::UF(int N) {
    this->counts = N;
    this->num = N;
    this->id = new int[N];
    for (int i = 0; i < N; i++)
        this->id[i] = i;
}

int UF::count() {
    return this->counts;
}

bool UF::connected(int p, int q) {
    return UF::find(p) == UF::find(q);
}
//quick_find//

//int UF::find(int p) {
//    return this->id[p];
//}
//
//void UF::unions(int p, int q) {
//    int pID = find(p);
//    int qID = find(q);
//    if (pID == qID) return;
//    for (int i = 0; i < this->num; i++)
//        if (this->id[i] == pID)
//            this->id[i] = qID;
//    this->counts--;
//
//}

//quick-union//
int UF::find(int p) {
    while (id[p] != p) p=id[p];
    return p;
}
void UF::unions(int p, int q) {
    int pRootID = find(p);
    int qRootID = find(q);
    if (pRootID == qRootID) return;
    else id[pRootID] =qRootID;
    this->counts --;
}

int main() {
    clock_t t1 = clock();
    std::ifstream fin("E:/c++/Algorithm/algs4-data/algs4-data/largeUF.txt");
    std::string s;
    fin >> s;
    int N = std::stoi(s);
    UF uf(N);
    std::cout << N << std::endl;

    while (!fin.eof()) {
        fin >> s;
        if (fin.fail()) {
            break;
        }
        int p = std::stoi(s);
//        std::cout <<p<<" ";
        fin >> s;
        int q = std::stoi(s);
//        std::cout <<q<<std::endl;
        if (uf.connected(p, q)) continue;
        uf.unions(p, q);
    }
    std::cout << uf.count() << std::endl;
    std::cout << (clock() - t1) * 1.0 / CLOCKS_PER_SEC * 1000 << std::endl;
    return 0;


}
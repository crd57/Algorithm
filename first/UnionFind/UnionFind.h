//
// Created by crd57 on 2018/12/1.
//

#ifndef ALGORITHM_UNIONFIND_H
#define ALGORITHM_UNIONFIND_H
#define CLOCKS_PER_SEC  ((clock_t)1000)

class UF
{
public:
    UF(int N); //以整数标识（0到N——1）初始化N个触电
    void unions(int p,int q); //在P和Q之间添加一条连接
    int find(int p); // p(0到N-1）所在的分量的标识符
    bool connected(int p,int q); //如果p和q存在与同一个分量中则返回true
    int count(); // 连通分量的数量
private:
    int counts;
    int* id;
    int num;


};

#endif //ALGORITHM_UNIONFIND_H

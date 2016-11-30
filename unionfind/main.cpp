#include <iostream>
using namespace std;
int id[100];
int findpa(int p){
    int num = 0;
    while (id[p] != p){
        p = id[p];
        num++;
    }
    return p,num;
}
bool conntected(int p, int q){
    return findpa(p)==findpa(q);
}
void quickun(int p, int q) {
    int pfa,plen = findpa(p);
    int qfa,qlen= findpa(q);
    id[qfa] = pfa;
}
void un(int p, int q){
    if (p != q){
        id[q] = id[p];
    }
}
int main() {
    for (int i = 1; i< sizeof(id)/sizeof(int);i++)
        id[i] = i;
    id[1] =2;
    id[4] =5;
    id[5] =1;
    cout<<findpa(5);
    cout<<conntected(5,2);
//    un(5,7);
//    un(7,8);
//    cout<<id[3]<<endl;
//    cout<<id[4]<<endl;
    return 0;
}
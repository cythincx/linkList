#include<iostream>
#include "graph.h"
using namespace std;
int main(){
    cout<<"创建一个图，请输入图中的节点数：";
    int n=0;
    cin>>n;
    graph g(n);
    g.createGraph();
    g.showAdjList();
    g.startSearch();
}

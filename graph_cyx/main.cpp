#include<iostream>
#include "graph.h"
using namespace std;
int main(){
    cout<<"����һ��ͼ��������ͼ�еĽڵ�����";
    int n=0;
    cin>>n;
    graph g(n);
    g.createGraph();
    g.showAdjList();
    g.startSearch();
}

//深度优先遍历图，生成左子女右兄弟的树
#ifndef GNODE_H_INCLUDED
#define GNODE_H_INCLUDED
#include<iostream>
using namespace std;
class gNode{
    friend class graph;
private:
    int data;
    gNode * link;
public:
    gNode(){
        data = NULL;
        link = NULL;
    }
    gNode( int n ){
        data = n;
        link = NULL;
    }

};



#endif // GNODE_H_INCLUDED

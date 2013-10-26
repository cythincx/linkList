#ifndef TNODE_H_INCLUDED
#define TNODE_H_INCLUDED
#include<iostream>
#include "graph.h"
using namespace std;
class tNode{
private:
    int data;
    tNode *lc, *rs;
public:
    tNode(){
        data = NULL;
        lc = NULL;
        rs = NULL;
    }
    tNode( int n ){
        data = n;
        lc = NULL;
        rs = NULL;
    }
};



#endif // TNODE_H_INCLUDED

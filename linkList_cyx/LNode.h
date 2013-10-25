#ifndef LNODE_H_INCLUDED
#define LNODE_H_INCLUDED
#include<iostream>
using namespace std;
class LNode{
    friend class LinkList;
    private:
        int data;
        LNode * next;
    public:
        LNode(){
            next = NULL;
        }
        LNode( int x ){
            data = x;
            next = NULL;
        }

};



#endif // LNODE_H_INCLUDED

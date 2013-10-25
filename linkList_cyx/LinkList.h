#ifndef LINKLIST_H_INCLUDED
#define LINKLIST_H_INCLUDED
#include<iostream>
#include "LNode.h"
using namespace std;
class LinkList{
private:
    LNode *head;
public:
    LinkList(){
        head = new LNode();
    }
    LinkList( LNode * h ){
        head = h;
    }
    ~LinkList(){};
    void createList();
    void output_LinkList();
    void empty_List();
    int List_length();
    int findNode( int x );//x代表数值，y代表位置；
    void insert_x( int x, int y);
    void delete_fisrtx( int y);
};



#endif // LINKLIST_H_INCLUDED

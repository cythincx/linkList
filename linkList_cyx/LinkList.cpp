#include<iostream>
#include "LinkList.h"
using namespace std;

void LinkList::output_LinkList(){
    LNode * pr;
    pr = head;
    if(pr->next==NULL) cout<<"empty List"<<endl;
    while(pr->next!=NULL){
        pr = pr->next;
       cout<<pr->data;
       if(pr->next!=NULL)cout<<"-->";
    }
    cout<<endl;
}

void LinkList::createList(){
    LNode * tail;
    LNode * newNode;
    tail = head;
    while(tail->next!=NULL) tail = tail->next;
    int a;
    cin>>a;
    while(a){
        newNode = new LNode(a);
        tail->next = newNode;
        tail = tail->next;
        //cout<<tail->data;
        cin>>a;
    }
    //delete tail;
    //delete newNode;

}

void LinkList::empty_List(){
    LNode * pr;
    pr = head;
    while(head->next!=NULL){
        pr = head->next;
        head->next = pr->next;
        delete pr;
    }
}

int LinkList::List_length(){
    int a = 0 ;
    LNode * pr;
    pr = head;
    while(pr->next!=NULL){
        pr = pr->next;
        a++;
    }
    return a;
}

int LinkList::findNode( int x ){
    int a = 0 ;
    LNode * pr;
    pr = head;
    while(pr->next!=NULL){
        pr = pr->next;
        if(pr->data==x) return a+1;
        a++;
    }
    if(a==List_length()) a=0;
    return a;

}

void LinkList::insert_x( int x, int y){
    int length = List_length();
    if(y>length||y<=0) return;
    LNode *newNode, *pre;
    pre = head;
    newNode = new LNode(x);
    for( int i = 1 ; i <  y ; i++ ){
        pre = pre->next;
    }
    newNode->next = pre->next;
    pre->next = newNode;
}

void LinkList::delete_fisrtx( int y){
    int length = List_length();
    if(y>length||y<=0) return;
    LNode *pre, *pr;
    pre = head;
    for( int i = 1 ; i <  y ; i++ ){
        pre = pre->next;
    }
    pr = pre->next;
    pre->next = pr->next;
    delete pr;
}



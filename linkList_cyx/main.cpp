#include<iostream>
#include "LNode.h"
#include "LinkList.h"
using namespace std;

int main(){
    LinkList ll;
    cout<<"create a list now"<<endl;
    ll.createList();
    cout<<"length"<<ll.List_length()<<endl;
    ll.output_LinkList();
    int x;
    int y;
    /*cout<<"find x, input x now"<<endl;
    if(cin>>x){
        cout<<ll.findNode(x)<<endl;
    }
    cout<<"insert x, input x and y now"<<endl;
    cin>>x;
    cin>>y;
    ll.insert_x(x,y);
    ll.output_LinkList();*/
    cout<<"delete y, input y now"<<endl;
    cin>>y;
    ll.delete_fisrtx(y);
    ll.output_LinkList();

}

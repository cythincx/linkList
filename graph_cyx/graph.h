#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED
#include<iostream>
#include "gNode.h"
using namespace std;
class graph{
private:
    gNode * gNodeArr;
    int num;
    int * visit;
public:
    graph(){
        num = 0;
        gNodeArr = NULL;
    }

    graph( int n ){
        num = n;
        gNodeArr = new gNode[num+1];
        visit = new int[num+1];
        //gNode * gpr;
        for( int i = 1 ; i <= num ; i++ ){
            gNodeArr[i].data = i;
        }
        for( int i = 0 ; i <= num ; i++ ){
            visit[i]=0;
        }

    }

    ~graph(){}

    void createGraph(){
        //gNodeArr = new gNode[num+1];
        gNode * gpr;
        for( int i = 1 ; i <= num ; i++ ){
            gpr = &gNodeArr[i];
            cout<<i<<":";
            int a ;
            cin>>a;
            while(a){
                gpr->link = new gNode(a);
                gpr = gpr->link;
                cin>>a;
            }
        }
    }


    void showAdjList(){//展示图的邻接表
        gNode * gpr;
        for( int i = 1 ; i <= num ; i++ ){
            gpr = &gNodeArr[i];
            cout<<gpr->data;
            if(gpr->link!=NULL) cout<<"-->";
            while(gpr->link!=NULL){
                gpr = gpr->link;
                cout<<gpr->data;
                if(gpr->link!=NULL) cout<<"-->";
            }
            cout<<endl;
        }
    }

    void startSearch(){
        //int visit[num+1];
        //for( int i = 0 ; i <= num ; i++ ) visit[i] = 0;
        gNode * gpr;
        for( int i = 1 ; i <= num ; i++ ){
            gpr = &gNodeArr[i];
            searchGraph(gpr);
        }

    }

    void searchGraph(gNode * gpr){
        //gNode * gpr;
        //for( int i = 1 ; i <= num ; i++ ){
            //gpr = &gNodeArr[i];
           /* if(visit[gpr->data]==0){
                cout<<gpr->data<<" ";
                visit[gpr->data]=1;
            }
            gNode * p;
            while(gpr->link!=NULL){
                //p = &gNodeArr[gpr->link->data];
                //if(visit[p->data]==0)
                //while(p->link!=NULL){
                 //   p = p->link;
                //    if(visit[p->data]==0) searchGraph(&gNodeArr[p->data]);
               // }
                searchGraph(&gNodeArr[gpr->link->data]);
                gpr = gpr->link;
                if(visit[gpr->data]==0) searchGraph(gpr);


            }*/
            if(visit[gpr->data]==0){
                cout<<gpr->data<<" ";
                visit[gpr->data]=1;
            }
            while(gpr->link!=NULL){
                    gpr = gpr->link;
                    if(visit[gpr->data]==0)
                    searchGraph(&gNodeArr[gpr->data]);
                    searchGraph(gpr);
            }

        //}
    }

    bool ifSearchCompleted( int visit[]){
        for( int i = 0 ; i <= num ; i++ ){
            if(visit[i]==0) return false;
        }
        return true;
    }

};



#endif // GRAPH_H_INCLUDED

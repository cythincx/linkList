#include<iostream>
using namespace std;
void exchange( int &a, int &b){
    int c = a ;
     a = b;
     b = c;
}

void beforeSort( int a[] ){
    //cout<<"before sort:";
    for( int i = 0 ; i < 10 ; i++ ){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void maopao( int a[]){
    for( int i = 9 ; i > 0 ; i-- ){
        for( int j = 9 ; j > 9-i ; j-- ){
            if(a[j]<a[j-1]) exchange(a[j], a[j-1]);
        }
    }
}

int main(){
    int a[10];
    cout<<"input:";
    int i = 0 ;
    while(i<10){
        cin>>a[i];
        i++;
    }
    cout<<"before";
    beforeSort(a);
    maopao(a);
    cout<<"after";
    beforeSort(a);
}

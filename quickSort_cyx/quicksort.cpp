#include<iostream>
#include<cstdlib>
using namespace std;

void quickSort(int a[], int first, int last){
    if(first>=last) return;
    int i, j;
    i = first;
    j = last;
    int piovate = a[first];
    while(i<j){
        //int piovate = a[first];
        while(i<j&&a[j]>piovate) j--;
        a[i] = a[j];
        i++;
        while(i<j&&a[i]<piovate) i++;
        a[j] = a[i];
        j--;
    }
    a[i] = piovate;
    quickSort(a, first, i-1 );
    quickSort(a, i+1, last);
}

int main(){
    int a[10];
    for( int i = 0 ; i < 10 ; i++ ){
        a[i]=rand()%100;
        //cin>>a[i];
    }
    cout<<"before sort: ";
    for( int i = 0 ; i < 10 ; i++ ){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    quickSort(a, 0 , 9);
    cout<<"after sort: ";
    for( int i = 0 ; i < 10 ; i++ ){
        cout<<a[i]<<" ";
    }
}

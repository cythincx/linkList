#ifndef SEQSTACK_H_INCLUDED
#define SEQSTACK_H_INCLUDED
#include<iostream>
#define MAXSIZE 0xFFFF
using namespace std;

template<class T>

class seqStack{
private:
    int top;
    T * stacka;
    int maxsize;
public:
    seqStack();
    seqStack(int theSize);
    seqStack(const T stackb[], int theSize);
    virtual ~seqStack(){
        delete [] stacka;
    }
    void Push(const T & push);
    T Pop();
    T getPop();
    int Empty()const{
        return top==-1;
    }
    int Full()const{
        return top==maxsize-1;
    }
};

template <class T>
seqStack<T>::seqStack():top(-1),maxsize(MAXSIZE){
    stacka = new T[maxsize];
    if(stacka==NULL){
        cout<<"¿Õ¼ä·ÖÅä´íÎó"<<endl;
    }
}

template <class T>
seqStack<T>::seqStack(int theSize):top(-1),maxsize(theSize){
    stacka = new T[maxsize];
    if(stacka==NULL) cout<<"error"<<endl;
}

template <class T>
seqStack<T>::seqStack(const T data[], int theSize):top(-1),maxsize(theSize){
    stacka = new T[maxsize];
    if(stacka==NULL) cout<<"error"<<endl;
    for( int i = 0 ; i < maxsize ; i++ ) stacka[i] = data[i];
    top+=maxsize;
}

template <class T>
void seqStack<T>::Push(const T & push){
    if(Full()){
        cout<<"error"<<endl;
        return;
    }
    top++;
    stacka[top]=push;
}

template <class T>
T seqStack<T>::Pop(){
    if(Empty()){
        cout<<"error"<<endl;
        return 0;
    }
    top--;
    return stacka[top+1];
}

template <class T>
T seqStack<T>::getPop(){
    if(Empty()){
        cout<<"error"<<endl;
        return;
    }
    return stacka[top];
}
#endif // SEQSTACK_H_INCLUDED

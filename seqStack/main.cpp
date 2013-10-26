#include <iostream>
#include "seqStack.h"
using namespace std;
int main(){
    char data[11]={'c','h','e','n','g','y','u','x','i','n','g'};
    seqStack<char> stack(data,11);
    while(!stack.Empty()){
    cout<<stack.Pop()<<" ";
    }
    cout<<endl;
    return 0;
}

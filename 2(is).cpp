#include <iostream>
using namespace std;

#define N 100
struct stackk{
int S[N];
int top;
};
void createstack(stackk *mystack);
bool isempty(stackk* mystack);
void push(stackk *mystack,int newitem);//eleman eklemek için
int pop(stackk *mystack);//en üstteki elemanı çıkarır
int top(stackk *mystack);//en üstteki elemanı yazdırır

int main() {
    stackk mystack;
    createstack(&mystack);
    if(isempty(&mystack)){
        cout<<"stack bos;";
    }
    push(&mystack,49);
    push(&mystack,23);
    cout << "Stack'in tepesindeki eleman: " << top(&mystack) << endl;

    push(&mystack, 44);
    push(&mystack, 22);
     cout << "Stack'in tepesindeki eleman: " << top(&mystack) << endl;

    // Stack'ten elemanları çıkaralım
    cout << "Pop: " << pop(&mystack) << endl;
    cout << "Pop: " << pop(&mystack) << endl;
    cout << "Pop: " << pop(&mystack) << endl;
    cout << "Pop: " << pop(&mystack) << endl;



    return 0;
}
int top(stackk *mystack){
     if (isempty(mystack)) {
        cout << "Stack underflow. Eleman yok!\n";
        return -1;
    }

return mystack->S[mystack->top];

}
int pop(stackk *mystack){
     if (isempty(mystack)) {
        cout << "Stack underflow. Eleman yok!\n";
        return -1;  // Hatalı durum için özel bir değer döndürüyoruz
}
int i=mystack->top;
    mystack->top--;
    return mystack->S[i];
}
void push(stackk *mystack,int newitem){
if(mystack->top==N-1){
    cout<<"owerflow";
    return ;
}
mystack->top++;
mystack->S[mystack->top]=newitem;

}

void createstack(stackk *mystack){
mystack->top=-1;

}

bool isempty(stackk *mystack){
return mystack->top==-1;
}

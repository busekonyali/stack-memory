#include <iostream>
using namespace std;

#define N 100
struct stacknode{
stacknode  *next;
int item;
};

struct stackk{
stacknode *top;
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

return mystack->top->item;

}
int pop(stackk *mystack){
    stacknode *tmp=NULL;
    int item=-1;

     if (isempty(mystack)) {
        cout << "Stack underflow. Eleman yok!\n";
        return -1;  // Hatalı durum için özel bir değer döndürüyoruz
}
tmp=mystack->top;
    mystack->top=mystack->top->next;
    item=tmp->item;
    delete tmp;
    return item;

}
void push(stackk *mystack,int newitem){
    stacknode *x=new stacknode;
    x->item =newitem;
    x->next=mystack->top;
    mystack->top=x;


}

void createstack(stackk *mystack){
mystack->top=NULL;

}

bool isempty(stackk *mystack){
return mystack->top==NULL;
}

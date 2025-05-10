#include <iostream>
using namespace std;

#define N 100

struct Stack {
    int S[N];
    int top;
};


void CreateStack(Stack *stack) {//Stack'e yeni eleman eklemek
    stack->top= - 1;
    }


bool isEmpty(Stack *stack) {
    return  stack->top== - 1;
}

void push(Stack *stack,int newitem) {// Stack’in tepesindeki elemanı ekrana yazdırmak
    if (stack->top== N- 1) {
        cout << "Stack overflow.\n";
        return;
    }
   stack->top++;
   stack->S[stack->top]=newitem;
}

int pop(Stack *stack) {
    if (isEmpty(stack)) {
        cout << "Stack underflow.\n";
        return -1;  // Hatalı durum için özel değer
    }
    int idx = stack->top;
    stack->top--;
    return stack->S[idx];
}

// Stack'in tepesindeki elemanı döndürür
int top(Stack *stack) {
    if (isEmpty(stack)) {
        cout << "Stack underflow.\n";
        return -1;
    }
    return stack->S[stack->top];
}

int main() {
    Stack s;
    CreateStack(&s);

    if (isEmpty(&s)) {
        cout << "Stack boş.\n";
    }

    push(&s, 49);
    push(&s, 23);

    cout << "Stack'in tepesindeki eleman: " << top(&s) << endl;

    push(&s, 44);
    push(&s, 22);

    cout << "Pop: " << pop(&s) << endl;
    cout << "Pop: " << pop(&s) << endl;
    cout << "Pop: " << pop(&s) << endl;
    cout << "Pop: " << pop(&s) << endl;

    return 0;
}

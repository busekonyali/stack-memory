#include <iostream>
using namespace std;

#define MAX 100

int stack[MAX];
int top = -1;// stack’in başlangıçta boş olduğunu gösterir

void push(int value) {//Stack'e yeni eleman eklemek
    if (top >= MAX - 1) {
        cout << "Stack overflow! Eleman eklenemedi.\n";
        return;
    }
    top++;
    stack[top] = value;
}

void pop() {//En üstteki elemanı çıkarmak
    if (top == -1) {
        cout << "Stack underflow! Eleman yok.\n";
        return;
    }
    top--;
}

void peek() {// Stack’in tepesindeki elemanı ekrana yazdırmak
    if (top == -1) {
        cout << "Stack bos.\n";
        return;
    }
    cout << "En ustteki eleman: " << stack[top] << "\n";
}

void display() {// Tüm stack içeriğini ekrana yazmak
    if (top == -1) {
        cout << "Stack bos.\n";
        return;
    }
    cout << "Stack ustten alta):\n";
    for (int i = top; i >= 0; i--) {
        cout << stack[i] << "\n";
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    display();    // 30, 20, 10
    peek();       // 30
    pop();
    display();    // 20, 10
    peek();       // 20
    return 0;
}

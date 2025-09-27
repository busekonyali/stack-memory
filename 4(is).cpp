#include <iostream>
using namespace std;
int a;
void P1(){
int b;
a=a-1;
cout<<"P1 geldi:a= "<<a<<endl;
if(a<0){
    P1();
 }
}

void P2(){
a=3;
cout<<"P2 geldi: a= "<<a<<endl;
P1();
}



int main() {

a=2;
cout<<"main start a= "<<a<<endl;
P1();
P2();



    return 0;
}

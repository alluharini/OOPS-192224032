#include <iostream>
using namespace std;
void display(double var) {
    cout<<"Double number:"<<var<<endl;
}
void display(int var) {
    cout<<"Integer number:"<<var<<endl;
}
int main(){
    int a=5;
    double b=5.5;

    display(a);
    display(b);
    
    return 0;
}

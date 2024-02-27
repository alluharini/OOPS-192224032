#include <iostream>
using namespace std;
int main() {
    int dividend,divisor,result;

    cout<<"Enter dividend:";
    cin>>dividend;

    cout<<"Enter divisor:";
    cin>>divisor;

    try {
        if (divisor==0) {
            throw "Division by zero error";
        }
        result = dividend / divisor;
        cout<<"Result of division:"<< result;
    } catch (const char* message) {
        cerr << "Error: " << message << endl;
    }

    return 0;
}


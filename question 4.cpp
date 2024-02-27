#include <iostream>
using namespace std;
#define M 4
#define N 5
int main(){  
    int*a=new int[M*N];
    for(int i=0;i<M;i++)
    {
        for(int j=0;j<N;j++){
            *(a+i*N+j)= rand( )%100;
        }
    }
    for(int i=0;i<M;i++)
    {
        for(int j=0;j<N;j++){
            cout<<*(a+i*N+j)<< " ";      
        }
        cout<<endl;
    }
    delete[] a;
 
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
int singleElement(int a[], int n){
    int single,flag=0;
    for(int i=0; i<n; i++){
        flag = 0;
        single = a[i];
        for(int j=0; j<n; j++){
            if((a[j]==single)&&(j!=i)){
                flag=1;
            }    
        }
        if(flag==0)
            return single;
    }
}
int main() {
  int a[] = {1, 3, 5, 5, 2, 1, 3};
  int n = sizeof(a)/sizeof(a[0]);
  cout<<singleElement(a, n);
  return 0;
}

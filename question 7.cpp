#include <iostream>
using namespace std;
int binarySearch(int arr[],int size,int target){
    int left=0;
    int right=size-1;

    while (left<=right){
        int mid=left+(right-left)/2;
        
        if (arr[mid]==target)
            return mid;

        if (arr[mid]<target)
            left = mid + 1;

        else
            right=mid-1;
    }
    return -1;
}
int main() {
    int arr[]={1, 3, 5, 7, 9, 11, 13, 15, 17};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target = 13;

    int index = binarySearch(arr, size, target);
    if (index!=-1)
        cout <<"Element found at index:"<< index;
    else
        cout <<"Element not found in the array";

    return 0;
}


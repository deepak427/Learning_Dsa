#include <iostream>

using namespace std;

int binarysearch(int arr[],int low,int high,int target){
    int mid = (low+high)/2;
    if(arr[mid]==target){
            return mid;
    }
 
    else if(arr[mid]>target){
        return binarysearch(arr,low,mid,target);
    }
    else{
        return binarysearch(arr,mid+1,high,target);
    }
}

int main()
{
    cout<<"Hello World";
    int arry[]={0,1,2,3,4};
    int index = binarysearch(arry,0,4,2);
    cout<<"index is: "<<index;

    return 0;
}

#include <iostream>

using namespace std;

int binarysearch(int arry[],int low,int high,int target){
    int mid=(low+high)/2;
    
    if(arry[mid]==target){
        return mid;
    }
    
    if(target>arry[mid]){
        return binarysearch(arry,mid+1,high,target);
    }
    
    if(target<arry[mid]){
        return binarysearch(arry,low,mid-1,target);
    }
    
}

int main()
{
    int arry[]={0,1,2,3,4};
    int index = binarysearch(arry,0,4,4);
    cout<<"index is: "<<index;

    return 0;
}

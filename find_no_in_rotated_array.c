#include <stdio.h>

// Function to find an element x in a circularly sorted array
int arraySearch(int array1[], int low,int high,int x)
{
	//write your code here

    if (low>high){
        return -1;
    }
    
	int mid = (low +high)/2;
	
	if(array1[mid]==x){
	    return mid;
	}

    if (array1[mid]>=array1[low]){
        if((x>=array1[low])&&(array1[mid]>x)){
            return arraySearch(array1,low,mid-1,x);
        }
        else
            return arraySearch(array1,mid+1,high,x);
    }
    else{
        if ((x<array1[low])&&(array1[mid]<x))
        {
            return arraySearch(array1,mid+1,high,x);
        }
        else
            return arraySearch(array1,low,mid-1,x);       
    }   
	
	return -1;
}

int main(void)
{
	int array1[] = {9, 10, 2, 5, 6, 8};
	int array2[] = {30, 40, 50, 10, 20};
	int target = 5;
	int target_2 = 3;

	int n = sizeof(array1)/sizeof(array1[0]);
	int index = arraySearch(array1,0,n-1, target);
	int actual = arraySearch(array2,0,4,10);

	if (index != -1)
		printf("Element found at index %d", actual);
	else
		printf("Element not found in the array");

	return 0;
}
/* Try more Inputs
case 1: 
actual = arraySearch([3, 4, 5, 6, 7, 8, 9, 10, 1, 2],9,1)
expected = 8

case2: 
 actual = arraySearch([5, 6, 7, 8, 9, 10, 1, 2, 3],8,3)
 expected = 8
 
case3: 
actual = arraySearch([5, 6, 7, 8, 9, 10, 1, 2, 3],8,28)
expected = -1

case4:
actual = arraySearch([30, 40, 50, 10, 20],4,10)
expected = 3

*/
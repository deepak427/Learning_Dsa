#include <iostream> 
using namespace std; 
void swap(int *a,int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}
  
void moveZeroToTheEnd(int array1[], int n) 
{ 
   //Write Your Code Here 
   //Try YourSelf
   int start=0;
   int value=1;
   while((start+value)<n){
       if(array1[start]==0){
           swap(&array1[start],&array1[start+value]);
           value++;
       }
       else
        {
            start++;
            value=1;
        }
   }
   
} 
  
int main() 
{ 
    int array1[] = {0, 1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9}; 
    int n = sizeof(array1) / sizeof(array1[0]); 
    moveZeroToTheEnd(array1, n); 
    cout << "Result is :\n"; 
    for (int i = 0; i < n; i++) 
        cout << array1[i] << " "; 
    return 0; 
} 

/* Try more Inputs
case1:
 actual = MoveZeroToEnd([1,3,0,0,4,0,9],7)
 expected = [1,3,4,9,0,0,0]
 
case2:
actual = MoveZeroToEnd([0,1,0,3,12],5)
expected = [1,3,12,0,0]

case3:
actual = MoveZeroToEnd([0, 1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9],13)
expected = [1,9,8,4,2,7,6,9,0,0,0,0,0]

*/
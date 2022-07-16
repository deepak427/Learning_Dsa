#include<bits/stdc++.h> 
using namespace std; 
  
void swap(int *a, int *b); 
  
void sort012(int a[], int arr_size) 
{ 
     //Practise Yourself : Write your code Here
     int s0 = 0;
     int s2 = arr_size-1;
     int curr = 0;
     
     while(curr<=s2){
         if(a[curr]==0){
             swap(&a[curr++],&a[s0++]);
         }
         else if(a[curr]==2){
             swap(&a[curr],&a[s2--]);
         }
        else{
             curr++;
         }
         
     }
} 
  
void swap(int *a, int *b) 
{ 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
} 

void segregateArray(int array1[], int arr_size) 
{ 
    int i; 
    for (i = 0; i < arr_size; i++) 
        cout << array1[i] << " "; 
 
} 

int main() 
{ 
    int array1[] = {2, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1}; 
    int actual[] = {2,0,1};
    int arr_size = sizeof(actual)/sizeof(actual[0]); 
    int i; 
  
    sort012(actual, arr_size); 
  
    cout << "segregated array "; 
    segregateArray(actual, arr_size);  
    return 0; 
} 


/* Try more Inputs
case 1: 
actual = Sort012([0, 1, 2, 0, 1, 2],5)
expected = [0, 0, 1, 1, 2, 2]

case2: 
 actual = Sort012([0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1],11)
 expected = [0,0,0,0,0,1,1,1,1,1,2,2]
 
case3: 
actual = Sort012([2,0,1}],3)
expected = [0,1,2]
*/
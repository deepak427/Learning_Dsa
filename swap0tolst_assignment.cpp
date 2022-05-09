#include <iostream> 
using namespace std; 
  
void moveZeroToTheEnd(int array1[], int n) 
{ 
   int cab=0;
   int pss;
   while(cab!=(n-1)){
       pss=cab+1;
        if(array1[cab]==0){
            swap(array1[cab],array1[pss]);
        }
        else{
            cab++;
   }
   }
} 
  
int main() 
{ 
    int array1[] = {1,3,0,0,4,0,9}; 
    int n = sizeof(array1) / sizeof(array1[0]); 
    moveZeroToTheEnd(array1, n); 
    cout << "Result is :\n"; 
    for (int i = 0; i < n; i++) 
        cout << array1[i] << " "; 
    return 0; 
} 

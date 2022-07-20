#include <bits/stdc++.h> 
using namespace std; 
  
int max(int x, int y) 
{ 
    return (x > y) ? x : y; 
} 
  
// Returns minimum number of jumps 
// to reach array1[n-1] from array1[0] 
int minJumpToReachEnd(int array1[], int n) 
{ 
  
    // The number of jumps needed to 
    // reach the starting index is 0 
    if (n <= 1) 
        return 0; 
  
    // Return -1 if not possible to jump 
    if (array1[0] == 0) 
        return -1; 
  
    // initialization 
    // stores all time the maximum 
    // reachable index in the array. 
    int maxStepReach = array1[0]; 
  
    // stores the number of steps 
    // we can still take 
    int step = array1[0]; 
  
    // stores the number of jumps 
    // necessary to reach that maximal 
    // reachable position. 
    int jump = 1; 
  
    // Start traversing array 
    int i = 1; 
    for (i = 1; i < n; i++) { 
        // Check if we have reached the end of the array 
        if (i == n - 1) 
            return jump; 
  
        // updating maxStepReach 
        maxStepReach = max(maxStepReach, i + array1[i]); 
  
        // we use a step to get to the current index 
        step--; 
  
        // If no further steps left 
        if (step == 0) { 
            // we must have used a jump 
            jump++; 
  
            // Check if the current index/position or lesser index 
            // is the maximum reach point from the previous indexes 
            if (i >= maxStepReach) 
                return -1; 
  
            // re-initialize the steps to the amount 
            // of steps to reach maxStepReach from position i. 
            step = maxStepReach - i; 
        } 
    } 
  
    return -1; 
} 
  

int main() 
{ 
    int array1[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }; 
    int size = sizeof(array1) / sizeof(int); 
  
    cout <<  
minJumpToReachEnd(array1, size); 
    return 0; 
} 

/* Try more Inputs
case 1: 
actual = minJumpToReachEnd([1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9],11)
expected = 3

case2: 
 actual = minJumpToReachEnd([1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],10)
 expected = 10
 
case3: 
actual = minJumpToReachEnd([3,2,1,0,4],5)
expected = -1
Jump not possible
*/
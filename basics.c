#include <stdio.h> // for the predefined function declarations(printf)
#include <stdlib.h> // for the predefined function declarations(main)

int sum(int arr[], int size) { 
 // Function declaration and definition (Has a file scope aka global)
    /* Array Decay to Pointer
  When an array is passed as a function argument, it decays into a pointer to its first element.
  int arr[] inside sum(int arr[], int size) is actually the same as int *arr. */
    int sum = 0;
    for (int i=0; i<size; i++){ 
        // Accessing array elements using array name and index
        // arr[j] is equivalent to *(arr+j)
        // &arr[j] is equivalent to arr+j
        // this (i) is only local to this sum funtion
        printf("The %d element in A is %d\n", i+1, arr[i]);
        sum += arr[i];
    }
    return sum; 
}

int main(){
    int A[4] = {2,4,5,6};
    for(int i=0; i<4; i++){
        printf("The %d element in A is %d\n", i+1, A[i]);
        }
    printf("The sum of the elements is %d\n", sum(A, 4));
return 0;
}
#include <iostream>
using namespace std;

int sum(int arr[], int size){
    int sum = 0;
    for (int i=0; i<size; i++){
        sum += arr[i];
    }
return sum;
}

int main(){
    int A[4] = {2,4,5,6};
    for(int i=0; i<4; i++){
        cout << "The " << i + 1 << "th element is: " << A[i] << endl;

    }
    cout << "The sum of the elements is: " << sum(A, 4) << endl;
    return 0;
}
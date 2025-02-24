#include <iostream>
using namespace std;

// Define the addition function
int add(int x, int y) {
    return x + y;
}
int main() {
    // Create a pointer to the addition function
    int (*addPtr)(int a, int b) = add;

    // Call the addition function using the pointer
    cout << addPtr(3, 5) << endl;
}
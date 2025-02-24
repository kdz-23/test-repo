#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int sum = 0;
    cout << "argc = " << argc << endl;
    cout << "Content of argv array" << endl;

    if (argc > 1 ){
        for (int i=1; i<argc; i++){
            cout << "argv[" << i << "] = "  << argv[i] << endl;
            sum += atoi(argv[i]);
        }
    } else {
        cout << "No command line arguments provided." << endl;
    }
    cout << "The sum is : " << sum << endl;
}
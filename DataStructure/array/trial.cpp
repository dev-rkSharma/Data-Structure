#include<iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Print the original array
    for(int i = 0; i < n; ++i){
        cout << arr[i] << " ";
    }
    return 0;
}
//WAP to copy contents of one array into another in the reverse order
#include<iostream>
using namespace std;
int main() {
    int arr[5] = {7, 2, 3, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int rev[5];
    for(int i = 0; i < n; i++) {
        rev[i] = arr[n - 1 - i];   // copy in reverse
    }
    cout << "Reversed array: ";
    for(int i = 0; i < n; i++) {
        cout << rev[i] << " ";
    }
    return 0;
}

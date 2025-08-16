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

//WAP for an array arr contains n elements then check if the given array is palindrome or not
#include<iostream>
using namespace std;
int main() {
    int arr[5] = {1, 2, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    bool isPalindrome = true;
    for(int i = 0; i < n/2; i++) {
        if(arr[i] != arr[n-1-i]) {
            isPalindrome = false;
            break;
        }
    }
    if(isPalindrome) cout << "Palindrome";
    else cout << "Not Palindrome";
    return 0;
}

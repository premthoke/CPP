//Arrays

//basic declaration and printing of array
#include <iostream>
using namespace std;
int main() {
    int arr[4] = {7, 3, 9, 2};
    for (int i = 0; i < 4; i++) {   // use < instead of <=
        cout << arr[i] << endl;
    }
    return 0;
}


//max number in array
#include<iostream>
using namespace std;
int main() {
    int arr[5] = {7, 3, 9, 2, 11};
    int max = arr[0];
    for(int i = 1; i < 5; i++) {
        if(arr[i] > max) max = arr[i];
    }
    cout << "max = " << max;
    return 0;
}

//min
#include<iostream>
using namespace std;
int main() {
    int arr[5] = {7, 3, 9, 2, 11};
    int min = arr[0];
    for(int i = 1; i < 5; i++) {
        if(arr[i] < min) min = arr[i];
    }
    cout << "min = " << min;
    return 0;
}

//
#include<iostream>
using namespace std;
int main() {
    int arr[6] = {5, 8, 3, 7, 2, 9};
    for(int i = 0; i < 6; i++) {
        if(i % 2 == 0) arr[i] = arr[i] + 10;   // even index
        else arr[i] = arr[i] * 2;              // odd index
    }
    for(int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

//count the number of elements in given array greater than a given number x
#include<iostream>
using namespace std;
int main() {
    int arr[5] = {7, 2, 3, 6, 8};
    int x, count = 0;
    cout << "enter x: ";
    cin >> x;
    for(int i = 0; i < 5; i++) {
        if(arr[i] > x) count++;
    }
    cout << "count = " << count;
    return 0;
}

//find the second largest element of given array
#include<iostream>
#include<climits>   // for INT_MIN
using namespace std;
int main() {
    int arr[6] = {12, 7, 25, 18, 25, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int first = INT_MIN, second = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(arr[i] > first) {
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    if(second == INT_MIN) cout << "No second largest element";
    else cout << "second largest = " << second;
    return 0;
}

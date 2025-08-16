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

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

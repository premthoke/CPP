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

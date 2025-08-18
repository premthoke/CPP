// 2D Arrays - it is also called as matrix
// int arr[r][c] = in this r is cows and c is columns

/* 6 7 8 
   9 1 2 */ 
#include <iostream>
using namespace std;
int main() {
    int arr[2][3];
    arr[0][0]=6;
    arr[0][1]=7;
    arr[0][2]=8;
    arr[1][0]=9;
    arr[1][1]=1;
    arr[1][2]=2;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

/* 6 9 
   7 1 
   8 2 */
#include <iostream>
using namespace std;
int main() {
    int arr[2][3];
    arr[0][0]=6;
    arr[0][1]=7;
    arr[0][2]=8;
    arr[1][0]=9;
    arr[1][1]=1;
    arr[1][2]=2;
    for(int j=0;j<3;j++){
        for(int i=0;i<2;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

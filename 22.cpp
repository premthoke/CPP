// WAP to store roll number and marks obtained by 4 students side by side in matrix
#include <iostream>
using namespace std;
int main() {
 int arr[4][2]={{10,35},{15,36},{16,38},{19,40}};
  for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

//WAP to store 10 at every index of 2d matrix with 5 rows and 5 columns
#include <iostream>
using namespace std;
int main() {
int arr[5][5];
  for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            arr[i][j]=10;
        }
    }
     for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

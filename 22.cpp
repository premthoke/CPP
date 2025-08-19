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

//WAP to add two matrices
#include <iostream>
using namespace std;
int main() {
 int arr1[4][2]={{1,2},{3,4},{5,6},{7,8}};
  int arr2[4][2]={{1,2},{3,4},{5,6},{7,8}};
  int arr3[4][2];
   for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
          arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
       for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

//Find the max element in given matrix
#include <iostream>
#include <climits>
using namespace std;
int main() {
 int arr1[4][2]={{1,2},{3,4},{5,6},{7,8}};
 int mx = INT_MIN;
   for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
          mx=max(mx,arr1[i][j]);
        }
    }
       cout<<mx;
    return 0;
}

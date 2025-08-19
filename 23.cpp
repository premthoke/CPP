// Find minimum element in given matix
#include <iostream>
#include <climits>
using namespace std;
int main() {
 int arr1[4][2]={{1,2},{3,4},{5,6},{7,8}};
 int mx = INT_MAX;
   for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
          mx=min(mx,arr1[i][j]);
        }
    }
       cout<<mx;
    return 0;
}

// Find the sum of all elements of in given matrix
#include <iostream>
using namespace std;
int main() {
    int arr1[4][2] = {{1,2},{3,4},{5,6},{7,8}};
    int sum = 0;

    for(int i=0; i<4; i++) {
        for(int j=0; j<2; j++) {
            sum += arr1[i][j];
        }
    }
    cout << "Sum of all elements in the matrix = " << sum << endl;
    return 0;
}

//Find the product of elements in matrix
#include <iostream>
using namespace std;
int main() {
    int arr1[4][2] = {{1,2},{3,4},{5,6},{7,8}};
    long long product = 1;   // use long long to avoid overflow

    for(int i=0; i<4; i++) {
        for(int j=0; j<2; j++) {
            product *= arr1[i][j];
        }
    }
    cout << "Product of all elements in the matrix = " << product << endl;
    return 0;
}

//Given a matrix 'a' pf dimension n x m and 2 coordinates(l1,r1) and (l2,r2). return the sum of rectangle from (l1,r1) to (l2,r2).(even i dont understood this prob)
#include <iostream>
using namespace std;
int main() {
    int n, m;
    cout << "Enter rows and cols: ";
    cin >> n >> m;
    int a[100][100];
    cout << "Enter matrix elements:\n";
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> a[i][j];
        }
    }
    int l1, r1, l2, r2;
    cout << "Enter top-left (l1 r1): ";
    cin >> l1 >> r1;
    cout << "Enter bottom-right (l2 r2): ";
    cin >> l2 >> r2;
    int sum = 0;
    for(int i=l1; i<=l2; i++) {
        for(int j=r1; j<=r2; j++) {
            sum += a[i][j];
        }
    }
    cout << "Sum of rectangle = " << sum << endl;
    return 0;
}

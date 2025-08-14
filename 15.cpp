//Pointers

//variable address
#include <iostream>
using namespace std;
int main() {
    int x=3;
    cout<<&x;
    return 0;
}

//
#include <iostream>
using namespace std;
int main() {
    int x=3;
    int *p=&x;
    cout<<&x<<endl;
    cout<<p<<endl;
    cout<<*p;
    return 0;
}

//
#include <iostream>
using namespace std;
int main() {
    int x=3;
    int *p=&x;
    *p=23;
    cout<<x;
    return 0;
}

//SWAP using pointer
#include <iostream>
using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b= temp;
}
int main() {
    int x=3;
    int y=6;
    cout<<x<<" "<<y<<endl;
    swap(&x,&y);
    cout<<x<<" "<<y<<endl;
    return 0;
}

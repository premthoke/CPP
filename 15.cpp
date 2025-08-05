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

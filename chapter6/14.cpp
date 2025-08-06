//Pointer

//pass by value
#include <iostream>
using namespace std;
void change(int a)
{
    a = 22;
}
int main()
{
    int x = 5;
    change(x);
    cout << x;
    return 0;
}


//swap - pass by reference
#include <iostream>
using namespace std;
void swap(int &x,int &y){
    int temp=x;
    x=y;
    y=temp;
}
int main() {
    int x=12;
    int y=45;
    cout <<x<<" "<<y<<endl;
    swap(x,y);
      cout <<x<<" "<<y<<endl;
    return 0;
}

// pass by pointer
#include <iostream>
using namespace std;
void change(int* a) {
    *a = 22;
}
int main() {
    int x = 5;
    change(&x);
    cout << x;
    return 0;
}

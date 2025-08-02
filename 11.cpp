//Functions

//basic
#include <iostream>
using namespace std;
void funname() {
    cout << "Hello dude!";
}
int main() {
    funname();
    return 0;
}

//Function in Function (return;)
#include <iostream>
using namespace std;
void usa()
{
    cout << "hello usa" << endl;
    return;
}
void india()
{
    cout << "hello india" << endl;
    usa();
}
int main()
{
    cout << "hello world" << endl;
    india();
    return 0;
}

//sum
#include <iostream>
using namespace std;
void sum(int a, int b)
{
    cout << a + b;
}
int main()
{
    sum(3, 5);
}

//return func
#include <iostream>
using namespace std;
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    cout << sum(9, 10);
}

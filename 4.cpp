// Type casting - converting variables from one datatype to another one 
// ASCII - char to num & num to char 
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int x = 98;
    char ch = 'a';
    cout << (char)x;
    cout << (int)ch;
    return 0;
}

//Pre Increment/Decrement 
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int x = 10;
    int y;
    y = ++x;
    cout << x << endl
         << y;
    return 0;
}
//Post Increment/Decrement
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int x = 10;
    int y;
    y = x++;
    cout << x << endl
         << y;
    return 0;
}

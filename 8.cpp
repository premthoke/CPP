//While Loop

//count digits
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number!";
    cin >> n;
    int count;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    cout << "count of digits : " << count;
}

//Sum of digits
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number!";
    cin >> n;
    int sum;
    while (n != 0)
    {
        int ld = n % 10;
        n = n / 10;
        sum += ld;
    }
    cout << sum;
}

//Reverse of digits
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number!";
    cin >> n;
    int r;
    while (n != 0)
    {
        int ld = n % 10;
        r *= 10;
        n /= 10;
        r += ld;
    }
    cout << r;
}

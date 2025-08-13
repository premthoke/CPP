//loops
//for loop

//Table
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number" << endl;
    cin >> n;
    for (int i = 1; i <= 10; i++)
    {
        cout << n * i << endl;
    }
    return 0;
}

//Factor & Highest factor
#include <iostream>
using namespace std;
int main()
{
    int n;
    int hf;
    cout << "enter number!";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            hf = i;
        }
    }
    cout << "Highest Factor : " hf;
}

//Prime Or Composite
#include <iostream>
using namespace std;
int main()
{
    int n;
    bool flag = true;
    cout << "enter number!";
    cin >> n;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = false;
            break;
        }
    }
    if (flag == true)
        cout << "Prime NUmber";
    else
        cout << "composite number:";
}

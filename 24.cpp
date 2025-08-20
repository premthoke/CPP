//String- built in datatype to store multiple character string 

//ex-
#include <iostream>
using namespace std;
int main() {
   string s="prem is bad boy";
   cout<<s;
    return 0;
}

//getline - get multiple character input and display it
#include <iostream>
using namespace std;
int main() {
   string s;
   getline(cin,s);
   cout<<s;
    return 0;
}

//Indexing in string
#include <iostream>
using namespace std;
int main() {
	string s="prem";
	cout<<s<<endl;
	cout<<s[0]<<endl;
	s[0]='l';
	cout<<s[0]<<endl;
	cout<<s<<endl;
	return 0;
}

//BuiltIn string Functions

//length(); - return length of string
#include <iostream>
using namespace std;
int main() {
	string s="prem is good boy";
	int x = s.length();
	cout<<x;
	return 0;
}

//size(); - return size of string
#include <iostream>
using namespace std;
int main() {
	string s="prem is good boy";
	int x = s.size();
	cout<<x;
	return 0;
}

//push_back(); - add char to string
#include <iostream>
using namespace std;
int main() {
	string s="prem";
	cout<<s<<endl;
	s.push_back('a');
	cout<<" "<<s<<endl;
	return 0;
}

//append(); - add new string 
#include <iostream>
using namespace std;
int main() {
	string s="prem";
	cout<<s<<endl;
	s.push_back('a');
	cout<<s<<endl;
	s.append("thoke");
	cout<<s<<endl;
	return 0;
}

//pop_back(); - remove last element of string
#include <iostream>
using namespace std;
int main() {
	string s="prem";
	cout<<s<<endl;
	s.push_back('a');
	cout<<s<<endl;
	s.pop_back();
	cout<<s<<endl;
	return 0;
}

//reverse(s.begin(),s.end()); - reverse a string
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	string s="prem";
	cout<<s<<endl;
	reverse(s.begin(),s.end());
	cout<<s<<endl;
	return 0;
}

//to_string(); - convert number to string
#include <iostream>
using namespace std;
int main() {
	int n = 2;
	cout<<n<<endl;
	string s = to_string(n);
	cout<<s<<endl;
	return 0;
}

//stoi(); - convert string to number
#include <iostream>
using namespace std;
int main() {
    string str = "1234"; 
    int num = stoi(str); 
    cout << "String: " << str << endl;
    cout << "Integer: " << num << endl;
    cout << "Integer + 10: " << num + 10 << endl;
    return 0;
}

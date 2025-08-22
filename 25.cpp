//programs

//WAP to count the vowels in string
#include <iostream>
#include <string>
using namespace std;
int main() {
    string s = "prem is good boy";
    int count;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            count++;
        }
    }
    cout<<count;
    return 0;
}

//input a string and update all even positions in the string to character 'a' and return it.
#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	cout<<"enter the string"<<endl;
	getline(cin,s);
	cout<<s<<endl;
	for(int i=0; i<s.length(); i++) {
		if(i%2) {
			s[i]='a';
		}
	}
	cout<<s<<endl;
	return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Author: Alexander Hernandez\n" << endl;

	cout << "\t Reverse String\n" << endl;

	string str;

	cout << "Enter a word to display in reverse: ";
	cin >> str;

	cout << "word: " << str << "\t num of char: " << str.length() << endl;

	cout << endl;

	for(int i = str.length(); i >= 0; i--)
	{
		cout << str[i];
	}
	cout << endl;


	return 0;
}
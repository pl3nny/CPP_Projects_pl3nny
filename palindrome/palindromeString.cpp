#include <iostream>
#include <string>

using namespace std;

bool isPalin(string str);

int main()
{
	string input;

	cout << "Enter word to check if palindrome: ";
	cin >> input;
	cout << endl;

	cout << "word: " << input << endl;
	cout << endl;

	if(isPalin(input))
	{
		cout << input << " is a palindrome" << endl;
	}
	else
	{
		cout << input << " is NOT a palindrome" << endl;
	}

	return 0;
}

bool isPalin(string str)
{
	string temp = str;
	int count = 0;

	for(int i = str.length() - 1; i >= 0; i--)
	{
		temp[count] = str[i];
		count++;
	}

	cout << temp << "\t" << str << endl;

	if(temp == str)
		return true;

	return false;
}
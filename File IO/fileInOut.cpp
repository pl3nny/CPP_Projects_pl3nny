#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void menu()
{
	cout << "1.\tWrite to file\n"
	<< "2.\tRead from file\n"
	<< "3.\tEXIT\n" << endl;
	cout << "--> ";
}

int main(int argc, char* argv[])
{
	string fileName, line;
	int selection;
	menu();
	cin >> selection;

	while(selection != 3)
	{
		switch(selection)
		{
			case 1: // write to file 
			{
				cout << "1.\t write to file" << endl;
				cout << "Enter file name: ";
				cin >> fileName;

				ofstream fout (fileName);

				if (fout.is_open())
				{
					cout << "opening file... " << endl;
					cout << "writing to file..." << endl;
					fout << "test line 1\n";
					fout << "test line2\n";
				}
				else
				{
					cout << "file could not be created..." << endl;
				}

				fout.close();
				cout << "closing file..." << endl;
				cout << endl;
				break;
			}

			case 2: // read from file
			{
				cout << "2.\t Read from file" << endl;
				cout << "Enter file name: ";
				cin >> fileName;				
				ifstream fin (fileName);
				if (fin.is_open())
				{
					cout << "opening file..." << endl;
					cout << "reading from file" << endl;
					cout << "*********************\n" << endl;
					while(getline(fin, line))
					{
						cout << line << endl;
					}
					cout << "\n*********************" << endl;
					cout << "finished rading from file " << fileName << endl;
					cout << "now closing file..." << endl;
					fin.close();
				}
				else
				{
					cout << "could not open file " << fileName << endl;
				}
				cout << endl;
				break;
			}
		}

		menu();
		cin >> selection;

	}

	cout << "program terminated... " << endl;

	return 0;
}
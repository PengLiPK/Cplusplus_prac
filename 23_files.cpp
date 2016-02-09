// Input/output with files
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ofstream myfile;
	myfile.open("test.txt");
	myfile << "First example.\n";
	myfile.close();

	//
	ofstream myf2;
	myf2.open("test2.txt", ios::in | ios:: out | ios::app | ios::binary);
	myf2 << "Second example.\n";
	myf2.close();

	//
	ofstream myf3("test3.txt");
	if(myf3.is_open())
	{
		myf3 << "This is a line.\n";
		myf3 << "This is another line.\n";
		myf3.close();
	}
	else cout << "Unable to open file.\n";

	// reading a text file
	string line;
	ifstream myf4("test3.txt");
	if(myf4.is_open())
	{
		while ( getline(myf4,line) )
		{
			cout << line << "\n";
		}
		myf4.close();
	}
	else cout << "Unable to open file.\n";


	// write binary file
	const float f=3.1415926;
	ofstream myf6("test4.bin", ios::binary);
	if(myf6.is_open())
	{
		myf6.write((char*) &f, sizeof(float));
	}
	myf6.close();


	// obtaining file size
	streampos begin, end;
	ifstream myf5("test4.bin", ios::binary);
	begin = myf5.tellg();
	myf5.seekg(0, ios::end);
	end = myf5.tellg();
	myf5.close();
	cout << "size is: " << (end-begin) << " bytes.\n";


	//
	streampos size;
	float ff;

	ifstream file("test4.bin", ios:: in|ios::binary);
	if(file.is_open())
	{
		size = sizeof(float);
		file.read((char*) &ff, size);
		file.close();
	
		cout << "The content of file is: " << ff << ".\n";
	}
	else cout << "Unable to open file";

	return 0;
}

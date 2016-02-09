// Testing Arrays
//
#include <iostream>
#include <array>
using namespace std;


// arrays as parameters
void printarray(int arg[], int length)
{
	for(int n=0; n<length;++n)
	{
		cout << arg[n] << " ";
	}
	cout << "\n";
}

int main()
{
	int foo1[5];
	int foo2[5] = {16,2,77,40,1241};
	//[12,41,51,0,0]
	int foo3[5] = {12,41,51};
	int foo4[5] = {};
	int foo5[] = {16,2,77,40,1241};
	// int foo6[] {16,2,77,40,1241};
	

	int result=0;
	for(int n=0;n<5;n++)
	{
		result += foo2[n];
		cout << "n=" << n << ", result=" << result << "\n";
	}


	int jimmy[3][5];
	char century[10][2][2];

	int firstarray[] = {5,10,15};
	int secondarray[] = {2,4,6,8};
	printarray(firstarray,3);
	printarray(secondarray,4);

	array<int,3> myarray = {10,20,30};
	for(int i=0; i<myarray.size();++i)
	{
		++myarray[i];
		cout << myarray[i] << "\n";
	}

	return 0;
}

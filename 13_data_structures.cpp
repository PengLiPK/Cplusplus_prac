// Testing data structures
//
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct movies_t
{
	string title;
	int year;
}mine;

// Nesting structures
struct friends_t
{
	string name;
	string email;
	movies_t favorite_movie;
};

void printmovie(movies_t movie);

int main()
{
	string mystr;
	movies_t yours;

	mine.title = "2001 A Space Odyssey";
	mine.year = 1968;

	cout << "Enter title: ";
	getline(cin, yours.title);
	cout << "Enter year: ";
	getline(cin, mystr);
	stringstream(mystr) >> yours.year;

	cout << "My favorite movie is:\n";
	printmovie(mine);
	cout << "And yours is:\n";
	printmovie(yours);

	
	//
	movies_t films[3];
	
	for(int n=0;n<3;n++)
	{
		cout << "Enter title:\n";
		getline(cin, films[n].title);
		cout << "Enter year:\n";
		getline(cin, mystr);
		stringstream(mystr) >> films[n].year;
	}

	cout << "\nYou have entered these movies:\n";
	for(int n=0;n<3;n++)
	{
		printmovie(films[n]);
	}


	// pointer to structure
	movies_t amovie;
	movies_t* pmovie;

	pmovie = &amovie;

	cout << "Enter title: ";
	// pmovie->title equal to (*pmovie).title
	getline(cin, pmovie->title);
	cout << "Enter year: ";
	getline(cin, mystr);
	stringstream(mystr) >> pmovie->year;
	
	cout << "\nYou have entered:\n";
	cout << pmovie->title;
	cout << " (" << pmovie->year << ")\n";


	//
	friends_t charlie;
	friends_t* pfriends = &charlie;
	
	charlie.name = "Charlie";
	charlie.email = "charlie@xxx.com";
	charlie.favorite_movie.title = "Cloud";
	charlie.favorite_movie.year = 1980;

	cout << charlie.name << " ";
	cout << charlie.email << " ";
	cout << charlie.favorite_movie.title << " ";
	cout << charlie.favorite_movie.year << "\n";

	cout << pfriends->name << " ";
	cout << pfriends->email << " ";
	cout << pfriends->favorite_movie.title << " ";
	cout << pfriends->favorite_movie.year << "\n";


	return 0;
}

void printmovie(movies_t movie)
{
	cout << movie.title;
	cout << " (" << movie.year << ")\n";
}


//I affirm that all code given below was written solely by me, Carter Nickelson, and that any help I received adhered to the rules stated for this exam.

#include"Theater.h"

using namespace std;

int main()
{
	const int moviecount = 11;
	Movie movieListing[] = { Movie("Bull Durham","Comedy", 0), Movie("Ocean's Eleven", "Action",2),
		Movie("Monte Python's Meaning of Life", "Comedy", 5), Movie("Jaws","Horror", 7),Movie("Fletch","Comedy",10),
		Movie("Usual Suspects","Action",12),Movie("Bull Durham","Comedy", 14),Movie("Ocean's Eleven", "Action",16),
		Movie("Monte Python's Meaning of Life", "Comedy", 19),Movie("Jaws","Horror", 21),
		Movie("Usual Suspects","Action",23) 
	};
	
	Theater garland("The Garland", "509-327-2509");

	for (int m = 0; m < moviecount; m++)
	{
		garland.AddMovie(movieListing[m]);
	}

	int errors = 0;
	if (garland.GetMovieForHour(-1) != "")
	{
		errors++;
		cout << "error:not handling -1 correctly" << endl;
	}
	if (garland.GetMovieForHour(25) != "")
	{
		errors++;
		cout << "error:not handling 25 correctly" << endl;
	}
	if (garland.GetMovieForHour(18) != "Monte Python's Meaning of Life")
	{
		errors++;
		cout << "error: incorrect movie for 18th hour" << endl;
	}
	if (garland.GetShowTimeForGenre("Comedy") != 0)
	{
		errors++;
		cout << "error: incorrect comedy" << endl;
	}

	if (errors == 0)
		cout << "Passed" << endl;
	else
		cout << "Errors: " << errors << endl;
}
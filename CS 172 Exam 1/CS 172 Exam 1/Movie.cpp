//I affirm that all code given below was written solely by me, Carter Nickelson, and that any help I received adhered to the rules stated for this exam.

#include"Movie.h"

Movie::Movie()
{
	// make the default movie the best one ever
	title = "The Shawshank Redemption";
}

Movie::Movie(string Title, string Genre, int ShowTime)
{
	// set the title and showtimes to their specified values
	title = Title;
	showtime = ShowTime;

	// set the genre of the movie to the specified genre, unless it is not available, then default to comedy
	if (Genre == "Action" || Genre == "Horror" || Genre == "Documentary")
		genre = Genre;
	else
		genre = "Comedy";
}

string Movie::GetTitle()
{
	return title;
}

string Movie::GetGenre()
{
	return genre;
}

int Movie::GetShowtime()
{
	return showtime;
}
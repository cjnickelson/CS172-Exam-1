//I affirm that all code given below was written solely by me, Carter Nickelson, and that any help I received adhered to the rules stated for this exam.

#include"Theater.h"

Theater::Theater(string Name, string Phone)
{
	// set the name and number to the specified strings
	name = Name;
	phone = Phone;
}

void Theater::AddMovie(Movie& film)
{
	// film.GetShowTime() gives us the time that the movie plays. We then generate an object of the 
	// class Movie to input into the MovieSchedule at that time slot. The valuus for title genre
	// and showtime will be that of the object passed into the function
	movieSchedule[film.GetShowtime()] = Movie(film.GetTitle(), film.GetGenre(), film.GetShowtime());
}

string Theater::GetMovieForHour(int Hour)
{
	// if the hour is outside of the possible range, return the empty string
	if (Hour < 0 || Hour>24)
		return "";

	// otherwise, determine the movie title playing at or after that hour
	else
	{
		// run through the schedule starting at the given time
		for (int i = Hour; i < 24; i++)
		{
			// if a movie lies in one of these showtimes, its value for GetShowTime will exceed that of 
			// Hour, thus the function will return that movie's title using GetTitle
			if (movieSchedule[i].GetShowtime() >= Hour)
			{
				return movieSchedule[i].GetTitle();
			}
		}
		// if no such movie exists, it will return the empty string
		return "";
	}
}

int Theater::GetShowTimeForGenre(string Genre)
{
	// set the variable time equal to negative one, such that if no movie matches the description, it will return -1
	int time = -1;

	// run through the schedule starting at hour 0 until we find a movie with the input genre
	for (int i = 0; i < 24; i++)
	{
		// if they match, set the time variable equal to the time for that movie, and break out of the
		// for loop so as to avoid returning two times if there is another such movie
		if (movieSchedule[i].GetGenre() == Genre)
		{
			time = movieSchedule[i].GetShowtime();
			break;
		}
	}
	// if no such movie exists, the time will be returned as -1
	return time;
}

int Theater::GetPopcornPrice()
{
	// returns the price of popcorn
	return popcornPrice;
}

int Theater::GetCokePrice()
{
	// returns the price of coke.
	return cokePrice;
}
#pragma once
//I affirm that all code given below was written solely by me, Carter Nickelson, and that any help I received adhered to the rules stated for this exam.

#include<iostream>
#include<string>

using namespace std;

class Movie
{
	// create variables to track the title, genre and showtime of the movie
	string title, genre;
	int showtime;
public:
	Movie();
	// generates a movie title for a movie with no input from the user
	
	Movie(string Title, string Genre, int ShowTime);
	// constructs a movie given these three arguments

	string GetTitle();
	// Returns the movie title
	
	string GetGenre();
	// Returns the movie genre
	
	int GetShowtime();
	// Returns what time the movie is playing
};
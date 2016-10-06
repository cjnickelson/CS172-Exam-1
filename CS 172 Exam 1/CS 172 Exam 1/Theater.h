#pragma once
//I affirm that all code given below was written solely by me, Carter Nickelson, and that any help I received adhered to the rules stated for this exam.

#include<iostream>
#include<string>
#include"Movie.h"

using namespace std;

class Theater
{
	// create variables to track the theater's name and number
	string name, phone;

	// create an array of movie objects with 24 slots (one for each hour) to act as the theater's schedule
	Movie movieSchedule[24] = {};

	// create variables to track the prices of popcorn and soda
	int popcornPrice=25;
	int cokePrice = 14;

public:
	Theater(string Name, string Phone);
	// create a movie theater and specify its name and phone number
	
	void AddMovie(Movie& Movie);
	// takes a movie from the input and adds it to the movie schedule for the theater
	
	string GetMovieForHour(int Hour);
	//Finds the frist movie playing after a given hour
	//   Returns "" if none are upcoming
	
	int GetShowTimeForGenre(string Genre);
	//Returns the time of the next movie playing the specified genre
	//   Return -1 if none exist
	
	int GetPopcornPrice();
	//returns the arbitrary price of popcorn
	
	int GetCokePrice();
	//returns the arbitrary price of coca cola
};
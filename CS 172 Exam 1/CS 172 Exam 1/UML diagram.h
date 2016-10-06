#pragma once

/*
                                    11
                 Movie              ----------------<>            Theater
	_______________________________                    _______________________________
	- int showtime                                     - string name
	- string title                                     - string phone
	- string genre                                     - Movie movieSchedule[24]
	_______________________________                    - int popcornPrice
	+ string GetTitle()                                - int cokePrice
	+ string GetGenre()                                _______________________________
	+ int GetShowTime()                                + void AddMovie(Movie&)
													   + string GetMovieForHour(int Hour)
													   + int GetShowTimeForGenre(string Genre)
													   + int GetPopcornPrice()
													   + int GetCokePrice()
*/
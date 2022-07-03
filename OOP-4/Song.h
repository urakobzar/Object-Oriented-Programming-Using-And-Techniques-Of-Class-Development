#pragma once
#include <exception>
#include <iostream>
#include <string>

using namespace std;

enum Genre
{
	FolkMusic,
	Country,
	Blues,
	Jazz,
	Romance,
	ElectonicMusic
};

class Song
{
private:
	string _titleSong = "";
	int _duration;
	enum Genre _genreSong;
public:

	Song();

	Song(string titleSong, int duration, Genre genreSong);

	void SetSongTitle(string titleSong);

	void SetDuration(int duration);

	void SetGenreMusic(Genre genreSong);

	string GetSongTitle();

	enum Genre GetGenreMusic();
};







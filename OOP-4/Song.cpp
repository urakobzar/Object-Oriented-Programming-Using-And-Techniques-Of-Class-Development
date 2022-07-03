#include "Song.h"

Song::Song()
{

}

Song::Song(string titleSong, int duration, Genre genreSong)
{
	this->SetSongTitle(titleSong);
	this->SetDuration(duration);
	this->SetGenreMusic(genreSong);
}

void Song::SetSongTitle(string titleSong)
{
	this->_titleSong = titleSong;
}

void Song::SetDuration(int duration)
{
	if (duration < 0)
	{
		throw exception("A duration can't be negative");
	}
	this->_duration = duration;
}

void Song::SetGenreMusic(Genre genreSong)
{
	this->_genreSong = genreSong;
}

string Song::GetSongTitle()
{
	return this->_titleSong;
}

Genre Song::GetGenreMusic()
{
	return this->_genreSong;
}

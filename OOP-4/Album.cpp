#include "Album.h"


Album::Album()
{

}

Album::Album(string titleAlbum, int year, Song* songs, int songsCount)
{
	this->SetTitleAlbum(titleAlbum);
	this->SetYear(year);
	this->SetSongs(songs, songsCount);
}

void Album::SetTitleAlbum(string titleAlbum)
{
	this->_titleAlbum = titleAlbum;
}


void Album::SetYear(int year)
{
	this->_year = year;
}

void Album::SetSongs(Song* songs, int songsCount)
{
	if (songsCount < 0)
	{
		throw exception("A count of songs can't be negative");
	}
	this->_songs = songs;
	this->_songsCount = songsCount;
}

string Album::GetTitleAlbum()
{
	return this->_titleAlbum;
}

Song* Album::GetAlbumSong()
{
	return this->_songs;
}

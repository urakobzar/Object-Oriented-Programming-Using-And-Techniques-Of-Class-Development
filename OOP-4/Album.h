#pragma once
#include "Song.h"


class Album
{
private:
	string _titleAlbum;
	int _year;
	Song* _songs;
	int _songsCount;
public:

	Album();

	Album(string titleAlbum, int year, Song* songs, int songsCount);

	void SetTitleAlbum(string titleAlbum);

	void SetYear(int year);

	void SetSongs(Song* songs, int songsCount);

	string GetTitleAlbum();

	Song* GetAlbumSong();
};



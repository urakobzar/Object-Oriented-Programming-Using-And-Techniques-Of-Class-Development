#pragma once
#include "Album.h"

class Band
{
private:
	string _titleBand;
	string _history;
	Album* _albumBand;
	int _albumsCount;
public:
	Band();

	Band(string titleBand, string history, Album* albums, int albumsCount);

	void SetTitleBand(string titleBand);

	void SetHistory(string history);

	void SetAlbums(Album* albumBand, int albumsCount);

	Song* FindSong(string songTitle);

	Album* FindAlbum(string songTitle);

	Song* GetAllSongs(int& allSongsCount);

	Song* GetAllGenreSongs(Genre findingGenre, int& allSongsCount);

	void DemoBand();
};




#include "Band.h"
#include "Album.h"


Band::Band()
{

}

Band::Band(string titleBand, string history, Album* albums, int albumsCount)
{
	this->SetTitleBand(titleBand);
	this->SetHistory(history);
	this->SetAlbums(albums, albumsCount);
}


void Band::SetTitleBand(string titleBand)
{
	this->_titleBand = titleBand;
}

void Band::SetHistory(string history)
{
	this->_history = history;
}

void Band::SetAlbums(Album* albumBand, int albumsCount)
{
	if (albumsCount < 0)
	{
		throw exception("A count of albums can't be negative");
	}
	this->_albumBand = albumBand;
	this->_albumsCount = albumsCount;
}

void Band::DemoBand()
{
	Song* song1 = new Song[4];
	Song* song2 = new Song[4];
	Song* song3 = new Song[4];
	song1[0] = Song("1FisrtSong", 10, Jazz);
	song1[1] = Song("1SecondSong", 20, Blues);
	song1[2] = Song("1ThirdSong", 30, Romance);
	song1[3] = Song("1FourthSong", 40, Country);
	song2[0] = Song("2FisrtSong", 50, Jazz);
	song2[1] = Song("2SecondSong", 60, Blues);
	song2[2] = Song("2ThirdSong", 70, Romance);
	song2[3] = Song("2FourthSong", 80, Country);
	song3[0] = Song("3FisrtSong", 90, Jazz);
	song3[1] = Song("3SecondSong", 100, Blues);
	song3[2] = Song("3ThirdSong", 110, Romance);
	song3[3] = Song("3FourthSong", 120, Country);
	Album* album = new Album[3];
	album[0] = Album("FirstAlbum", 2001, song1,4);
	album[1] = Album("SecondAlbum", 2002, song2,4);
	album[2] = Album("ThirdAlbum", 2003, song3,4);
	this->Band::Band("OOP", "No", album,3);
	cout << "\nBand: " << this->_titleBand;
	for (int i = 0; i < 3; i++)
	{
		cout << "\nAlbum: " << this->_albumBand[i].GetTitleAlbum();
		for (int j = 0; j < 4; j++)
		{
			cout << "\n\tSong: " << this->_albumBand[i].GetAlbumSong()[j].GetSongTitle();
		}
	}
	Song* findSong = FindSong("2FisrtSong");
	cout << "\nSearch Song: " << findSong->GetSongTitle();
	Album* findAlbum = FindAlbum("2FisrtSong");
	cout << "\nSearch Song: " << findAlbum->GetTitleAlbum();
	int allSongsCount = 0;
	Song* arraySong = GetAllSongs(allSongsCount);
	cout << "\n\nAll Songs: \n";
	for (int i = 0; i < allSongsCount; i++)
	{
		cout << "\n" << arraySong[i].GetSongTitle();
	}
	allSongsCount = 0;
	Song* arraySong2 = GetAllGenreSongs(Jazz, allSongsCount);
	cout << "\n\nSongs from Jazz: \n";
	for (int i = 0; i < allSongsCount; i++)
	{
		cout << "\n" << arraySong2[i].GetSongTitle();
	}
	delete[] song1;
	delete[] song2;
	delete[] song3;
	delete[] album;
	delete[] arraySong;
	delete[] arraySong2;
}


Song* Band::FindSong(string songTitle)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (this->_albumBand[i].GetAlbumSong()[j].GetSongTitle() == songTitle)
			{
				return &this->_albumBand[i].GetAlbumSong()[j];
			}
		}
	}
	return nullptr;
}

Album* Band::FindAlbum(string songTitle)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{

			if (this->_albumBand[i].GetAlbumSong()[j].GetSongTitle() == songTitle)
			{
				return &this->_albumBand[i];
			}
		}
	}
	return nullptr;
}

Song* Band::GetAllSongs(int& allSongsCount)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (this->_albumBand[i].GetAlbumSong()[j].GetSongTitle() != "")
			{
				allSongsCount++;
			}
		}
	}
	Song* song = new Song[allSongsCount];
	int counter = 0;
	while (counter < allSongsCount)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				song[counter].SetSongTitle(this->_albumBand[i].GetAlbumSong()[j].GetSongTitle());
				counter++;
			}
		}
	}
	return song;
}

Song* Band::GetAllGenreSongs(Genre findingGenre, int& allSongsCount)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (this->_albumBand[i].GetAlbumSong()[j].GetGenreMusic() == findingGenre)
			{
				allSongsCount++;
			}
		}
	}
	Song* song = new Song[allSongsCount];
	int counter = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (this->_albumBand[i].GetAlbumSong()[j].GetGenreMusic() == findingGenre)
			{
				song[counter].SetSongTitle(this->_albumBand[i].GetAlbumSong()[j].GetSongTitle());
				counter++;
			}
		}
	}
	return song;
}


#include "SongPlayer.h"
#include<Windows.h>


void SongPlayer::PlaySong()
{
	PlaySound(TEXT("mayahi.wav"), NULL, SND_SYNC);
}

struct SongList {
	char ArtistName[20],SongName[30];
}A[20];
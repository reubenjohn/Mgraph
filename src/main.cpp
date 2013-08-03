/*
 * main.cpp
 *
 *  Created on: Aug 3, 2013
 *      Author: Reuben
 */

#include <SDL/SDL.h>
#include <string>

using namespace std;

int main(int argc,char* args[])
{
	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_Surface* scr=SDL_SetVideoMode(1080,720,32,SDL_SWSURFACE);
	SDL_FillRect(scr,&scr->clip_rect,SDL_MapRGB(scr->format,0xFF,0xFF,0));
	SDL_Flip(scr);
	SDL_Delay(1000);
	SDL_Quit();
	return 0;
}



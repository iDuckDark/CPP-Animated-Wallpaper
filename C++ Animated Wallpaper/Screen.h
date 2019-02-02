//
//  Screen.h
//  C++ Animated Wallpaper
//
//  Created by iDarkDuck on 2018-02-01.
//  Copyright © 2018 iDarkDuck. All rights reserved.
//
#ifndef SCREEN_H_
#define SCREEN_H_

#include <SDL2/SDL.h>

class Screen {
private:
	SDL_Window *m_window;
	SDL_Renderer *m_renderer;
	SDL_Texture *m_texture;
	Uint32 *m_buffer1;
	Uint32 *m_buffer2;
public:
    const static int SCREEN_WIDTH = 1280;
    const static int SCREEN_HEIGHT = 860;
	Screen();
	bool init();
	void update();
	void setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue);
	bool processEvents();
	void close();
	void boxBlur();
};

#endif

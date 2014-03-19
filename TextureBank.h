//==============================================================================
/*
	Texture Bank class for loading multiple textures

	3/18/2014
    SDLTutorials.com
    Tim Jones
*/
//==============================================================================
#ifndef __TEXTUREBANK_H__
	#define __TEXTUREBANK_H__

#include <map>
#include <string>
#include <vector>

#include "Texture.h"

class TextureBank {
	private:
		static std::map<std::string, Texture*> TexList;

	public:
		static bool Init();

		static void Cleanup();

    private:
        static void AddTexture(SDL_Renderer* Renderer, std::string ID, std::string Filename);

	public:
		static Texture* Get(std::string ID);

		static TextureBank* GetInstance();
};

#endif

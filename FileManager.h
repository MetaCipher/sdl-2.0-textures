//==============================================================================
/*
	Class for loading files and reading directories

	Note: To use iOS functions, set your file type to Objective-C++

	3/18/2014
    SDLTutorials.com
    Tim Jones
*/
//==============================================================================
#ifndef __FILEMANAGER_H__
	#define __FILEMANAGER_H__

#include <string>
#include <map>
#include <vector>
#include <iostream>
#include <fstream>

#define DIR_SEPARATOR "/"

class FileManager {
	public:
		static bool SetContents(std::string Filename, std::string Content, bool Relative = true);

		static std::string GetContents(std::string Filename, bool Relative = true);

		static std::vector<std::string> GetFilesInFolder(std::string Folder);

		static std::string GetCWD();

		static std::string GetFilenameWithoutExt(std::string Filename);

		static std::string GetFilenameExt(std::string Filename);
};

#endif

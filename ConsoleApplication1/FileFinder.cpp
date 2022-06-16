#include "FileFinder.h"

//this method does not work
string FileFinder::file_search_begin(string path, string filename)
{
	thread_pool t(8);

	string returnString = "0";
	for (const auto& file : directory_iterator(path))
	{
		//cout << file.path() << endl;
		if (std::filesystem::is_directory(file.path()))
		{
			t.add_task(recursive_directory_search, path, filename);
		}
		else
		{
			if (file.path().filename() == filename)
			{
				returnString = file.path().filename().u8string();
			}
		}
	}
	t.wait_all();

	return returnString;
}

string FileFinder::recursive_directory_search(string path, string filename)
{
	string returnString = "0";
	for (const auto& file : std::filesystem::recursive_directory_iterator(path, std::filesystem::directory_options::skip_permission_denied))
	{
		//cout << file.path().filename() << endl;
		if (file.path().filename() == filename)
		{
			returnString = file.path().filename().u8string();
		}
	}
	return returnString;
}
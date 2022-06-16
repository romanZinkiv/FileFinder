#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <filesystem>
#include <thread>
#include <functional>
#include "thread_pool.cpp"

using std::cout; using std::cin;
using std::endl; using std::string;
using std::filesystem::recursive_directory_iterator;
using std::filesystem::directory_iterator;
using std::thread; using std::vector;

class FileFinder
{
public:
	static string file_search_begin(string path, string filename);
	static string recursive_directory_search(string path, string filename);
};
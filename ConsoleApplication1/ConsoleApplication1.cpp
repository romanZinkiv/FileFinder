#include <iostream>
#include <vector>
#include <string>
#include <filesystem>
#include <thread>
#include <functional>
#include "thread_pool.cpp"
#include "FileFinder.h"

int main() {
	//UNFORTUNATELY, THE PROGRAM DOES NOT WORK CORRECTLY

	//path where searching starts
	string path = "";
	//file name with extension	e.g.: myFile.txt
	string fileName = "";

	//FileFinder::file_search_begin(path, fileName);
	cout<< FileFinder::file_search_begin(path, fileName) << endl;

	return EXIT_SUCCESS;
}

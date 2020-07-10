/**
 * Author: David Charles Mydlarz
 * Date: 7/10/2020
 * Course: CMSC 330 - Advanced Programming Languages
 * File: parse.cpp
 * Description:
 * original file from module3.cpp example.
 */

#include <cctype>
#include <iostream>
#include <string>

using namespace std;

#include "parse.h"

string parseName(istream& infile) {
	char alnum;
	string name;

	infile >> ws;
	while (isalnum(infile.peek())) {
		infile >> alnum;
		name += alnum;
	}
	return name;
}
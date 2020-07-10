/**
 * Author: David Charles Mydlarz
 * Date: 7/10/2020
 * Course: CMSC 330 - Advanced Programming Languages
 * File: symboltable.cpp
 * Description:
 * original file from module3.cpp example.
 */

#include <string>
#include <vector>

using namespace std;

#include "symboltable.h"


void SymbolTable::insert(string variable, double value) {
	const Symbol& symbol = Symbol(variable, value);
	elements.push_back(symbol);
}

void SymbolTable::clear()
{
	elements.clear();
}

double SymbolTable::lookUp(string variable) const {
	for (int i = 0; i < elements.size(); i++)
		if (elements[i].variable == variable)
			return elements[i].value;
	return -1;
}
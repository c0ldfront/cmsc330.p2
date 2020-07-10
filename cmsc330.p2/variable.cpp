/**
 * Author: David Charles Mydlarz
 * Date: 7/10/2020
 * Course: CMSC 330 - Advanced Programming Languages
 * File: variable.cpp
 * Description:
 * original file from module3.cpp example.
 */

#include <strstream>
#include <vector>

using namespace std;

#include "expression.h"
#include "operand.h"
#include "variable.h"
#include "symboltable.h"

extern SymbolTable symbolTable;

int Variable::evaluate() {
	return symbolTable.lookUp(name);
}
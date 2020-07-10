/**
 * Author: David Charles Mydlarz
 * Date: 7/10/2020
 * Course: CMSC 330 - Advanced Programming Languages
 * File: operand.cpp
 * Description:
 * original file from module3.cpp example.
 */

#include <cctype>
#include <iostream>
#include <list>
#include <string>

using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "operand.h"
#include "variable.h"
#include "literal.h"
#include "parse.h"

Expression* Operand::parse(istream& infile) {
	char paren;
	double value;

	infile >> ws;

	if (isdigit(infile.peek())) {
		infile >> value;
		Expression* literal = new Literal(value);
		return literal;
	}

	if (infile.peek() == '(') {
		infile >> paren;
		return SubExpression::parse(infile);
	}
	else
		return new Variable(parseName(infile));
}
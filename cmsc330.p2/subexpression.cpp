/**
 * Author: David Charles Mydlarz
 * Date: 7/10/2020
 * Course: CMSC 330 - Advanced Programming Languages
 * File: subexpression.cpp
 * Description:
 * original file from module3.cpp example.
 */

#include <iostream>

using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "operand.h"
#include "plus.h"
#include "minus.h"
#include "times.h"
#include "divide.h"
#include "ampersand.h"
#include "equals.h"
#include "greaterthan.h"
#include "lessthan.h"
#include "or.h"
#include "negation.h"
#include "ternary.h"

SubExpression::SubExpression(Expression* left) {
	this->left = left;
}

SubExpression::SubExpression(Expression* left, Expression* right) {
	this->left = left;
	this->right = right;
}

SubExpression::SubExpression(Expression* left, Expression* middle, Expression* right) {
	this->left = left;
	this->middle = middle;
	this->right = right;
}

Expression* SubExpression::parse(istream& infile) {
	Expression* left;
	Expression* middle;
	Expression* right;

	char operation, paren;
	char comma;

	left = Operand::parse(infile);
	infile >> operation;
	right = Operand::parse(infile);
	infile >> paren;


	//    (x : y ? z), x = 1, y = 0, z = 3;
	// if we have an expression like the one above that looks like it has a ternary operation
	// here is where we check to see if the operation is equal to : if so we have a ternary aka 
	// conditional expression operoator.
	// In the conditional expression operator, the symbols are reversedand the 
	// third operand represents the condition.The first operand is the value when 
	// true and the second the value when false
	if (operation == ':') {
		middle = Operand::parse(infile);
		infile >> operation;
		return new Ternary(left, middle, right);
	}

	switch (operation) {
	case '+':
		return new Plus(left, right);
	case '-':
		return new Minus(left, right);
	case '*':
		return new Times(left, right);
	case '/':
		return new Divide(left, right);
	case '>':
		return new GreaterThan(left, right);
	case '<':
		return new LessThan(left, right);
	case '=':
		return new Equals(left, right);
	case '&':
		return new Ampersand(left, right);
	case '|':
		return new Or(left, right);
	case '!':
		return new Negation(left);
	}
	return 0;
}

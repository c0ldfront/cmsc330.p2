/**
 * Author: David Charles Mydlarz
 * Date: 7/10/2020
 * Course: CMSC 330 - Advanced Programming Languages
 * File: variable.h
 * Description:
 * original file from module3.cpp example.
 */

#ifndef CMSC330_P2_VARIABLE_H
#define CMSC330_P2_VARIABLE_H

class Variable : public Operand {
public:
	Variable(string name) {
		this->name = name;
	}

	int evaluate();

private:
	string name;
};

#endif //CMSC330_P2_VARIABLE_H

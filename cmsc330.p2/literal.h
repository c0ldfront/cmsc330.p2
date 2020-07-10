/**
 * Author: David Charles Mydlarz
 * Date: 7/10/2020
 * Course: CMSC 330 - Advanced Programming Languages
 * File: literal.h
 * Description:
 * original file from module3.cpp example.
 */

#ifndef CMSC330_P2_LITERAL_H
#define CMSC330_P2_LITERAL_H

class Literal : public Operand {
public:
	Literal(int value) {
		this->value = value;
	}

	int evaluate() {
		return value;
	}

private:
	int value;
};

#endif //CMSC330_P2_LITERAL_H

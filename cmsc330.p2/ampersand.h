/**
 * Author: David Charles Mydlarz
 * Date: 7/10/2020
 * Course: CMSC 330 - Advanced Programming Languages
 * File: ampersand.h
 * Description:
 * & opper
 */

#ifndef CMSC330_P2_AMPERSAND_H
#define CMSC330_P2_AMPERSAND_H

class Ampersand : public SubExpression {
public:
	Ampersand(Expression* left, Expression* right) :
		SubExpression(left, right) {
	}

	int evaluate() {
		return !left->evaluate();
	}
};

#endif //CMSC330_P2_AMPERSAND_H

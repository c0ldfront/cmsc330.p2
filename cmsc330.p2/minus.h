/**
 * Author: David Charles Mydlarz
 * Date: 7/10/2020
 * Course: CMSC 330 - Advanced Programming Languages
 * File: minus.h
 * Description:
 * original file from module3.cpp example.
 */

#ifndef CMSC330_P2_MINUS_H
#define CMSC330_P2_MINUS_H

class Minus : public SubExpression {
public:
	Minus(Expression* left, Expression* right) :
		SubExpression(left, right) {
	}

	int evaluate() {
		return left->evaluate() - right->evaluate();
	}
};

#endif //CMSC330_P2_MINUS_H

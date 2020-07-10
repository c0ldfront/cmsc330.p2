/**
 * Author: David Charles Mydlarz
 * Date: 7/10/2020
 * Course: CMSC 330 - Advanced Programming Languages
 * File: divide.h
 * Description:
 * original file from module3.
 */

#ifndef CMSC330_P2_DIVIDE_H
#define CMSC330_P2_DIVIDE_H

class Divide : public SubExpression {
public:
	Divide(Expression* left, Expression* right) :
		SubExpression(left, right) {
	}

	int evaluate() {
		return left->evaluate() / right->evaluate();
	}
};

#endif //CMSC330_P2_DIVIDE_H
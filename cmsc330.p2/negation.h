/**
 * Author: David Charles Mydlarz
 * Date: 7/10/2020
 * Course: CMSC 330 - Advanced Programming Languages
 * File: negation.h
 * Description:
 * original file from module3.cpp example.
 */

#ifndef CMSC330_P2_NEGATION_H
#define CMSC330_P2_NEGATION_H

class Negation : public SubExpression {
public:
	explicit Negation(Expression* left) : SubExpression(left) {
	}

	int evaluate() {
		return !left->evaluate();
	}
};

#endif //CMSC330_P2_NEGATION_H

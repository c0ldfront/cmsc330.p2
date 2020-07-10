/**
 * Author: David Charles Mydlarz
 * Date: 7/10/2020
 * Course: CMSC 330 - Advanced Programming Languages
 * File: ternary.h
 * Description:
 * original file from module3.cpp example.
 */

#ifndef CMSC330_P2_TERNARY_H
#define CMSC330_P2_TERNARY_H

class Ternary : public SubExpression {
public:
	Ternary(Expression* left, Expression* middle, Expression* right) : SubExpression(left, middle, right) {
	}

	//    In the conditional expression operator,
	//    the symbols are reversed and the third operand represents the condition.
	//    The first operand is the value when true and the second the value when false
	int evaluate() {
		int one = middle->evaluate();
		int two = left->evaluate();
		int three = right->evaluate();

		return  middle->evaluate() ? left->evaluate() : right->evaluate();
	}
};

#endif //CMSC330_P2_TERNARY_H

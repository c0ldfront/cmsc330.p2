/**
 * Author: David Charles Mydlarz
 * Date: 7/10/2020
 * Course: CMSC 330 - Advanced Programming Languages
 * File: subexpression.h
 * Description:
 * original file from module3.cpp example.
 */

#ifndef CMSC330_P2_SUBEXPRESSION_H
#define CMSC330_P2_SUBEXPRESSION_H

class SubExpression : public Expression {
public:
	explicit SubExpression(Expression* left);

	SubExpression(Expression* left, Expression* right);

	SubExpression(Expression* left, Expression* middle, Expression* right);

	static Expression* parse(istream& infile);

protected:
	Expression* left;
	Expression* middle;
	Expression* right;
};

#endif //CMSC330_P2_SUBEXPRESSION_H

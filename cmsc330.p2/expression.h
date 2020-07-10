/**
 * Author: David Charles Mydlarz
 * Date: 7/10/2020
 * Course: CMSC 330 - Advanced Programming Languages
 * File: expression.h
 * Description:
 * original file from module3.cpp example.
 */

#ifndef CMSC330_P2_EXPRESSION_H
#define CMSC330_P2_EXPRESSION_H

class Expression {
public:
	virtual int evaluate() = 0;
};

#endif //CMSC330_P2_EXPRESSION_H

/**
 * Author: David Charles Mydlarz
 * Date: 7/10/2020
 * Course: CMSC 330 - Advanced Programming Languages
 * File: operand.h
 * Description:
 * original file from module3.cpp example.
 */

#ifndef CMSC330_P2_OPERAND_H
#define CMSC330_P2_OPERAND_H

class Operand : public Expression {
public:
	static Expression* parse(istream& infile);
};

#endif //CMSC330_P2_OPERAND_H

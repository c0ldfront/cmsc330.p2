/**
 * Author: David Charles Mydlarz
 * Date: 7/10/2020
 * Course: CMSC 330 - Advanced Programming Languages
 * File: symboltable.h
 * Description:
 * original file from module3.cpp example.
 */


#ifndef CMSC330_P2_SYMBOLTABLE_H
#define CMSC330_P2_SYMBOLTABLE_H

class SymbolTable {
public:
	SymbolTable() {}

	void insert(string variable, double value);
	void clear();

	double lookUp(string variable) const;

private:
	struct Symbol {
		Symbol(string variable, double value) {
			this->variable = variable;
			this->value = value;
		}

		string variable;
		double value;
	};

	vector <Symbol> elements;
};

#endif //CMSC330_P2_SYMBOLTABLE_H

/**
 * Author: David Charles Mydlarz
 * Date: 7/10/2020
 * Course: CMSC 330 - Advanced Programming Languages
 * File: cmsc330.p2.cpp
 * Description:
 * main file for running the application
 */

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "symboltable.h"
#include "parse.h"

SymbolTable symbolTable;

void parseAssignments(istream& infile);

int main() {
    std::ifstream ifStream;
    Expression* expression;
    char paren, comma;
    string line_;
    string path_;

    // allow the user to enter a path for the file they will to use.
    std::cout << "enter an absoulte path: ";
    cin >> path_;

    // check to make sure the there is some sort of input..
    if ((path_ == "")) {
        std::cout << "invalid path input.";
        return 0;
    }
    
    // open the file and init ifstream.
    ifStream.open(path_, ios::in);

    // make sure the file is and was open.
    if (!ifStream.is_open())
    {
        std::cout << "could not open the file.";
        return 0;
    }

    // add a new line to give space for the output.
    std::cout << endl;

    // check to make sure we are not at the end of file, and run the while loop.
    while (!ifStream.eof()) {
        
        // there was an issue when looking up and evaluating the values already added to the table.
        // i have added a clear function to allow clearing the vector elements list with this function.
        // some of the outputs were wrong...
        symbolTable.clear();

        // there was an issue when using the left shift operation,
        // the full get line string would come up blank. thus, for the reason
        // why we use isstringstream and also getline.
        std::getline(ifStream, line_);

        // if there is a line_ that is blank just break out so we don't
        // get a null pointer reference below.
        if ((line_ == ""))
            break;

        // init is string stream and assign the string line so we can use the left shift oper
        // this this made it easy to parse only the current string line.
        std::istringstream iss(line_);
        
        // output the current string that we are going to parse to the console.
        std::cout << line_ << endl;

        // pull out paren from the string stream of the first line_ string.
        iss >> paren;
        // call parse in subexpression and pass in the reference for the isstream.
        expression = SubExpression::parse(iss);

        // pull out the delimeter and parse the assignments.
        iss >> comma;
        parseAssignments(iss);

        // output the value for the expression.
        cout << "Value = " << expression->evaluate() << endl << endl;
        
        // clear out the isstringstream buffer for the next one.
        // i dont' think i really need to-do this but i do it anways.
        iss.clear();
    }

    // close out all the stream for the file so it is not locked from the system.
    ifStream.close();

    // use iostream pause function to wait for user input when running the program as an executable.
    system("pause");

    return 0;
}

void parseAssignments(istream& infile) {
    char assignop, delimiter;
    string variable;
    int value;
    do {
        variable = parseName(infile);
        infile >> ws >> assignop >> value >> delimiter;
        symbolTable.insert(variable, value);
    } while (delimiter == ',');
}

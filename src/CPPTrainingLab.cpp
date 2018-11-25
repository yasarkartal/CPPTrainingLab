//============================================================================
// Name        : CPPTrainingLab.cpp
// Author      : Yasar Kartal
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Search.hpp"
using namespace std;

int main() {
	Search searchAlgorithms;
	Search *sAlgorithms = new Search();
	searchAlgorithms.mpExplanation = "algorithms of search";

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	cout << "Algorithms: " << searchAlgorithms.mpExplanation << endl;
	cout << "Algorithms: " << sAlgorithms->mpExplanation << endl;

	delete sAlgorithms;
	return 0;
}

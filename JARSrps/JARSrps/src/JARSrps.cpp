//============================================================================
// Name        : JARSrps.cpp
// Author      : JARS
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Menu.h"
#include "CpuPlayer.h"
#include "FileManager.h"
using namespace std;

int main() {
	//cout << "Hello World!!!" << endl; // prints !!!Hello World!!!

//Menu a;
/*while(1){
	printf("Please press 2 first to store name, then 3 to begin game, and 1 to see the result\n");
	a.MakeDecision();
}*/

	FileManager fm;
	fm.readFromFile();

	return 0;
}

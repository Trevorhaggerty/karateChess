// Karate/chess
/*
 * this will be an attempt at a random cave generator and then basic karate/chess game
 */
 
// libraries

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

// version control for displayTitleScreen
int versionNumberRelease = 0;
int versionNumberInternal = 0;
int versionNumberAsset = 0;
int versionNumberScript = 1;





//-----functions-------

void displayTitleScreen(){
     cout << "                                                          Trevor Haggerty & Zachary Drummond's    "<< endl;
	 cout << "   #############################################################################################  "<< endl;
	 cout << "                                                                                                  "<< endl;
	 cout << "   ##  ##     ##     ####     ##   ########  ######        ####  ##  ##  ######   ####     ####   "<< endl;
	 cout << "   ## ##     ## ##   ##  ##  ## ##    ##     ##          ##      ##  ##  ##      ##  ##   ##  ##  "<< endl;
	 cout << "   ####      #####   ####    #####    ##     ####       ##       ######  ####     ##       ##     "<< endl;
	 cout << "   ##  ##   ##   ##  ##  ## ##   ##   ##     ##          ##      ##  ##  ##         ##       ##   "<< endl;
	 cout << "   ##  ##   ##   ##  ##  ## ##   ##   ##     ##          ##      ##  ##  ##      ##  ##   ##  ##  "<< endl;
	 cout << "   ##  ##   ##   ##  ##  ## ##   ##   ##     ######        ####  ##  ##  ######   ####     ####   "<< endl;
	 cout << "                                                                                                  "<< endl;
 	 cout << "   #############################################################################################  "<< endl;
	 cout << "   version "<< versionNumberRelease <<"."<< versionNumberInternal <<"."<< versionNumberAsset<<"."<< versionNumberScript << endl;
};


//-----classes--g++ karateChessC++.cpp -o karateChessC++.exe-----


//-----execution-------



 int main(){
 
	 int variableA = 0;
	 displayTitleScreen();
	 cout <<"some shit" << endl;
	 //getline (cin,variableA);
	 
	 
	 return 0;
	 
	 
	 
 }
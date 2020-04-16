//uses a vector to display lines of a file in reverse
#include <iostream>
#include <fstream>
#include <string>
#include "vector.h"
using namespace std;

//function prototype
string enterFile(ifstream &inFile, string prompt = "");
void readFile(istream & is, vector<string> &lines);

//main function
int main () {
   ifstream inFile;
   vector<string> lines;
   enterFile(inFile, "Input File: ");
   readFile(inFile, lines);
   inFile.close();
   for (int i = lines.size()-1; i >= 0; i--) {
      cout << lines[i] << endl;
   }
   return 0;
}
string enterFile(ifstream &inFile, string prompt) {
   while (true) {
   cout << prompt;
   string fileName;
   getline(cin, fileName);
   inFile.open(fileName.c_str());
   if(!inFile.fail()) return fileName;
   inFile.clear();
   cout << "Try again";
   if (prompt == "") prompt = "Input file : \n";
   }
}
void readFile(istream &is, vector<string> &lines) {
   string line;
while (getLine(is, line)) {
   lines.add(line);
}
}

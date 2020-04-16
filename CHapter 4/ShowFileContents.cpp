#include <iostream>
#include <fstream>
#include <string>

using namespace std;
//function Prototype
string promptUserForFile (ifstream &infile, string prompt = "");
//main function
int main() {
   ifstream infile;
   promptUserForFile(infile, "Input File: ");
   char ch;
   while (infile.get(ch)) {
      cout.put(ch);
   }
   infile.close();
   return 0;
}
string promptUserForFile (ifstream &infile, string prompt) {
   while (true) {
      cout << prompt;
      string fileName;
      getline(cin, fileName);
      infile.open(fileName.c_str());// need to convert filename to c_str
      if(!infile.fail() ) return fileName;
      infile.clear();
      cout << "Unable to open file. Try again";
      if (prompt == "") prompt = "Input file:";
      
   }
}

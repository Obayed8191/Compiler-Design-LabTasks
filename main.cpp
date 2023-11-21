#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  string myText;

 ifstream MyReadFile("Obayed.txt");

 while (getline (MyReadFile, myText))
{
   cout << myText;
}

 MyReadFile.close();
}

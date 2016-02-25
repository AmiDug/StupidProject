#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main ()
{
string input;
float density;
float volume;
void Error();

cout << "Enter density: ";
try
   {
     getline (cin,input);
   }
catch(int e)
   {
     Error ();
   }
stringstream(input) >> density;
cout << "Enter volume: ";
try
   {
     getline (cin,input);
   }
catch(int n)
   {
     Error ();
   }
stringstream(input) >> volume;
cout << "Total mass: " << density*volume << endl;
return 0;
}
void Error ()
{
cout << "An error has occured, please try again " << endl;
main();
}
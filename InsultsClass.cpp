#include <iostream>
using namespace std;

class Insults
{
   string retort;
 public:
   void setInsult (string);
   string Insult() {return retort;}
};

void Insults::setInsult (string insult)
{
   retort = insult;
}

int main()
{
   Insults varInsult;
   varInsult.setInsult ("You're dumb!");
   cout << varInsult.Insult() << endl;
   return 0;
}
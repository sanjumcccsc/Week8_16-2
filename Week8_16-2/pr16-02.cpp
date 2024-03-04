// This program demonstrates the use of object-oriented 
// exception handling. 
#include <iostream>
#include "IntRange.h"
using namespace std; 

int main()
{
   IntRange range(5, 10), r; // range is an object of datatype
    // IntRange.  Created by an overloaded constructor
   // that takes two arguments, so has two parameters
   // passed by value
   int userValue;
   
   do
   {
       cout << "Enter a value in the range 5 - 10: ";
       try
       {
           userValue = range.getInput();
           cout << "You entered " << userValue << endl;
       }
       catch (IntRange::OutOfRange e)
       {
           cout << "That value is out of range.\n";
           userValue = e.getuValue();
       }
   } while (userValue != 100);
   cout << "End of the program.\n";
   return 0;
}
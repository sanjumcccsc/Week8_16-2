#ifndef INTRANGE_H
#define INTRANGE_H   

#include <iostream>
using namespace std;

class IntRange
{
private:
  int input = -1;	// For user input
  int lower = -1;	// Lower limit of range
  int upper = -1;	// Upper limit of range
public:
// Exception class
	class OutOfRange
	{
	private:
		int uValue = -1;
	public:
		OutOfRange(int n) 
		{ 
			cout << "IntRange:line 19\n"; 
			uValue = n;
		}
		int getuValue()
		{
			return uValue;
		}
	};	 // Empty class declaration
// Member functions
	IntRange() { lower = 1; upper = 100; };
	IntRange(int low, int high)	// Overloaded Constructor
	{ 
		lower = low;
		upper = high; 
	}
	int getInput()
	{
	  cin >> input;
	  if (input < lower || input > upper)
	     throw OutOfRange(input);
	  return input;
   }
};
#endif
/*
 * continue.cpp
 *
 *  Created on: Jan 23, 2016
 *      Author: vibhor
 */

#include<iostream>

using namespace std;

int main()
{


	   // Local variable declaration:
	   int a = 10;

	   // do loop execution
	   do
	   {
	       if( a == 15)
	       {
	          // skip the iteration.
	          a++;
	          continue;
	       }
	       cout << "value of a: " << a << endl;
	       a = a + 1;
	   }while( a < 20 );

	   return 0;
	}





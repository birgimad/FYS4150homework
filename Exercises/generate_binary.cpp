#include <iostream>

using namespace std;
 

int main ()

{
    
	double bin_ent; int number;
    
	number = 43;
   
	// for loop execution
   
	for( int i = 1; i < 33; i++ )
   
	{
       
		bin_ent = number % 2;
       
		number = (number - number % 2) / 2;
       
		cout << bin_ent << endl;
   
	}
   
	return 0;

}
#include <iostream>

using namespace std;
 

int main ()

{
    
	double sumup; double sumdown; int N;
    
	sumup = 0; sumdown = 0;
    
	N = 100;
   
	// for loop execution
   
	for( int i = 1; i < N; i++ )
   
	{
       
		sumup = sumup + 1.00000/i;
   
	}
   
	for( int i = N; i > 0; i-- )
   
	{
       
		sumdown = sumdown + 1.00000/i;
   
	}
    
	cout << "sumup =" << sumup << endl;
    
	cout << "sumdown =" << sumdown << endl;
   
return 0;
}

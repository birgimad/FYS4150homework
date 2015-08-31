#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
#include <iomanip>
using std::setw;

double CalculateError(double exact_number, double approx[], int size_of_array )
{
    for ( int j = 0; j < size_of_array; j++ )
    {
    double error[size_of_array];
    error[j] = fabs(exact_number - approx[j]);
    cout << error[j] << endl;
    }
}

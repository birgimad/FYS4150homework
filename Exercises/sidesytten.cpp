using namespace std;
#include <iostream>

int main (int argc, char* argv[])
{
    int i;
    int terms[32];
    int number[] = {417};
    for (i=0; i<32 ; i++){terms[i]=0;}
    for (i=0; i<32 ; i++){
        terms[i]=number[0]%2;
        number[0] /=2;
    }
    cout <<"number of bytes used=" <<sizeof(number)<<endl;
    for (i=0; i<32 ; i++){
        cout << "Term nr.:" << i << "Value=" << terms[i];
        cout << endl;
    }
    return 0;
}

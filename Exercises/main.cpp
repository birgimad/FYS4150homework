using namespace std;
#include <QCoreApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int i;
    int sumup;

    sumup=0;

    for (i=0; i<10 ; i++){
        sumup=sumup+1/i;
    }

    cout << sumup << endl;

    return a.exec();
}


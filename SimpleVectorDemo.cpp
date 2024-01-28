#include <iostream>
#include "SimpleVector.h"
using namespace std;

int main()
{
    const int SIZE = 10;
    int count;

    SimpleVector<int> intTable(SIZE);
    SimpleVector<int> intTable2(SIZE);
    SimpleVector<double> doubleTable(SIZE);

    for (count = 0; count < SIZE; count++)
    {
        intTable[count] = (count * 2);
        intTable2[count] = (count * 3);
        doubleTable[count] = (count * 2.14);
    }

    cout << "These values are in intTable:\n";
    for (count = 0; count < SIZE; count++)
        cout << intTable[count] << " ";
    cout << endl;

    cout << "These values are in intTable2:\n";
    for (count = 0; count < SIZE; count++)
        cout << intTable2[count] << " ";
    cout << endl;

    cout << "These values are in doubleTable:\n";
    for (count = 0; count < SIZE; count++)
        cout << doubleTable[count] << " ";
    cout << endl;

    cout << "\nAdding 5 to each element of intTable and doubleTable.\n";
    for (count = 0; count < SIZE; count++)
    {
        intTable[count] = intTable[count] + 5;
        doubleTable[count] = doubleTable[count] + 5.0;
    }

    cout << "These values are in intTable:\n";
    for (count = 0; count < SIZE; count++)
        cout << intTable[count] << " ";
    cout << endl;

    cout << "These values are in intTable2:\n";
    for (count = 0; count < SIZE; count++)
        cout << intTable2[count] << " ";
    cout << endl;

    cout << "These values are in doubleTable:\n";
    for (count = 0; count < SIZE; count++)
        cout << doubleTable[count] << " ";
    cout << endl;

    cout << "\nIncrementing each element of intTable and doubleTable.\n";
    for (count = 0; count < SIZE; count++)
    {
        intTable[count]++;
        doubleTable[count]++;
    }

    cout << "These values are in intTable:\n";
    for (count = 0; count < SIZE; count++)
        cout << intTable[count] << " ";
    cout << endl;

    cout << "These values are in intTable2:\n";
    for (count = 0; count < SIZE; count++)
        cout << intTable2[count] << " ";
    cout << endl;

    cout << "These values are in doubleTable:\n";
    for (count = 0; count < SIZE; count++)
        cout << doubleTable[count] << " ";
    cout << endl;

    return 0;
}

#include <iostream>
#include"Date.h"
using namespace std;
int main()
{
    Date t;
    t.SetDates(1, 6, 5433);
    string g = t;
    t--;

    t.Print();
}

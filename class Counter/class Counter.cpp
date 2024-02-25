#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
class Counter {
    unsigned short max_value;
    unsigned short min_value;
    unsigned short now_value = 0;
    unsigned short step;
    short key_stop;

public:
    Counter& operator ++ ()
    {
        now_value += step;
        return *this;
    }

    Counter operator ++ (int)
    {
        Counter copy = *this;
        now_value += step;
        return copy;
    }

    Counter& operator -- ()
    {
        now_value -= step;
        return *this;
    }

    Counter operator -- (int)
    {
        Counter copy = *this;
        now_value -= step;       
        return copy;
    }

    const short s = 115;
    void GetKeyStop(unsigned short key)
    {

        system("cls");
        cout << now_value << "\n";
        Sleep(200);
        exit(0);

    }
    void GetCounter(unsigned short max, unsigned short min, unsigned short step)
    {
        short key;
        unsigned short value = min;
        while (true)
        {
            key = _getch();
            if (max < min)
            {
                throw "Error values";
            }
            if (key == s)
            {
                GetKeyStop(s);
            }
            if (value == max)
            {
                value = min;
            }
            cout << value;
            now_value = value;
            value += step;
            Sleep(200);
            system("cls");
        }
    }

    void SetStep(unsigned short st)
    {
        step = st;
    }

    unsigned short GetStep()
    {
        return step;
    }

    void SetMaxValue(unsigned short max)
    {
        max_value = max;
    }

    unsigned short GetMaxValue()
    {
        return max_value;
    }

    void SetMinValue(unsigned short min)
    {
        min_value = min;
    }

    unsigned short GetMinValue()
    {
        return min_value;
    }
    void Print()
    {
        cout << now_value << "\n";
    }
};
int main()
{
    unsigned short min;
    unsigned short max;
    unsigned short step;
    Counter c;
    cout << "Min value - ";
    cin >> min;
    cout << "Max value - ";
    cin >> max;
    cout << "Step - ";
    cin >> step;
    cout << "Enter - to continue\ns - stop\n";
    c.SetMaxValue(max);
    c.SetMinValue(min);
    c.SetStep(step);
    c.Print();
    c++;
    ++c;
    c.Print();

    c.GetCounter(c.GetMaxValue(), c.GetMinValue(), c.GetStep());

}
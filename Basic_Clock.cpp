#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int h, m, s;
    string am_pm;

    cout << "Enter the current time" << endl;
    cout << "Hours : ";
    cin >> h;
    cout << "Minutes : ";
    cin >> m;
    cout << "Seconds : ";
    cin >> s;

        if (h > 23 || m > 60 || s > 60)
    {
        cout << "Invalid time!" << endl;
        exit(0);
    }
    while (true)
    {
    system("cls");

        cout << "Time is:" << h << ":" << m << ":" << s <<" "<< am_pm<< endl;

        s++;

        Sleep(1000);

        if (s > 59)

        {

            m++;

            s = 0;
        }

        if (m > 59)

        {

            h++;

            m = 0;
        }
        if(h > 12)
        {
            am_pm = "PM";
            if (h > 23)

        {

            h = 00;
        }
        }
        else
        {
            am_pm = "AM";
        }
        
        
    }
    return 0;
    
}
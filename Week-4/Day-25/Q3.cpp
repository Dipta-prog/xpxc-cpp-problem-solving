/*
https://codeforces.com/contest/1714/problem/A
*/
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int clocks, bed_hours, bed_minutes, sleeping_hours = 24, sleeping_minutes = 0;
        cin >> clocks >> bed_hours >> bed_minutes;

        while (clocks--)
        {
            int clock_hours, clock_minutes;

            cin >> clock_hours >> clock_minutes;

            int hours, minutes;

            if (clock_hours >= bed_hours)
                hours = clock_hours - bed_hours;
            else
                hours = 24 - bed_hours + clock_hours;

            if (clock_minutes >= bed_minutes)
                minutes = clock_minutes - bed_minutes;

            else
            {
                hours--;
                if (hours < 0)
                    hours = 24 + hours;
                minutes = 60 - bed_minutes + clock_minutes;
            }

            if (hours * 60 + minutes < sleeping_hours * 60 + sleeping_minutes)
            {
                sleeping_hours = hours;
                sleeping_minutes = minutes;
            }
        }

        cout << sleeping_hours << " " << sleeping_minutes << "\n";
    }

    return 0;
}

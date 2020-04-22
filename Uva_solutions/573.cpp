#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int h, u, d, f;
    while (true)
    {
        cin >> h;   // Height of the well in feet
        cin >> u;   // Climbing height in feet
        cin >> d;   // Sliding height in feet
        cin >> f;   // Percentage fatigue
        if (h == 0)
        {
            break;
        }

        // Run the snail!
        double well_height = h;
        double slide_height = d;
        double strength = u;
        double current_height = 0;
        double fatigue = f / 100.0 * strength;

        int day = 0;
        while (true)
        {
            day++;
            current_height += strength;
            if (current_height > well_height)
            {
                cout << "success on day " << day << endl;
                break;
            }
            current_height -= slide_height;
            if (current_height < 0)
            {
                cout << "failure on day " << day << endl;
                break;
            }

            strength -= fatigue;
            if (strength < 0)
            {
                strength = 0;
            }
        }
    }

    return 0;
}

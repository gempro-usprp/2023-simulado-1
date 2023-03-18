#include <iostream>
#include <iomanip>

int main()
{
    int T;
    std::cin >> T;
    float changes[T];

    for(int i = 0; i < T; i++)
    {
        int D, N;

        std::cin >> D;
        std::cin >> N;

        int units = 0;
        float change = 0;
        for(int j = 0; j < N; j++)
        {
            float p;
            std::cin >> p;
            int temp_units = (int)(D/p);
            float temp_change = D - temp_units * p;

            if(temp_units > units)
            {
                units = temp_units;
                change = temp_change;
            }
            else if(temp_units == units && temp_change > change)
                change = temp_change;
        }

        changes[i] = change;
    }

    for(int i = 0; i < T; i++)
    {
        std::cout << std::setprecision(2) << changes[i] << "\n";
    }

    return 0;
}
#include <iostream>
#include <string>

int main()
{
    while (true)
    {
        std::string input;
        int count = 0;

        std::cin >> input;

        for(int i = 0; i < input.length(); i++)
        {
            switch (input[i]) 
            {
                case '(':
                    count++;
                    break;
                case ')':
                    count--;
                    break;
            }

            if(count < 0)
                break;
        }

        if(count == 0)
            std::cout << "correct\n";
        else
            std::cout << "incorrect\n";
    }

    return 0;
}
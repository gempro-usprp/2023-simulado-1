//Não deu tempo de terminar ;-;

#include <iostream>

int main()
{
    int N;
    std::cin >> N;
    int Ls[N];
    int total = 0;

    for(int i = 0; i < N; i++)
    {
        int L;
        std::cin >> L;
        total += L;
        Ls[i] = L;
    }

    int r = N - 1;
    int after = 0;
    while(r > 0)
    {
        int l = 0;
        int before = 0;
        while(l < r)
        {
            if(before + after == (total - Ls[l] - Ls[r])/2)
            {
                if(Ls[l] == Ls[r])
                {
                    std::cout << "Y\n";
                    return 0;
                }
            }
            before += Ls[l];
            l++;
        }
        after += Ls[r];
        r--;
    }

    std::cout << "N\n";

    return 0;
}
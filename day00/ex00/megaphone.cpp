#include <iostream>

int     main(int ac, char **av)
{
    int i = 1;
    int j;
    if (ac > 1)
    {
        while(i < ac)
        {
            j = 0;
            while(av[i][j])
            {
                av[i][j] -=32;
                j++;
            }
            std::cout << av[i] << ' ';
            i++;
        }
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

    std::cout << '\n';

    return (0);
}
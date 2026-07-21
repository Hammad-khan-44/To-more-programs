#include<iostream>

bool findPlayer(char arr[], int size, char target)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == target)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    char team[11] = {'b', 'r', 'f', 's', 'i', 'h', 'a', 'n', 'm', 'w', 'z'};
    char target;

    std::cout << "Enter player initial to search: ";
    std::cin >> target;

    bool found = findPlayer(team, 11, target);

    if(found == true)
    {
        std::cout << "Player is in the team" << std::endl;
    }
    else
    {
        std::cout << "Player not found" << std::endl;
    }

    return 0;
}

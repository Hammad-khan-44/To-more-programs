#include<iostream>

void printVertical(char word[], int size)
{
    for(int i = 0; i < size; i++)
    {
        std::cout << word[i] << std::endl;
    }
}

int main()
{
    char word[100];
    std::cout << "Enter a word: ";
    std::cin >> word;

    int size = 0;
    for(int i = 0; word[i] != '\0'; i++)
    {
        size = size + 1;
    }

    printVertical(word, size);

    return 0;
}

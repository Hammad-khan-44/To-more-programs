#include<iostream>

int countVowels(char word[])
{
    int count = 0;
    for(int i = 0; word[i] != '\0'; i++)
    {
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u')
        {
            count = count + 1;
        }
    }
    return count;
}

int main()
{
    char word[100];
    std::cout << "Enter a word: ";
    std::cin >> word;

    int totalVowels = countVowels(word);
    std::cout << "Total Vowels: " << totalVowels << std::endl;

    return 0;
}

#include<iostream>

int getLength(char arr[])
{
    int length = 0;
    for(int i = 0; arr[i] != '\0'; i++)
    {
        length = length + 1;
    }
    return length;
}

int main()
{
    char name[] = "Student";
    std::cout << getLength(name);
    return 0;
}

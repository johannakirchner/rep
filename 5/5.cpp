#include <iostream>
#include <string.h>

using namespace std;

char *reverse(char *str)
{
    char *revStr;
    revStr = (char *)malloc(sizeof(char) * 50);

    for (int i = 0, j = strlen(str) - 1; i < strlen(str); i++, j--)
    {
        revStr[i] = str[j];
    }

    return revStr;
}

int main()
{

    char *str;
    str = (char *)malloc(sizeof(char) * 50);

    cin >> str;

    printf("%s", reverse(str));

    return 0;
}
/**
 * 
 * vc_split.c
 * written by Natsumi
 * 
 */

#include <string.h>

static int vc_characters(char ch, char *characters)
{
    while (*characters)
    {
        while (*characters == ch)
            return 1;
        characters++;
    }
    return 0;
}

static int vc_words(char *str, char *characters)
{
    int num = 0;
    while (*str)
    {
        while (*str && (vc_characters(*str, characters)))
            str++;
        if (*str && !vc_characters(*str, characters))
        {
            num++;
            while (*str && !vc_characters(*str, characters))
                str++;
        }
    }
    return num;
}

static int vc_numOfCharacters(char *str, char *characters)
{
    int numbers = 0;
    while (*str)
    {
        if (vc_characters(*str, characters))
            break;
        str++;
        numbers++;
    }
    return numbers;
}

char **vc_split(char *str, char *characters)
{
    char **splitStr;
    int a = 0;
    int b;
    int numbers;
    int c = vc_words(str, characters);
    if (!(splitStr = (char **)malloc(sizeof(char **) * (c + 1))))
        return NULL;
    while (*str && c)
    {
        numbers = vc_numOfCharacters(str, characters);
        if (numbers > 0)
        {
            splitStr[a] = (char *)malloc(sizeof(char) * (numbers + 1));
            for (b = 0; b < numbers; b++)
                splitStr[a][b] = str[b];
            splitStr[a++][b] = '\0';
            c--;
        }
        str += numbers + 1;
    }
    splitStr[a] = 0;
    return splitStr;
}

int main()
{
    char str[] = "hello world";
    char character = ' ';
    char **arr = vc_split(str, &character);
    while (*arr)
        printf("%s\n", *arr++);
    return 0;
}
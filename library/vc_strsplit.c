/**
 * 
 * vc_split.c
 * written by Natsumi
 * 
 */

#include <string.h>
#include <stdlib.h>
static int vc_characters(char ch,    char *characters)
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

char **vc_strsplit(char const *s, char *c)
{
    char **splitStr;
    int a = 0;
    int b;
    int numbers;
    int y = vc_words(s, c);
    if (!(splitStr = (char **)malloc(sizeof(char **) * (y + 1))))
        return NULL;
    while (*s && y)
    {
        numbers = vc_numOfCharacters(s, c);
        if (numbers > 0)
        {
            splitStr[a] = (char *)malloc(sizeof(char) * (numbers + 1));
            for (b = 0; b < numbers; b++)
                splitStr[a][b] = s[b];
            splitStr[a++][b] = '\0';
            y--;
        }
        s += numbers + 1;
    }
    splitStr[a] = 0;
    return splitStr;
}

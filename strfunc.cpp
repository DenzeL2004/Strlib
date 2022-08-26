#include <stdio.h>
#include <stdlib.h>

#include "header\Strf.h"

int str_puts (const char *str){
    if (!str)
        return EOF;

    printf (str);
    putchar ('\n');

    return 0;
}

char *str_strchr (const char *str, char symbol){
    if (!str)
        return NULL;

    do{
        if (*str == symbol)
            return (char*) str;

    } while (*str++ != '\0');

    return NULL;
}

int str_strlen (const char *str){
    if (!str)
        return -1;

    const char *start = str;
    while (*str++ != '\0')
        continue;

    return str - start - 1;
}

char *str_strcpy (char *str_dst, const char *str_src){
    if (!str_dst || !str_src)
        return NULL;

    while ((*str_dst++ = *str_src++) != '\0')
        continue;
}

char *str_strncpy (char *str_dst, const char *str_src, int counter){
    if (!str_dst || !str_src || counter < 0)
        return NULL;

    while (counter > 0 && (*str_dst++ = *str_src++) != '\0')
        counter--;

    while (counter > 0){
        counter--;
        *str_dst++ = '\0';
    }
}

char *str_strcat (char *str, const char *str_ascp){
    if (!str_ascp)
        return NULL;

    while (*str != '\0')
        str++;

    str_strcpy (str, str_ascp);
}

char *str_strncat (char *str, const char *str_ascp, int counter){
    if (!str || !str_ascp  || counter < 0)
        return NULL;

    while (*str != '\0')
        str++;

    str_strncpy (str, str_ascp, counter);
}

char *str_fgets (char *str, int counter, FILE *fpin){
    if (!str || !fpin || counter < 1)
        return NULL;

    counter--;

    char ch = 0;
    while (counter > 0 && (ch = fgetc (fpin)) != EOF){
        counter--;

        *str = ch;
        str++;

        if (ch == '\n')
            break;
    }

    *str = '\0';
}

char *str_strdup (const char *str_src){
    if (!str_src)
        return NULL;

    char *str_dst = (char*) calloc (str_strlen (str_src)+1, sizeof (char));

    str_strcpy (str_dst, str_src);

    return str_dst;
}

char *str_getline (FILE *fpin, char *str, char delim){
    if (!str || !fpin || !delim)
        return NULL;

    while (*str != '\0')
        str++;

    char ch = 0;
    while ((ch = fgetc (fpin)) != EOF){
        if (ch == delim)
            break;

        *str = ch;
        str++;
    }

    *str = '\0';
}

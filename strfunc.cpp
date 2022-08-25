#include <stdio.h>
#include "Strf.h"

int str_puts (const char *str){
    if (str == NULL)
        return EOF;

    printf (str);
    putchar ('\n');

    return 0;
}

char *str_strchr (const char *str, char symbol){
    if (str == NULL)
        return NULL;

    do{
        if (*str == symbol)
            return (char*) str;

    }while (*str++ != '\0');

    return NULL;
}

int str_strlen (const char *str){
    if (str == NULL)
        return -1;

    int len_str = 0;
    while (*str++ != '\0')
        len_str++;

    return len_str;
}

char *str_strcpy (char *str_copy, const char *str_init){
    if (str_copy == NULL)
        return NULL;

    while ((*str_copy++ = *str_init++) != '\0')
        continue;
}

char *str_strncpy (char *str_copy, const char *str_init, int max_count_symbol){
    if (str_copy == NULL || str_init == NULL)
        return NULL;

    int count_copy_symbol = 0;
    while (count_copy_symbol < max_count_symbol && (*str_copy++ = *str_init++) != '\0')
        count_copy_symbol++;

    if (count_copy_symbol < max_count_symbol);
        *str_copy = '\0';
}

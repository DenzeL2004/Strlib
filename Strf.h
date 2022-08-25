#ifndef _STRF_H_
#define _STRF_H_

int str_puts (const char *str);
char *str_strchr (const char *str, char symbol);
int str_strlen (const char *str);
char *str_strcpy (char *str_copy, const char *str_init);
char *str_strncpy (char *str_copy, const char *str_init, int max_count_symbol);

#endif

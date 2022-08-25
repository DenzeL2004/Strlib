#ifndef _STRF_H_
#define _STRF_H_

int str_puts (const char *str);
char *str_strchr (const char *str, char symbol);
int str_strlen (const char *str);
char *str_strcpy (char *str_dst, const char *str_src);
char *str_strncpy (char *str_dst, const char *str_src, int counter);
char *str_strcat (char *str, const char *str_ascp);
char *str_strncat (char *str, const char *str_ascp, int counter);
char *str_fgets (char *str, int counter, FILE *fpin);
char *str_strdup (const char *str_src);

#endif

#include <stdio.h>
#include "Strf.h"

int main(){
    str_puts ("Hello world!\n");

    printf ("%s", str_strchr ("Hello world!", '\0'));

    printf ("%d\n", str_strlen ("0123456789"));

    char str_copy[] = "04", str_init[] = "12345";
    str_strcpy (str_copy, str_init);
    printf ("%s\n", str_copy);

    str_strncpy (str_copy, str_init, 2);
    printf ("%s\n", str_copy);

    return 0;
}

#include <stdio.h>
#include <string.h>

#include "header\Strf.h"

int main(){
    str_puts ("Hello world!\n");

    printf ("%s\n", str_strchr ("Hello world!", 'H'));

    printf ("%d\n", str_strlen ("0123456789"));


    char str_copy[] = "28777777777777779427749842798", str_init[] = "1234";
    str_strcpy (str_copy, str_init);
    printf ("%s\n", str_copy);

    printf ("str_strncpy\n");
    str_strncpy (str_copy, str_init, 9);
    printf ("%s\n", str_copy);

    str_strcat (str_copy, str_init);
    printf ("%s\n", str_copy);

    str_strncat (str_copy, str_init, 7);
    printf ("%s\n", str_copy);

    FILE *fp = fopen ("TEST.txt", "r");

    if (fp){
        char str[] = "";
        str_fgets (str, 3, fp);

        printf ("%s\n", str);

        fclose (fp);
    }
    else
        printf ("ERROR, file is not open\n");

    char *str;
    str = str_strdup ("ABRAcodavra");

    printf ("%s\n", str);

    str_getline (stdin, str, '\n');

    printf ("%s", str);

    str_getline (stdin, str, '\n');
    printf ("%s\n", str);

    return 0;
}

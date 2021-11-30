#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char first[255], last[255];

    printf("Enter your first name: ");
    fgets(first, 255, stdin);
    first[strlen(first)-1] = '\0'; /* remove the newline at the end */

<<<<<<< HEAD
    printf("Hello %s!\n", name);
    printf("Hello,%s!\n", name);
=======
    printf("Now enter your last name: ");
    gets(last); /* buffer overflow? what's that? */

    printf("Hello %s %s!\n", first, last);
>>>>>>> 591ce851c4b7d87e0995642257f7995d08ea1146
    return 0;
}

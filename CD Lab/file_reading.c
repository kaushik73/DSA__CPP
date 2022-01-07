// #include <stdio.h>
// // #include <bits/stdc++.h>

// int main()
// {
//     FILE *ptr = NULL;
//     char readit[34];
//     ptr = fopen("read.txt", "r");
//     fscanf(ptr, "%s", readit);
//     return 0;
// }

#include <stdio.h>
// #include <stdlib.h>
int main()
{
    FILE *ptr = NULL;
    char string[64] = "This content was produced by Tutorial64.c";
    char readit[32];

    // ****** Reading a file ******
    ptr = fopen("read.txt", "r");
    fscanf(ptr, "%s", readit);
    printf("The content of this file has %s\n", readit);

    // ****** Writing a file ******
    // ptr = fopen("read.txt", "a");
    // fprintf(ptr, "%s", string);
    // fclose();
    return 0;
}

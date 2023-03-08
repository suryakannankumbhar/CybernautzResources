#include <stdio.h>
#include <string.h>
int main()
{
    char a[20] = "Program";
    char b[20] = {'P', 'r', 'o', 'g', 'r', 'a', 'm', '\0'};
    printf("Length of string a = %zu \n", a.strlen());
    return 0;
}
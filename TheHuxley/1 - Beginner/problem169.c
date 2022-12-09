#include <stdio.h>
#include <string.h>

int main(){
    char string[501];
    scanf(" %[^\n]", string);
    printf("%d\n", strlen(string));
    return 0;
}

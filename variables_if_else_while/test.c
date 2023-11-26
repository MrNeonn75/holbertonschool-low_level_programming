#include <stdio.h>

int main(){
    char str[100];
    str[100] = "Test integer variable is equal %d and string variable is %s";

    int test_int = 5;
    char test_str[] = "MrNeonn";

    printf(str, test_int, test_str);
}
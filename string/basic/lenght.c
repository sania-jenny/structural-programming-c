#include<stdio.h>
int main(){
    char clg[]="Sylhet engineering collage";
    int lenght= strlen(clg);

    printf("the whole bytes it take is :%d",lenght);
    printf("the whole bytes it take is :%d",sizeof(clg));

    return 0;
}
/*izeof is a compile-time operator giving the size of a type/array in bytes, strlen is a runtime function giving the length of a C string in characters (excluding the \0).
char a[10] = "hi";   // 3 bytes used
sizeof(a)            // 10  (whole array, no \0 stored)
strlen(a)            // 2   (up to first \0, not stored in the array)
Key differences:
- sizeof works on any type (int, struct, pointer); strlen only on null-terminated char*.
- sizeof(char*) is 4 or 8 (pointer size), not the string length.
- sizeof "hi" is 3 — includes the \0.
- sizeof is an operator, never evaluates its operand; strlen runs at runtime (O(n)).*/
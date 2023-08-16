#include <stdio.h>

int max_of_four(int a, int b, int c, int d)
{
    a = (a > b) ? a : b;
    a = (a > c) ? a : c;
    a = (a > d) ? a : d;
    return a;
 //   printf("%d",a);
    
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    return 0;
}

/* 
Write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them. 
*/

/* 
max_of_four:
        push    rbp
        mov     rbp, rsp
        mov     DWORD PTR [rbp-4], edi
        mov     DWORD PTR [rbp-8], esi
        mov     DWORD PTR [rbp-12], edx
        mov     DWORD PTR [rbp-16], ecx
        mov     edx, DWORD PTR [rbp-4]
        mov     eax, DWORD PTR [rbp-8]
        cmp     edx, eax
        cmovge  eax, edx
        mov     DWORD PTR [rbp-4], eax
        mov     edx, DWORD PTR [rbp-4]
        mov     eax, DWORD PTR [rbp-12]
        cmp     edx, eax
        cmovge  eax, edx
        mov     DWORD PTR [rbp-4], eax
        mov     edx, DWORD PTR [rbp-4]
        mov     eax, DWORD PTR [rbp-16]
        cmp     edx, eax
        cmovge  eax, edx
        mov     DWORD PTR [rbp-4], eax
        mov     eax, DWORD PTR [rbp-4]
        pop     rbp
        ret
*/

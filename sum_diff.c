#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int inum1, inum2;
    float fnum1,fnum2;
    scanf("%d %d", &inum1, &inum2);
    scanf("%f %f", &fnum1, &fnum2);
    
    int isum = inum1 + inum2;
    int idiff = inum1 - inum2;
    
    float fsum = fnum1 + fnum2; 
    float fdiff = fnum1 - fnum2;
    printf("%d %d\n", isum,idiff);
    printf("%.1f %.1f", fsum, fdiff);
}

/*
main:
        push    rbp
        mov     rbp, rsp
        sub     rsp, 32
        lea     rdx, [rbp-24]
        lea     rax, [rbp-20]
        mov     rsi, rax
        mov     edi, OFFSET FLAT:.LC0
        mov     eax, 0
        call    __isoc99_scanf
        lea     rdx, [rbp-32]
        lea     rax, [rbp-28]
        mov     rsi, rax
        mov     edi, OFFSET FLAT:.LC1
        mov     eax, 0
        call    __isoc99_scanf
        mov     edx, DWORD PTR [rbp-20]
        mov     eax, DWORD PTR [rbp-24]
        add     eax, edx
        mov     DWORD PTR [rbp-4], eax
        mov     edx, DWORD PTR [rbp-20]
        mov     eax, DWORD PTR [rbp-24]
        sub     edx, eax
        mov     DWORD PTR [rbp-8], edx
        movss   xmm1, DWORD PTR [rbp-28]
        movss   xmm0, DWORD PTR [rbp-32]
        addss   xmm0, xmm1
        movss   DWORD PTR [rbp-12], xmm0
        movss   xmm0, DWORD PTR [rbp-28]
        movss   xmm1, DWORD PTR [rbp-32]
        subss   xmm0, xmm1
        movss   DWORD PTR [rbp-16], xmm0
        mov     edx, DWORD PTR [rbp-8]
        mov     eax, DWORD PTR [rbp-4]
        mov     esi, eax
        mov     edi, OFFSET FLAT:.LC2
        mov     eax, 0
        call    printf
        pxor    xmm0, xmm0
        cvtss2sd        xmm0, DWORD PTR [rbp-16]
        pxor    xmm2, xmm2
        cvtss2sd        xmm2, DWORD PTR [rbp-12]
        movq    rax, xmm2
        movapd  xmm1, xmm0
        movq    xmm0, rax
        mov     edi, OFFSET FLAT:.LC3
        mov     eax, 2
        call    printf
        mov     eax, 0
        leave
        ret


*/

//inum add/sub
/*
        mov     edx, DWORD PTR [rbp-20]
        mov     eax, DWORD PTR [rbp-24]
        add     eax, edx
        mov     DWORD PTR [rbp-4], eax
        mov     edx, DWORD PTR [rbp-20]
        mov     eax, DWORD PTR [rbp-24]
        sub     edx, eax
        mov     DWORD PTR [rbp-8], edx

*/

// fnum add/sub
/*
        movss   xmm1, DWORD PTR [rbp-28]
        movss   xmm0, DWORD PTR [rbp-32]
        addss   xmm0, xmm1
        movss   DWORD PTR [rbp-12], xmm0
        movss   xmm0, DWORD PTR [rbp-28]
        movss   xmm1, DWORD PTR [rbp-32]
        subss   xmm0, xmm1
        movss   DWORD PTR [rbp-16], xmm0
*/


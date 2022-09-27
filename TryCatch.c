// So sánh 2 mảng dùng TryCatch
#include <stdio.h>
#include <setjmp.h>
jmp_buf jmp;
int val;
#define TRY if((val = setjmp(jmp)) == 0)
#define CATCH(num) else if (val == num)
#define THROW(num) longjmp(jmp,num)

void EqualArr (char A[], char B[]){
    for (int i = 0; i <sizeof(A); i++){
        if(A[i] != B[i]){
            THROW (1);
        }
        if (A[i] == B[i] ){
            THROW (2);
        }
    }
}




int main (){

    TRY {
         MyStr1[100], MyStr2[100];
        printf ("\nNhap vao chuoi 1");
        scanf ("%s",MyStr1 );
        printf ("\nNhap vao chuoi 2");
        scanf ("%s",MyStr2);
        EqualArr (MyStr1, MyStr2);
    }
    CATCH(1) {
        printf (" 2 chuoi Khac nhau");
    }
    CATCH(2){
        printf (" 2 chuoi giong nhau");
    }
}

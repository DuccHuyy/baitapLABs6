#include <stdio.h>
 
int main(){
    int n;
    printf("Nhap so nguyen n:");
    scanf("%d",&n);
    int s = 0, tmp;
    while(n > 0){
        tmp = n % 10;
        s = s * 10 + tmp;
        n = n / 10;
    }
    printf("so dao nguoc cua n: %d", s);
}
 

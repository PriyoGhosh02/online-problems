#include<stdio.h>
int main(){
int n;
printf("Enter the multiply number: ");
scanf("%d", &n);
multiplication(n);

}
void multiplication(int n){
if(n>=1){
    for(int i=1;i<=10;i++){
            int multi=n*i;
        printf("%d x %d=%d\n", n,i,multi);
    }
}
}

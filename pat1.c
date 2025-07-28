#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    
    char ch = 65;
    for( i=1;i<=n;i++){
        ch = 65;
        for( j=1;j<=i; j++){
            printf(" %d * %c *", j,ch);
            
            ch++;
            
        }
        
        printf("\b \n");
    }
}

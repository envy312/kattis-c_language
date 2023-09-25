#include <stdio.h>
int main(){
    int n,l;
    int sum=0;
    scanf("%d", &n);
    for (int i=1; i<= n; i++){
        scanf("%d",&l);
        sum += l;
        sum = sum - 1;
    }
    printf("%d", sum+1);
    return 0;
}
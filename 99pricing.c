#include <stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  int q= n/100;
  int r = n%100;
  int price;
  if (r>= 49){
  price = (q *100) + 99;}
   
  else if (q>0 && r<49){
    price = (q *100) -1;
   } 
   else if (q==0){
price = 99;
   }
 
 printf("%d",price);
  
  return 0;
}

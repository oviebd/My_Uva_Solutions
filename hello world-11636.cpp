#include<stdio.h>
main(){
int i,j,a,b,c;
for(i=1; ;i++){
scanf("%d",&a);
if(a>=0){
c=0,b=1;
while(b<a){
c++;
b=2*b;
}
printf("Case %d: %d\n",i,c);
}
else break;
}
return 0;
}

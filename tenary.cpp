#include<stdio.h>
main(){
int t[1000],d,i,j,l;
for(i=0;i<100;i++){
    scanf("%d",&d);
    if(d<0)break;
    else {
        l=0;
        for(j=0;;j++){
  t[j]=d%3;
  d=(d-t[j])/3;
  if(d==0)break;
  else l++;

  }
for(j=l;j>=0;j--){
printf("%d",t[j]);
}
printf("\n");
}
}
return 0;
}

#include<stdio.h>
#include<string.h>
main(){
int t,d=0,a=0;
char ch[20];
scanf("%d",&t);
while (t--){
scanf("%s",ch);
if(strcmp("donate",ch)==0){
scanf("%d",&d);
a=d+a;
}
else printf("%d\n",a);
}
return 0;

}

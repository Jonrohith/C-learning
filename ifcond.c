#include<stdio.h>
int main(){
int score;
printf("Enter your score:");
scanf("%d",&score);
if (score>=50){
    printf("You Passed, Hurrah!");
}
else {
    printf("You Failed, Try again.");
}
return 0;
}

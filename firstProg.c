#include<stdio.h>
int main (void) {
float data; float answer;
int choice;
printf("1. GB to MB\n");
printf("2. MB to GB\n");
printf("Enter a data: ");
scanf("%f", &data);
printf("Enter choice: ");
scanf("%d", &choice);
if(choice==1)
{
answer=1024*data;
}
else if(choice==2)
{
answer=data/1024;
}
printf("The result is %f", answer);
}

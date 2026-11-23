//write a C program to take inpiuts from user and display it to the screen as an array
# include<stdio.h>
int main(){
    int i,n;
printf("enter the size of an array \n");
scanf("%d", &n);
int array[n];
printf("enter array elements \n");
for(i=0; i<n; i++){
    scanf("%d",&array[i]);}
    printf("\n input elements are.... \n");
    for(i=0; i<n; i++){
    printf("%d \n", array[i]);}
}

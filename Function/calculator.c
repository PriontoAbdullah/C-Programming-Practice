#include<stdio.h>
float add(float a,float b);
float sub(float a,float b);
float multi(float a,float b);
float div(float a,float b);

int main(){
float a,b;
printf("Enter two value:\n");
scanf("%f%f",&a,&b);
float add_r=add(a, b);
float sub_r=sub( a,b);
float multi_r=multi(a,b);
float div_r=div(a, b);
printf("Add: %.2f\nSubtract: %.2f\nMultiply: %.2f\nDivide: %.2f\n",add_r,sub_r,multi_r,div_r);
return 0;
}

float add(float a,float b){
return a+b;
}
float sub(float a,float b){
return a-b;
}
float multi(float a,float b){
return a*b;
}
float div(float a,float b){
return a/b;
}

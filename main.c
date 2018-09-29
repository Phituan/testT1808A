#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <mem.h>

double perimeter(double a, double b, double c){
    double  p =  (a+b+c)/2;
    return p;
}

double area(double a, double b, double c){
    double p = perimeter(a,b,b);
    return sqrt(p*(p-a)*(p-b)*(p-c));
}
int main(){
    double a,b,c;
    printf("moi ban nhap so thu nhat:\n");
    scanf("%lf", &a);
    printf("moi ban nhap so thu hai:\n");
    scanf("%lf", &b);
    printf("moi ban nhap so thu ba:\n");
    scanf("%lf", &c);
    double result = area(a,b,c);
    printf("%lf", result);
}
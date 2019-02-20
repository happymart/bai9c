/* 
 * File:   main.c
 * Author: Administrator
 *
 * Created on February 20, 2019, 8:37 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
 * 
 */
int main(int argc, char** argv) 
{
    float a , b, c, delta;
    printf("\n Nhập giá trị a#0, b, c :");
    scanf("%f%f%f", a, b, c);
    delta=b*b-4*a*c;
    if(delta<0) printf("pt vô nghiệm\n");
    else if(delta==0) printf("pt có nghiệm kép x1=x2=%f \n ", -b/(2*a));
    else printf(" pt có 2 nghiệm x1=%f \n, x2=%f\n \n ", 
            (-b+sqrt(delta))/(2*a), (-b-sqrt(delta))/(2*a));
    return (EXIT_SUCCESS);
}


#include <stdio.h>
#include "dos.h"
#include "tres.h"

int suma (int a, int b){
    int c;

    c=a+b;

    return c;

}


int multsum2(int a, int b){
    int c,d;
    c=suma (a,b);
    d=mult(a, b);

    return c+d;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*int main(){
    float a, b,c;
    float soma, dif;


    for(c= 0; c< 2; c++)   
    {
    printf(" ", a, b);
    scanf("%f %f",&a, &b);
    soma = a + b;
    dif = a - b;
    
        printf("%.1f %.1f\n", soma, dif);
    }

    return 0;
}*/

int main(){

        int c,d;
        float n,m;
            scanf("%d %d %f %f", &c, &d, &n, &m);
           

        int soma, dif;
                soma = c + d;
                dif = c - d;
        printf(" %d %d \n", soma, dif);

        float ads, sub;
                ads = n + m;
                sub = n - m;
        printf(" %.1f %.1f\n", ads, sub);



    return 0;
}
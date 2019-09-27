#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.

    char ch;
    int i;
    long l;
    double d;
    float f;

    scanf("%d %ld %c %f %lf",&i, &l, &ch, &f, &d);
    // scanf("%ld",&l);
    // scanf("%c",&ch);
    // scanf("%f",&f);
    // scanf("%lf", &d);

    printf("%i \n",i);
    printf("%ld \n",l);
    printf("%c \n",ch);
    printf("%.03f \n",f);
    printf("%.09lf \n", d);

    // scanf("%i %li %c %f %lf",&i,&l,&ch,&f,&d);
    // printf("%i\n%li\n%c\n%.03f\n%.09lf\n",i,l,ch,f,d);


    return 0;
}

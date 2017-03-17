#include <iostream>

int main() {
    float a;
    float b;
    float i;
    char c;
    scanf("%f",&a);
    scanf("%c",&c);
    scanf("%f",&b);
    switch(c){
        case'+':
            i=a+b;
            printf("\n%f",i );
            break;
        case'-':
            i=a-b;
            printf("\n%f",i );
            break;
        case'*':
            i=a*b;
            printf("\n%f",i );
            break;
        case':':
            i=a/b;
            printf("\n%f",i );
            break;
        default:
            printf("error");
            break;
    };
    return 0;
}
#include <stdio.h>
int main(){
    float A;// A stand for Area
    float P;// P stand for Perimeter
    printf("Enter Langht of Ractangle:");
    scanf("%f",&A);
    printf("Enter Brighthe of Ractangle: ");
    scanf("%f",&P);
    if (A>P)
    {
        printf("Area is Grater Than Premiter");
    }
    if (P>A)
    {
        printf("Area is NOt Grater then Primiter");
    }
    if (A==P)
    {
        printf("Area is Equeel To Premiter");
    }
    
    
    
    

    return 0;
}
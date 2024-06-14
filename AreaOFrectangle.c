#include <stdio.h>
int main(){
    float L;// A stand for langht
    
    printf("Enter Langht of Ractangle:");
    scanf("%f",&L);
    float B;// P stand for Brighth
    printf("Enter Brighthe of Ractangle: ");
    scanf("%f",&B);
    float A = L*B;
    float P = 2 * (L+B);
    if (A>P)
    {
        printf("Area is Grater Than Premiter");
    }

    else {

    
        printf("Area is NOt Grater then Primiter");
    }
   
      
    
    
    
    
    

    return 0;
}
//         ( Making A Program For Profit/Loss Counter )
#include<stdio.h>
int main(){
    int sp;
    printf("Enter Selling Price :");
    scanf("%d",&sp);
    int cp;
    printf("Enter Cost Price:");
    scanf("%d",&cp);
    if (sp>cp)
    {
        printf("Profit ");
    }
    if (sp<cp)
    {
        printf("Loss");
    }
    if (sp==cp)
{
    printf("No Profit / No Loss");
}
    
    
    return 0;
}
#include <stdio.h>

int main()
{
    int input = 0;
    int r = 0;
    int s = 0;

    scanf("%d", &input);

    r = input / 10;
    s = input % 10;

    switch(s){
        case 1 : 
            printf("Faint signals, barely perceptible,");
            break;
        case 2 : 
            printf("Very weak signals,");
            break;
        case 3 : 
            printf("Weak signals,");
            break;
        case 4 : 
            printf("Fair signals,");
            break;
        case 5 : 
            printf("Fairly good signals,");
            break;
        case 6 : 
            printf("Good signals,");
            break;
        case 7 : 
            printf("Moderately strong signals,");
            break;
        case 8 : 
            printf("Strong signals,");
            break;
        case 9 : 
            printf("Extremely strong signals,");
            break;
        default:
            printf("你输错了\n");
            break;
    }

    printf(" ");

    switch(r){

        case 1 : 
            printf("unreadable.\n");
            break;
        case 2 : 
            printf("barely readable, occasional words distinguishable.\n");
            break;
        case 3 : 
            printf("readable with considerable difficulty.\n");
            break;
        case 4 : 
            printf("readable with practically no difficulty.\n");
            break;
        case 5 : 
            printf("perfectly readable.\n");
            break;
        default:
        printf("你输错了\n");
        break;
    }
    
    

    return 0;
}
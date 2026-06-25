#include<stdio.h>
#include<math.h>
int main(){
    int choice;
    double num1,num2;
    char repeat;
    printf("=.=.= CALCULATOR =.=.=\n");
    printf("=====================\n");
    do{
        printf("which OPERATION you want to do?\n");
        printf("1. Addition ( press 1 )\n2. Subtraction ( press 2 )\n3. Multiplication ( press 3 )\n4. Division ( press 4 )\n5. Square Root ( press 5 )\n6. Power ( press 6 )\n");
        printf("=====================\n");
        printf("\n");
        printf("Enter choice: ");
        scanf("%d",&choice);
        if(choice==1||choice==2||choice==3||choice==4||choice==6){
            printf("Enter first number: ");
            scanf("%lf",&num1);
            printf("Enter second number: ");
            scanf("%lf",&num2);
        }
        else if(choice==5){
            printf("Enter number: ");
            scanf("%lf",&num1);
        }
        switch(choice){
            case 1:
                printf("Result: %.2lf\n\n",num1+num2);
                break;
            case 2:
                printf("Result: %.2lf\n\n",num1-num2);
                break;
            case 3:
                printf("Result: %.2lf\n\n",num1*num2);
                break;
            case 4:
                if(num2!=0)
                    printf("Result: %.2lf\n\n",num1/num2);
                else
                    printf("Error: Division by zero is not allowed.\n\n");
                break;
            case 5:
                if(num1>=0)
                    printf("Result: %.2lf\n\n",sqrt(num1));
                else
                    printf("Error: Square root of negative number is not defined.\n\n");
                break;
            case 6:
                printf("Result: %.2lf\n\n",pow(num1,num2));
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
        printf("Do you want to perform another operation? (y/n): ");
        scanf(" %c",&repeat);
        if(repeat!='y' && repeat!='Y'){
            printf("Exiting the calculator. Goodbye!\n\n");
        }
    }while(repeat=='y'||repeat=='Y');
    return 0;
}

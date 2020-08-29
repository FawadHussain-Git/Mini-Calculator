#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include"compute.h"
#define KEY "Enter the calculator Operation you want to do:"

int main()
{
    int X=1,y;
    char Calc_oprn;

    calculator_operations();

    while(X)
    {
        printf("\n");
        printf("%s : ", KEY);

        Calc_oprn=getche();

        switch(Calc_oprn)
        {
            case '+': addition();
                      break;

            case '-': subtraction();
                      break;

            case '*': multiplication();
                      break;

            case '/': division();
                      break;

            case '?': modulus();
                      break;

            case '!': factorial();
                      break;

            case 's':
            case 'S':
                {
                    scanf("%d",&y);
                    y = (y*(22/7))/180;
                    printf("%f",sin(y));
                    break ;
                }


            case 'E':
            case 'e':
                {
                    scanf("%d",&y);
                    y = (y*(22/7))/180;
                    printf("%f",cos(y));
                    break ;
                }


            case 'T':
            case 't':
                {
                    scanf("%d",&y);
                    y = (y*(22/7))/180;
                    printf("%f",tan(y));
                    break ;
                }

            case 'W':
            case 'w':
                {
                    scanf("%d",&y);
                    y = (y*(22/7))/180;
                    printf("%f",asin(y));
                    break ;
                }

            case 'p':
            case 'P':
                {
                    scanf("%d",&y);
                    y = (y*(22/7))/180;
                    printf("%f",acos(y));
                    break ;
                }

            case 'G':
            case 'g':
                {
                    scanf("%d",&y);
                    y = (y*(22/7))/180;
                    printf("%f",atan(y));
                    break ;
                }



            case '^': power();
                      break;
            case 'm' :
            case 'M': mode();

            case 'a':
            case 'A': mean();

            case 'i':
            case 'I':transpose();

            case 'j':
            case 'J':add_sub_matrices();

            case 'o':
            case 'O':fahr();



            case 'H':
            case 'h': calculator_operations();
                      break;

            case 'Q':
            case 'q': exit(0);
                      break;
            case 'c':
            case 'C': system("cls");
                      calculator_operations();
                      break;

            default : system("cls");

    printf("\n**********You have entered unavailable option");
    printf("***********\n");
    printf("\n*****Please Enter any one of below available ");
    printf("options****\n");
                      calculator_operations();
        }

    }
return 0;
}

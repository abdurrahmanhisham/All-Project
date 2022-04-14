#include<stdio.h>
#include<math.h>
void  ADD ()
{
    FILE *file0;
    file0 = fopen("addition_test.txt","a");
    if(file0 == NULL)
    {
        printf("don't exist\n");
    }
    else
    {
        double num1, num2, total;

        printf("Enter two Numbers for subtraction -\n");
        printf("Number-1 : ");
        scanf("%lf",&num1);
        printf("Number-2 : ");
        scanf("%lf",&num2);
        total = (num1  + num2);
        printf("\n%.2lf + %.2lf = %.2lf\n",num1, num2, total);

        fprintf(file0,"%.2lf + %.2lf = %.2lf\n", num1, num2, total);

        fclose(file0);
    }
}


void SUB()
{
    FILE *file0;
    file0 = fopen("subtraction_test.txt","a");
    if(file0 == NULL)
    {
        printf("don't exist\n");
    }
    else
    {
        double num1, num2, total;

        printf("Enter two Numbers for subtraction -\n");
        printf("Number-1 : ");
        scanf("%lf",&num1);
        printf("Number-2 : ");
        scanf("%lf",&num2);
        total = (num1 - num2);
        printf("\n%.2lf - %.2lf = %.2lf\n",num1, num2, total);

        fprintf(file0,"%.2lf - %.2lf = %.2lf\n", num1, num2, total);

        fclose(file0);
    }
}

void MUL()
{
    FILE *file1;
    file1 = fopen("multiplication_test.txt","a");
    if(file1 == NULL)
    {
        printf("don't exist\n");
    }
    else
    {
        double num1, num2;
        printf("Enter two Numbers for multiply -\n");
        printf("Number-1 : ");
        scanf("%lf",&num1);
        printf("Number-2 : ");
        scanf("%lf",&num2);
        printf("\n%.2lf x %.2lf = %.2lf\n",num1, num2, (num1 * num2));

        fprintf(file1,"%.2lf x %.2lf = %.2lf\n", num1, num2, (num1 * num2));

        fclose(file1);
    }
}

void DIV()
{
    FILE *file2;
    file2 = fopen("division_test.txt","a");
    if(file2 == NULL)
    {
        printf("don't exist\n");
    }
    else
    {
        double num1, num2;

        printf("Enter two Numbers for division -\n");
        printf("Number-1 : ");
        scanf("%lf",&num1);
        printf("Number-2 : ");
        scanf("%lf",&num2);
        printf("\n%.2lf / %.2lf = %.2lf\n",num1, num2, (num1 / num2));

        fprintf(file2,"%.2lf / %.2lf = %.2lf\n", num1, num2, (num1 / num2));

        fclose(file2);
    }
}

void PER()
{
    double num1, num2;
    printf("Enter Number for percentage -\n");
    printf("Number-1 : ");
    scanf("%lf",&num1);
    printf("\n%.2lf %% = %.2lf\n",num1, num1/100);
}

void LOG()
{
    double num1, num2, result;
    printf("Enter Number for logarithm -\n");
    printf("Number-1 : ");
    scanf("%lf",&num1);
    result = log(num1);
    printf("\nThe logarithm of %.2lf is %.2lf\n",num1,result);
}

void TRIG()
{
    double degree;
    int v;
    printf("Enter your angle value in degree : ");
    scanf("%lf", &degree);

    double radian = degree * (M_PI / 180);

    printf("\n         <keywords>\n");
    printf("----------------------------------\n");
    printf("| trigonometric functions | keys |\n");
    printf("----------------------------------\n");
    printf("|           sin           |   1  |\n");
    printf("|           cos           |   2  |\n");
    printf("|           tan           |   3  |\n");
    printf("|          cosec          |   4  |\n");
    printf("|           sec           |   5  |\n");
    printf("|           cot           |   6  |\n");
    printf("----------------------------------\n");
swi:
    printf("Choose any key - ");
    scanf("%d",&v);
    switch(v){
        case 1:
    printf("\nsin of %.3lf value is %.3lf \n", degree, sin(radian));
    break;
        case 2:
    printf("\ncos of %.3lf value is %.3lf \n", degree, cos(radian));
    break;
        case 3:
    printf("\ntan of %.3lf value is %.3lf \n", degree, tan(radian));
    break;
        case 4:
    printf("\ncosec of %.3lf value is %.3lf \n", degree, (1/sin(radian)));
    break;
        case 5:
    printf("\nsec of %.3lf value is %.3lf \n", degree, (1/cos(radian)));
    break;
        case 6:
    printf("\ncot value of %.3lf is %.3lf \n", degree, (1/tan(radian)));
    break;
        default:
            printf("Invalid argument.\n");
            goto swi;
    }
}

void SQR()
{
    double x, y, total;
    printf("Enter the base : ");
    scanf("%lf",&x);
    printf("Enter  power : ");
    scanf("%lf",&y);
    total=pow(x,y);
    printf("\n%.2lf ^ %.2lf = %.2lf\n\n", x, y, total);
}
void SQRRT()
{
    double x, total;
    printf("Enter the base : ");
    scanf("%lf",&x);
    total=sqrt(x);
    printf("\nSquare root of %.2lf = %.2lf\n\n",x,total);
}

void EQUSOL()
{
    float a,b,c,d,root1,root2,real,imag;
    printf("\nTo find the roots of a quadratic equation, Enter coefficients - \n");
    printf("First coefficient : ");
    scanf("%f",&a);
    printf("Second coefficient : ");
    scanf("%f",&b);
    printf("Third coefficient : ");
    scanf("%f",&c);
    d=b*b-4*a*c;
    if (d>0)
    {
        root1= (-b+sqrt(d))/(2*a);
        root2= (-b-sqrt(d))/(2*a);
        printf("\nroot-1 = %.2f and root-2 = %.2f", root1, root2);
    }
    else if (d==0)
    {
        root1=root2=-b/(2*a);
        printf("\nroot-1 = root-2 = %.2f", root1,root2);
    }
    else
    {
        real=-b/(2*a);
        imag=sqrt(-d)/(2*a);
        printf("\nroot-1 =% .2f+%.2fi and root-2 = %.2f-%.2fi", real,imag,real,imag);
    }
}


int main()
{
    int i,press;
    char str;
    printf("\t\t\t\t===================================================\n");
    printf("\t\t\t\t||              C A L C U L A T O R              ||\n");
    printf("\t\t\t\t===================================================\n\n");
    printf("\t\t\t\t===================================================\n");
    printf("\t\t\t\t|| Title            : Lab Project                ||\n");
    printf("\t\t\t\t|| Course Code      : CSE-122,123                ||\n");
    printf("\t\t\t\t|| Course Teacher   : Sheikh Rashed Haider Noori ||\n");
    printf("\t\t\t\t|| Course Assistant : Dewhan Rakin Ahamed            ||\n");
    printf("\t\t\t\t===================================================\n");
    printf("\n");
    printf("\t\t\t\t\t      ======================\n");
    printf("\t\t\t\t\t      |    TEAM MEMBERS    |\n");
    printf("\t\t\t\t\t      ======================\n");
    printf("\t\t\t     ------------------------------------------------------\n");
    printf("\t\t\t     |       Student Name        |        Student I'd     |\n");
    printf("\t\t\t     ------------------------------------------------------\n");
    printf("\t\t\t     | 1.   Md. Anik Ahmed Rifat  - 213-15-4267    |\n");
    printf("\t\t\t     | 2.   Walid Hassan Khan    -  213-15-4275    |\n");
    printf("\t\t\t     | 3.   Sarmin Rahman Mim  -    213-15-4294    |\n");
    printf("\t\t\t     | 4.   Tanjila Akter       -   213-15-4334    |\n");
    printf("\t\t\t     ------------------------------------------------------\n");
press:
    while(1)
    {

        printf("\n\n");
        printf("--------------------------------------------------\n");
        printf("| Press 1 for Calculator       Press 0 for Exit  |\n");
        printf("--------------------------------------------------\n\n");
        printf("Press : ");
        scanf("%d",&press);

        if(press==0)
        {
            break;
        }
        else if(press==1)
        {
calculator:
            printf("========================================\n");
            printf("|  Choice  |     Calculator Type       |\n");
            printf("|--------------------------------------|\n");
            printf("|    1     |    Basic Calculator       |\n");
            printf("|                                      |\n");
            printf("|    2     |    Scientific Calculator  |\n");
            printf("========================================\n");
            printf("\nChoose 1 or 2 : ");
            scanf("%d",&i);
            if(i==1)
            {
                printf(" ---------------------------\n");
                printf("( Basic Calculator Selected )\n");
                printf(" ---------------------------\n");
sw:
                getchar();
                printf("\nChoose Operator : ");
                scanf("%c",&str);
                if(str=='+'){
                        printf(" --------------------------------\n");
                        printf("(  Additional Operator Selected  )\n");
                        printf(" --------------------------------\n");
                        ADD();
                }
                else if(str=='-'){
                        printf(" ---------------------------------\n");
                        printf("(  Subtraction Operator Selected  )\n");
                        printf(" ---------------------------------\n");
                        SUB();
                }
                else if(str=='*'){
                        printf(" ------------------------------------\n");
                        printf("(  Multiplication Operator Selected  )\n");
                        printf(" ------------------------------------\n");
                        MUL();
                }
                else if(str=='/'){
                        printf(" --------------------------------\n");
                        printf("(  Divisional Operator Selected  )\n");
                        printf(" --------------------------------\n");
                        DIV();
                }
                else if(str=='%'){
                        printf(" --------------------------------\n");
                        printf("(  Percentage Operator Selected  )\n");
                        printf(" --------------------------------\n");
                        PER();
                }
                else
                {
                    printf("\nInvalid operator.\n");
                    getchar();
                    getchar();
                    goto sw;
                    getchar();

                }
            }
            else if(i==2)
            {
                printf(" --------------------------------\n");
                printf("( Scientific Calculator Selected )\n");
                printf(" --------------------------------\n\n");
                getchar();
ssw:
                printf("\n       <keywords>\n");
                printf("----------------------------\n");
                printf("| operator        |   keys |\n");
                printf("----------------------------\n");
                printf("| Logarithm       |     l  |\n");
                printf("| Trigonometry    |     t  |\n");
                printf("| Square          |     s  |\n");
                printf("| Square Root     |     q  |\n");
                printf("| Equation Solver |     e  |\n");
                printf("----------------------------\n\n");
                printf("\nChoose Operator : ");
                scanf("%c",&str);
                if(str=='l')
                {
                    printf(" ---------------------------\n");
                    printf("(     Logarithm selected    )\n");
                    printf(" ---------------------------\n");
                    LOG();
                }
                else if(str=='t')
                {
                    printf(" ---------------------------\n");
                    printf("(   Trigonometry selected    )\n");
                    printf(" ---------------------------\n");
                    TRIG();
                }
                else if(str=='s')
                {
                    printf(" ---------------------------\n");
                    printf("(      Square selected      )\n");
                    printf(" ---------------------------\n");
                    SQR();
                }
                else if(str=='q')
                {
                    printf(" ---------------------------\n");
                    printf("(   Square Root selected    )\n");
                    printf(" ---------------------------\n");
                    SQRRT();
                }
                else if(str=='e')
                {
                    printf(" ---------------------------\n");
                    printf("( Equation Solver selected  )\n");
                    printf(" ---------------------------\n");
                    EQUSOL();
                }
                else
                {
                    printf("\nInvalid operator.\n");
                    getchar();
                    goto ssw;
                    getchar();
                }
            }
            else if(i>2)
            {

                printf("\nWrong Choice\n\nChoose again-\n");
                goto calculator;
            }
            else if(i<0)
            {

                printf("\nWrong Choice\n\nChoose again-\n\n");
                goto calculator;
            }
        }
        else
        {
            printf("Invalid Input.\n");
            goto press;
        }
    }

    return 0;
}

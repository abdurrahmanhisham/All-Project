#include<stdio.h>

int menu(int n)
{
    printf("              ********************---------------------------**********************\n");
    printf("                                        Available Tasks\n");
    printf("              ********************---------------------------**********************\n");
    printf("              *********************************************************************\n");

    printf("                                     1.  Binary to Octal\n");
    printf("                                     2.  Binary to Decimal\n");
    printf("                                     3.  Binary to Hexadecimal\n");
    printf("                                     4.  Octal to Binary\n");
    printf("                                     5.  Octal to Decimal\n");
    printf("                                     6.  Octal to Hexadecimal\n");
    printf("                                     7.  Decimal to Binary\n");
    printf("                                     8.  Decimal to Octal\n");
    printf("                                     9.  Decimal to Hexadecimal\n");
    printf("                                    10.  Hexadecimal to Binary\n");
    printf("                                    11.  Hexadecimal to Octal\n");
    printf("                                    12.  Hexadecimal to Decimal\n");
    printf("                                     0.  Exit\n");
    printf("              *********************************************************************\n\n");
    printf("              Choice :");

    int o;
    scanf("%d",&o);

    if(o==1)
        b_o();

    else if(o==2)
        b_d();

    else if(o==3)
        b_h();

    else if(o==4)
        o_b();

    /*else if(o==5)
        o_d();
        if(o=0)
            return o;
    else if(o==6)
        o_h();
        if(o=0)
            return o;
    else if(o==7)
        d_b();
        if(o=0)
            return o;
    else if(o==8)
        d_o();
        if(o=0)
            return o;
    else if(o==9)
        d_h();
        if(o=0)
            return o;
    else if(o==10)
        h_b();
        if(o=0)
            return o;
    else if(o==11)
        h_o();
        if(o=0)
            return o;
    else if(o==12)
        h_d();*/
    else if(o==0)
        return 0;

    else if(o<1 || o>12)
        printf("                   Invalid Input !\n");

    printf("              *********************************************************************\n");
    printf("              1. Main Menu\n");
    printf("              0. Exit\n");
    printf("              *********************************************************************\n");
    printf("              ");

    scanf("%d",&n);

    return n;
}

void b_o()
{

    long int bin, oct=0,r,i=1;
    printf("              Enter a binary number : ");
    scanf("%ld",&bin);
    int b=bin;
    while(bin!=0)
    {
        r=bin%10;
        oct=oct+r*i;
        i=i*2;
        bin=bin/10;
    }
    printf("              Binary to Octal:%ld(B)=%lo(O)\n\n\n",b,oct);
}


void b_d()
{
    long int bin, dec=0,r,i=1;
    printf("Enter a binary number : ");
    scanf("%ld",&bin);
    int b=bin;
    while(bin!=0)
    {
        r=bin%10;
        dec=dec+r*i;
        i=i*2;
        bin=bin/10;
    }
    printf("           Binary to decimal:%ld(B)=%ld(d)\n",b,dec);
    return 0;

}
void b_h()
{
    long int bin, hex=0,r,i=1;
    printf("Enter a binary number : ");
    scanf("%ld",&bin);
    int b=bin;
    while(bin!=0)
    {
        r=bin%10;
        hex=hex+r*i;
        i=i*2;
        bin=bin/10;
    }
    printf("         Binary to Hexadecimal:%ld(B)=%lhx(hx)",b,hex);
    return 0;
}

void o_b()
{
    char octalnum[50];
    long i = 0;

    printf("Enter any octal number: ");
    scanf("%s", octalnum);
    printf("Equivalent binary value: ");
    while (octalnum[i])
    {
        switch (octalnum[i])
        {
        case '0':
            printf("000");
            break;
        case '1':
            printf("001");
            break;
        case '2':
            printf("010");
            break;
        case '3':
            printf("011");
            break;
        case '4':
            printf("100");
            break;
        case '5':
            printf("101");
            break;
        case '6':
            printf("110");
            break;
        case '7':
            printf("111");
            break;
        default:
            printf("\n Invalid octal digit %c ", octalnum[i]);
            return 0;
        }
        i++;
    }
    return 0;
}

/*void o_d()
void o_h()
void d_b()
void d_o()
void d_h()
void h_b(){
}
void h_o()
void h_d()*/

int main()
{
    int o=1, n;

    while(n=1)
    {
        n = menu(n);
        if(n==0)
            return 0;
    }
    return 0;
}

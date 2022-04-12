#include<stdio.h>
int main ()
{
    int number,n,exit;
    float a[25]= {.75,1.15,6.0389,12.9405,13.57,15.5286,18.9794,27.6064,28.4691,33.63,47.4485,50.8993,57.94,62.14,67.38,85.97,93.88,98.75,103.524,117.01,117.3272,121.60,223.29,228.6155,284.26 };
    int *p=&exit;

    double total;

    printf("----------------------------------------------------------------------------------------------\n");
    printf("                           *** Currency Converter ***\n");
    printf("----------------------------------------------------------------------------------------------\n");

    printf("\n");

    printf("Hello Users,\n\nChoose any  Currency type from given below to convert into *Bangladeshi TAKA(BDT)*\n\n");
    printf("**********************************************************************************************\n");

    printf("\n 1)Japanese Yen\n 2)Indian Rupee (INR)\n 3)Turkish Lira (TRY)\n 4)Croatian Kuna (HRK)\n 5)Chinese Yuen (CNY)\n 6)Brazilian Real (BRL)\n 7)Libyan Dinar (LYD)\n 8)Israeili Shekel (ILS)\n 9)Georgian Lari (GEL)\n 10)Belarusian Ruble (BYN)\n 11)Dutch Guilder (ANG)\n 12)Azerbaijan Manat (AZN)\n 13)New Zealand Dollar\n 14)Australian Dollar\n 15)Canadian Dollar\n 16)United State Dollar (USD)\n 17)Swiss Franc (CHF)\n 18)Euro (EUR) \n 19)Cayman Island Dollar(KYD) \n 20)British Pound (GBP)\n 21)Gibraltar Pound (GIP) \n 22)Jordanian Dinar (JOD)\n 23)Omani Rial \n 24)Bahrain Dinar (BHD) \n 25)Kuwati Dinar \n");
    printf("\n");
    printf("\n           ||*************************************** * OOO * ******************************************||\n");

    while (exit!=1)
    {
        printf("\n                      Enter The Number Of Currency Type You Want to Convert : ");
        scanf("%d",&number);
        if(number > 25)
        {
            printf(" \a\n                             Sorry..!!!\n\n      This Type Of Currency is not available right now.\n \n               Wait for further Update..\n");
            printf("\n\n                                     THANK YOU\n\n");
            printf("\n            |**************************************** * OOO * *******************************************|\n");
            break;
        }

        if(number == 1)

            printf("\n\t\t\t    You have chosen Japanese Yuen\n"); // printing Currency Name


        else if (number==2)
            printf("\n\t\t\t    You have chosen Indian Rupee (INR)\n");
        else if(number==3)
            printf("\n\t\t\t    You have chosen Turkish Lira (TRY) \n");
        else if(number==4)
            printf("\n\t\t\t    You have chosen Croatian Kuna (HRK) \n");
        else if(number==5)
            printf("\n\t\t\t    You have chosen Chinese Yuen (CNY) \n");
        else if(number==6)
            printf("\n\t\t\t    You have chosen Brazilian Real (BRL) \n");
        else if(number==7)
            printf("\n\t\t\t    You have chosen Libyan Dinar (LYD)  \n");
        else if(number==8)
            printf("\n\t\t\t    You have chosen Israeili Shekel (ILS) \n");
        else if(number==9)
            printf("\n\t\t\t   You have chosen Georgian Lari (GEL) \n");
        else if(number==10)
            printf("\n\t\t\t   You have chosen Belarusian Ruble (BYN) \n");
        else if(number==11)
            printf("\n\t\t\t   You have chosen Dutch Guilder (ANG) \n");
        else if(number==12)
            printf("\n\t\t\t   You have chosen Azerbaijan Manat (AZN) \n");
        else if(number==13)
            printf("\n\t\t\t   You have chosen New Zealand Dollar \n");
        else if(number==14)
            printf("\n\t\t\t   You have chosen Australian Dollar \n");
        else if(number==15)
            printf("\n\t\t\t   You have chosen Canadian Dollar \n");
        else if(number==16)
            printf("\n\t\t\t   You have chosen United State Dollar (USD) \n");
        else if(number==17)
            printf("\n\t\t\t   You have chosen Swiss Franc (CHF) \n");
        else if(number==18)
            printf("\n\t\t\t   You have chosen Euro (EUR) \n");
        else if(number==19)
            printf("\n\t\t\t   You have chosen Cayman Island Dollar(KYD) \n");
        else if(number==20)
            printf("\n\t\t\t   You have chosen British Pound (GBP) \n");

        else if(number == 21)
            printf("\n\t\t\t   You have chosen  Gibraltar Pound  \n");

        else if(number == 22)
            printf("\n\t\t\t   You have chosen  Jordanian Dinar\n");

        else if(number == 23)
            printf("\n\t\t\t   You have chosen Omani Rial \n");

        else if(number == 24)
            printf("\n\t\t\t   You have chosen Bahraini Dinar \n");

        else if(number == 25)
            printf("\n\t\t\t   You have chosen Kuwati Dinar \n");




        printf("\n\n                           How Much Money You wanted to Convert into BDT : ");
        scanf("%d",&n);


        printf("\n                    ||**************************************************************************||\n");



        printf(" \n                       You Want to Convert type %d Currency  And the Amount of Currency is : %d  \n",number,n);

        switch (number)
        {
        case 1:
            total = n*a[0];
            printf("\n                                    Japanese Yan %d = %.3f Taka(BDT)\n",n,total);
            printf("\n                                          ********** ooo **********\n");
            break;

        case 2:
            total = n*a[1];
            printf("\n                                    Indian Rupee (INR) %d = %.3f Taka(BDT)\n",n,total);
             printf("\n                                          ********** ooo **********\n");
            break;

        case 3:
         total = n*a[2];
            printf("\n                                     Turkish Lira (TRY) %d = %.3f Taka(BDT)\n",n,total);
            printf("\n                                          ********** ooo **********\n");
            break ;


        case 4:
            total = n*a[3];
            printf("\n                                     Croatian Kuna (HRK) %d = %.3f Taka(BDT)\n",n,total);
             printf("\n                                          ********** ooo **********\n");
            break ;


        case 5:
          total = n*a[4];
            printf("\n                                     Chinese Yuen(CNY) %d = %.3f Taka(BDT)\n",n,total);
          printf("\n                                          ********** ooo **********\n");
            break;

        case 6:
           total = n*a[5];
            printf("\n                                     Brazilian Real (BRL) %d = %.3f Taka(BDT)\n",n,total);
             printf("\n                                          ********** ooo **********\n");
            break ;

        case 7:
           total = n*a[6];
            printf("\n                                     Libyan Dinar (LYD) %d = %.3f Taka(BDT)\n",n,total);
            printf("\n                                          ********** ooo **********\n");
            break ;

        case 8:
           total = n*a[7];
            printf("\n                                     Israeili Shekel (ILS) %d = %.3f Taka(BDT)\n",n,total);
             printf("\n                                          ********** ooo **********\n");
            break ;



        case 9:
           total = n*a[8];
            printf("\n                                     Georgian Lari (GEL) %d = %.3f Taka(BDT)\n",n,total);
            printf("\n                                          ********** ooo **********\n");
            break ;


        case 10:
          total = n*a[9];
            printf("\n                                     Belarusian Ruble (BYN) %d = %.3f Taka(BDT)\n",n,total);
           printf("\n                                          ********** ooo **********\n");
            break ;

        case 11:
           total = n*a[10];
            printf("\n                                     Dutch Guilder (ANG) %d = %.3f Taka(BDT)\n",n,total);
           printf("\n                                          ********** ooo **********\n");
            break ;


        case 12:
          total = n*a[11];
            printf("\n                                     Azerbaijan Manat (AZN) %d = %.3f Taka(BDT)\n",n,total);
           printf("\n                                          ********** ooo **********\n");
            break ;

        case 13:
           total = n*a[12];
            printf("\n                                     New Zealand Dollar %d = %.3f Taka(BDT)\n",n,total);
              printf("\n                                          ********** ooo **********\n");
            break;


        case 14:
          total = n*a[13];
            printf("\n                                     Australian Dollar %d = %.3f Taka(BDT)\n",n,total);
           printf("\n                                          ********** ooo **********\n");
            break ;


        case 15:
          total = n*a[14];
            printf("\n                                     Canadian Dollar %d = %.3f Taka(BDT)\n",n,total);
              printf("\n                                          ********** ooo **********\n");
            break;


        case 16:
total = n*a[15];
            printf("\n                                     USD %d = %.3f Taka(BDT)\n",n,total);
               printf("\n                                          ********** ooo **********\n");
            break;


        case 17:
            total = n*a[16];
            printf("\n                                     Swiss Franc (CHF) %d = %.3f Taka(BDT)\n",n,total);
           printf("\n                                          ********** ooo **********\n");
            break;
        case 18:
           total = n*a[17];
            printf("\n                                     Euro %d = %.3f Taka(BDT)\n",n,total);
             printf("\n                                          ********** ooo **********\n");
            break;
        case 19:
           total = n*a[18];
            printf("\n                                     Cayman Islands Dollar (KYD) %d = %.3f Taka(BDT)\n",n,total);
             printf("\n                                          ********** ooo **********\n");
            break ;


        case 20:
            total = n*a[19];
            printf("\n                                     British Pound %d = %.3f Taka(BDT)\n",n,total);
             printf("\n                                          ********** ooo **********\n");
            break;


        case 21:
            total = n*a[20];
            printf("\n                                     Gibraltar Pound (GIP) %d = %.3f Taka(BDT)\n",n,total);
             printf("\n                                          ********** ooo **********\n");
            break ;


        case 22:
            total = n*a[21];
            printf("\n                                     Jordanian Dinar (JOD)  %d = %.3f Taka(BDT)\n",n,total);
           printf("\n                                          ********** ooo **********\n");
            break ;


        case 23:
            total = n*a[22];
            printf("\n                                     Omani Rial %d = %.3f Taka(BDT)\n",n,total);
              printf("\n                                          ********** ooo **********\n");
            break;
       case 24:
           total = n*a[23];
            printf("\n                                     Bahraini Dinar (BWD) %d = %.3f Taka(BDT)\n",n,total);
              printf("\n                                          ********** ooo **********\n");
            break ;


        case 25:
          total = n*a[24];
            printf("\n                                     Kuwati Dinar %d = %.3f Taka(BDT)\n",n,total);
              printf("\n                                          ********** ooo **********\n");
            break;


        }


        printf("\n\n\t           If you want to EXIT press (yes=1/no=2): \n");
        scanf("%d",*p);
        if(*p == 1)
        {
            printf(" \n\n                                            *** Thanks For Using *** \a\n\n                   \n");
               printf("\n           ||*************************************** * OOO * ******************************************||\n");
        }
               printf("\n                                                   *****X*****  \n");

    }




    return 0;
}

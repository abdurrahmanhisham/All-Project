#include<stdio.h>

    int choice,ch,c;
    char k;
    char sn[20];
    char sn1[20],sn2[20],sn3[20];
    char dp[20];
    char dp1[20],dp2[20],dp3[20];
    int id1,id2,id3,id4,id5,id6,id7,id8,id9,id10,id11,id12;
    long long int p,p1,p2,p3;
    float *pr,f,f1,f2,f3,c1,c2,c3,c4;

    void parthib(){
            printf("\n\t\t\t\t\t\t\t\t\t\t\t  =======================================");
            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\tAdd Student Info\n");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t  =======================================");
            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\tEnter student name:");
            getchar();
            gets(sn);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tEnter department name:");
            gets(dp);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tEnter student id:");
            scanf("%d-%d-%d",&id1,&id2,&id3);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tEnter CGPA:");
            scanf("%f",&f);
            pr=&f;
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tEnter phone number:");
            scanf("%lld",&p);
            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\"\"Student Info Added\"\"\n");

                  }
    void parthib1(){
            printf("\n\t\t\t\t\t\t\t\t\t\t\t  =======================================");
            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\tAdd Student Info\n");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t  =======================================");
            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\tEnter student name:");
            getchar();
            gets(sn1);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tEnter department name:");
            gets(dp1);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tEnter student id:");
            scanf("%d-%d-%d",&id4,&id5,&id6);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tEnter CGPA:");
            scanf("%f",&f1);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tEnter phone number:");
            scanf("%lld",&p1);
            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\"\"Student Info Added\"\"\n");
            return;
                  }
    float parthib2(float c1,float c2,float c3,float c4){
            printf("\n\t\t\t\t\t\t\t\t\t\t\t===================================");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tAdd Exam Marks\n");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t===================================\n");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tEnter student id:");
            scanf("%d-%d-%d",&id4,&id5,&id6);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tMath    = ");
            scanf("%f",&c1);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tPhysics = ");
            scanf("%f",&c2);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tEnglish = ");
            scanf("%f",&c3);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tCSE     = ");
            scanf("%f",&c4);
            f1=(c1+c2+c3+c4)/4;
            return f1;
               }
    int main()
        {



        do{
        system("cls");//parthib
        printf("\n\n");
        printf("\t\t\t\t**************************************************************************************************************************************************************************************\n");
        printf("\t\t\t\t**************************************************************************************************************************************************************************************\n");
        printf("\t\t\t\t**********                                                                                                                                                                  **********\n");
        printf("\t\t\t\t**********                           ############# ################ ##          ## ############   ############## ####        ## ##############                              **********\n");
        printf("\t\t\t\t**********                           ##     ##  ##        ##        ##          ## ##          ## ##             ## ##       ##       ##                                    **********\n");
        printf("\t\t\t\t**********                           ##     ######        ##        ##          ## ##          ## ##             ##  ##      ##       ##                                    **********\n");
        printf("\t\t\t\t**********                           ##                   ##        ##          ## ##          ## ##             ##   ##     ##       ##                                    **********\n");
        printf("\t\t\t\t**********                           #############        ##        ##          ## ##          ## #########      ##    ##    ##       ##                                    **********\n");
        printf("\t\t\t\t**********                                      ##        ##        ##          ## ##          ## ##             ##     ##   ##       ##                                    **********\n");
        printf("\t\t\t\t**********                           ######     ##        ##        ##          ## ##          ## ##             ##      ##  ##       ##                                    **********\n");
        printf("\t\t\t\t**********                           ##  ##     ##        ##        ##          ## ##          ## ##             ##       ## ##       ##                                    **********\n");
        printf("\t\t\t\t**********                           #############        ##          ##########   ############   ############## ##        ####       ##                                    **********\n");
        printf("\t\t\t\t**********                                                                                                                                                                  **********\n");
        printf("\t\t\t\t**********  ####          ####        ##        ####      ##        ##        ##############  #############  ####          ####  #############  ####      ##  ############  **********\n");
        printf("\t\t\t\t**********  ## ##        ## ##       ####       ## ##     ##       ####       ##          ##  ##             ## ##        ## ##  ##             ## ##     ##       ##       **********\n");
        printf("\t\t\t\t**********  ##  ##      ##  ##      ##  ##      ##  ##    ##      ##  ##      ##              ##             ##  ##      ##  ##  ##             ##  ##    ##       ##       **********\n");
        printf("\t\t\t\t**********  ##   ##    ##   ##     ##    ##     ##   ##   ##     ##    ##     ##    ########  ########       ##   ##    ##   ##  #########      ##   ##   ##       ##       **********\n");
        printf("\t\t\t\t**********  ##    ##  ##    ##    ##########    ##    ##  ##    ##########    ##    ##    ##  ##             ##    ##  ##    ##  ##             ##    ##  ##       ##       **********\n");
        printf("\t\t\t\t**********  ##     ####     ##   ##        ##   ##     ## ##   ##        ##   ##    ##    ##  ##             ##     ####     ##  ##             ##     ## ##       ##       **********\n");
        printf("\t\t\t\t**********  ##      ##      ##  ##          ##  ##      ####  ##          ##  ########    ##  #############  ##      ##      ##  #############  ##      ####       ##       **********\n");
        printf("\t\t\t\t**********                                                                                                                                                                  **********\n");
        printf("\t\t\t\t**************************************************************************************************************************************************************************************\n");
        printf("\t\t\t\t**************************************************************************************************************************************************************************************\n");

        printf("\n\t\t\t\t\t\t\t\t\t\t      !!!!....Student Database Menu....!!!!");
        printf("\n\t\t\t\t\t\t\t\t\t\t ===============================================");
        printf("\n\n\t\t\t\t\t\t\t\t\t\t\t   ----------------------------");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t   |  1.Search Student Info   |");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t   |  2.Add Student Info      |");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t   |  3.Delete Student Info   |");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t   |  4.Show Student Details  |");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t   |  5.Add Exam Marks        |");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t   |  6.Show CGPA             |");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t   |  7.Edit Info             |");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t   ----------------------------");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t      0.Exit");
        printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t  Enter category => ");

        scanf("%d",&choice);
        switch(choice)
        {


            case 1:
        {
            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t==Search==\n");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tEnter the student id:");
            p:scanf("%d-%d-%d",&id1,&id2,&id3);

           if(id1==213&&id2==15&&id3==4253)
           {
            if(c==1)
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\"\"Not Found\"\"");
            else{
            printf("\n\t\t\t\t\t\t\t\t\t\t\t  ===================================");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t   Student info   \n");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t  ===================================");
            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\tName      : %s\n",sn);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tDepartment: %s\n",dp);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tID        : %d-%d-%d\n",id1,id2,id3);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tCGPA      : %.2f\n",*pr);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tPhone     : %lld\n",p);}
             break;
           }
           else if(id1==213&&id2==15&&id3==4245)
           {
               if(c==2)
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\"\"Not Found\"\"");
            else{
            printf("\n\t\t\t\t\t\t\t\t\t\t\t  ===================================");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t   Student info   \n");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t  ===================================");
            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\tName      : %s\n",sn1);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tDepartment: %s\n",dp1);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tID        : %d-%d-%d\n",id1,id2,id3);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tCGPA      : %.2f\n",f1);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tPhone     : %lld\n",p1);}
            break;
           }
           else if(id1==213&&id2==15&&id3==4283)
           {
               if(c==3)
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\"\"Not Found\"\"");
            else{
            printf("\n\t\t\t\t\t\t\t\t\t\t\t  ===================================");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t   Student info   \n");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t  ===================================");
            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\tName      : %s\n",sn2);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tDepartment: %s\n",dp2);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tID        : %d-%d-%d\n",id1,id2,id3);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tCGPA      : %.2f\n",f2);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tPhone     : %lld\n",p2);}
            break;
           }
           else if(id1==213&&id2==15&&id3==4244)
           {
               if(c==4)
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\"\"Not Found\"\"");
            else{
            printf("\n\t\t\t\t\t\t\t\t\t\t\t  ===================================");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t   Student info   \n");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t  ===================================");
            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\tName      : %s\n",sn3);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tDepartment: %s\n",dp3);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tID        : %d-%d-%d\n",id1,id2,id3);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tCGPA      : %.2f\n",f3);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tPhone     : %lld\n",p3);}
            break;
           }
           else {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\tNot Found");
                 printf("\n\t\t\t\t\t\t\t\t\t\t\t\tSearch Again : ");
                 goto p;
                }

           break;
        }

            case 2://parthib
        {

            parthib();
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tWant to add another one(y/n):");

            scanf(" %c",&k);
            if(k!='y')break;
            if(k=='y')
            {
            parthib1();

            }
           printf("\n\t\t\t\t\t\t\t\t\t\t\t\tWant to add another one(y/n):");

            scanf(" %c",&k);
            if(k!='y')break;
            if(k=='y')
            {
            printf("\n\t\t\t\t\t\t\t\t\t\t\t  =======================================");
            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\tAdd Student Info\n");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t  =======================================");
            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\tEnter student name:");
            getchar();
            gets(sn2);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tEnter department name:");
            gets(dp2);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tEnter student id:");
            scanf("%d-%d-%d",&id7,&id8,&id9);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tEnter CGPA:");
            scanf("%f",&f2);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tEnter phone number:");
            scanf("%lld",&p2);
            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\"\"Student Info Added\"\"\n");

           }
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tWant to add another one(y/n):");

            scanf(" %c",&k);
            if(k!='y')break;
            if(k=='y')
            {
            printf("\n\t\t\t\t\t\t\t\t\t\t\t  ======================================");
            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\tAdd Student Info\n");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t  ======================================");
            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\tEnter student name:");
            getchar();

            gets(sn3);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tEnter department name:");
            gets(dp3);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tEnter student id:");
            scanf("%d-%d-%d",&id10,&id11,&id12);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tEnter CGPA:");
            scanf("%f",&f3);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tEnter phone number:");
            scanf("%lld",&p3);
            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\"\"Student Info Added\"\"\n");

           }
           break;
        }
        case 3:
        {

            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tEnter the id of the student whose info you want to delete:");
                scanf("%d-%d-%d",&id1,&id2,&id3);
               if(id1==213&&id2==15&&id3==4253){
            printf("\n\t\t\t\t\t\t\t\t\t\t\t  ===================================");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t   Student Details    \n");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t  ===================================");
            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\tName      : %s\n",sn);
            printf("\t\t\t\t\t\t\t\t\t\t\t\tDepartment: %s\n",dp);
            printf("\t\t\t\t\t\t\t\t\t\t\t\tID        : %d-%d-%d\n",id1,id2,id3);
            printf("\t\t\t\t\t\t\t\t\t\t\t\tCGPA      : %.2f\n",f);
            printf("\t\t\t\t\t\t\t\t\t\t\t\tPhone     : %lld\n\n",p);
            printf("\t\t\t\t\t\t\t\t\t\t\t\tWant to delete this(y/n)?:");
            char ph;
            scanf(" %c",&ph);
            if(ph=='y')
            {
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\"\"Deleted successfully.\"\"");
             c=1;
            }
            break;
               }
                  if(id1==213&&id2==15&&id3==4245){
            printf("\n\t\t\t\t\t\t\t\t\t\t\t  ===================================");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t   Student Details   \n");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t  ===================================");
            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\tName      : %s\n",sn1);
            printf("\t\t\t\t\t\t\t\t\t\t\t\tDepartment: %s\n",dp1);
            printf("\t\t\t\t\t\t\t\t\t\t\t\tID        : %d-%d-%d\n",id1,id2,id3);
            printf("\t\t\t\t\t\t\t\t\t\t\t\tCGPA      : %.2f\n",f1);
            printf("\t\t\t\t\t\t\t\t\t\t\t\tPhone     : %lld\n\n",p1);
            printf("\t\t\t\t\t\t\t\t\t\t\t\tWant to delete this(y/n)?:");
            char ph;
            scanf(" %c",&ph);
            if(ph=='y')
            {
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\"\"Deleted successfully.\"\"");
            c=2;
            }
            break;
               }
                  if(id1==213&&id2==15&&id3==4283){
            printf("\n\t\t\t\t\t\t\t\t\t\t\t  ===================================");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t   Student Details   \n");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t  ===================================");
            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\tName      : %s\n",sn2);
            printf("\t\t\t\t\t\t\t\t\t\t\t\tDepartment: %s\n",dp2);
            printf("\t\t\t\t\t\t\t\t\t\t\t\tID        : %d-%d-%d\n",id1,id2,id3);
            printf("\t\t\t\t\t\t\t\t\t\t\t\tCGPA      : %.2f\n",f2);
            printf("\t\t\t\t\t\t\t\t\t\t\t\tPhone     : %lld\n\n",p2);
            printf("\t\t\t\t\t\t\t\t\t\t\t\tWant to delete this(y/n)?:");
            char ph;
            scanf(" %c",&ph);
            if(ph=='y')
            {
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\"\"Deleted successfully.\"\"");
            c=3;
            }
            break;
               }
                     if(id1==213&&id2==15&&id3==4244){
            printf("\n\t\t\t\t\t\t\t\t\t\t\t  ===================================");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t   Student Details   \n");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t  ===================================");
            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\tName: %s\n",sn3);
            printf("\t\t\t\t\t\t\t\t\t\t\t\tDepartment:%s\n",dp3);
            printf("\t\t\t\t\t\t\t\t\t\t\t\tID:%d-%d-%d\n",id1,id2,id3);
            printf("\t\t\t\t\t\t\t\t\t\t\t\tCGPA:%.2f\n",f3);
            printf("\t\t\t\t\t\t\t\t\t\t\t\tPhone:%lld\n\n",p3);
            printf("\t\t\t\t\t\t\t\t\t\t\t\tWant to delete this(y/n)?:");
            char ph;
            scanf(" %c",&ph);
            if(ph=='y')
            {
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\"\"Deleted successfully.\"\"");
            c=4;
            }
            break;
               }
            break;
        }
        case 4:
        {
            if(c==1)
            {printf("\n\t\t\t\t\t\t\t\t\t\t\t===================================");
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\"\"Not Found\"\"");
                printf("\n\t\t\t\t\t\t\t\t\t\t\t===================================");}
            else{
            printf("\n\t\t\t\t\t\t\t\t\t\t\t===================================");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t   Student info   \n");
            printf("\t\t\t\t\t\t\t\t\t\t\t    ===================================\n\n");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tName      : %s\n",sn);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tDepartment: %s\n",dp);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tID        : %d-%d-%d\n",id1,id2,id3);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tCGPA      : %.2f\n",*pr);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tPhone     : %lld\n",p);}
            if(c==2)
            {printf("\n\t\t\t\t\t\t\t\t\t\t\t===================================");
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\"\"Not Found\"\"");
                printf("\n\t\t\t\t\t\t\t\t\t\t\t===================================");}
            else{
            printf("\n\t\t\t\t\t\t\t\t\t\t\t===================================");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t   Student info   \n");
            printf("\t\t\t\t\t\t\t\t\t\t\t    ===================================\n\n");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tName      : %s\n",sn1);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tDepartment: %s\n",dp1);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tID        : %d-%d-%d\n",id4,id5,id6);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tCGPA      : %.2f\n",f1);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tPhone     : %lld\n",p1);}
            if(c==3)
            {printf("\n\t\t\t\t\t\t\t\t\t\t\t===================================");
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\"\"Not Found\"\"");
                printf("\n\t\t\t\t\t\t\t\t\t\t\t===================================");}
            else{
            printf("\n\t\t\t\t\t\t\t\t\t\t\t===================================");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t   Student info   \n");
            printf("\t\t\t\t\t\t\t\t\t\t\t    ===================================\n\n");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tName      : %s\n",sn2);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tDepartment: %s\n",dp2);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tID        : %d-%d-%d\n",id7,id8,id9);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tCGPA      : %.2f\n",f2);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tPhone     : %lld\n",p2);}
            if(c==4)
            {printf("\n\t\t\t\t\t\t\t\t\t\t\t===================================");
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\"\"Not Found\"\"");
                printf("\n\t\t\t\t\t\t\t\t\t\t\t===================================");}
            else{
            printf("\n\t\t\t\t\t\t\t\t\t\t\t===================================");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t   Student info    \n");
            printf("\t\t\t\t\t\t\t\t\t\t\t    ===================================\n\n");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tName      : %s\n",sn3);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tDepartment: %s\n",dp3);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tID        : %d-%d-%d\n",id10,id11,id12);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tCGPA      : %.2f\n",f3);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tPhone     : %lld\n",p3);}


            break;
        }
        case 5:
        {   printf("\n\t\t\t\t\t\t\t\t\t\t\t===================================");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tAdd Exam Marks\n");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t===================================\n");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tEnter student id:");
            scanf("%d-%d-%d",&id1,&id2,&id3);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tMath    = ");
            scanf("%f",&c1);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tPhysics = ");
            scanf("%f",&c2);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tEnglish = ");
            scanf("%f",&c3);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tCSE     = ");
            scanf("%f",&c4);
            f=(c1+c2+c3+c4)/4;
            pr=&f;
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\"\"Exam marks added.\"\"\n\n");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tWant to add another one(y/n):");
            scanf(" %c",&k);
            if(k!='y')break;
            if(k=='y')
            {
            parthib2(c1,c2,c3,c4);//parthib
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\"\"Exam marks added.\"\"\n\n");
            }
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tWant to add another one(y/n):");
            scanf(" %c",&k);
            if(k!='y')break;
            if(k=='y')
            {
            printf("\n\t\t\t\t\t\t\t\t\t\t\t===================================");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tAdd Exam Marks\n");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t===================================\n");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tEnter student id:");
            scanf("%d-%d-%d",&id7,&id8,&id9);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tMath    = ");
            scanf("%f",&c1);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tPhysics = ");
            scanf("%f",&c2);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tEnglish = ");
            scanf("%f",&c3);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tCSE     = ");
            scanf("%f",&c4);
            f2=(c1+c2+c3+c4)/4;
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\"\"Exam marks added.\"\"\n\n");
            }
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tWant to add another one(y/n):");
            scanf(" %c",&k);
            if(k!='y')break;
            if(k=='y')
            {
            printf("\n\t\t\t\t\t\t\t\t\t\t\t===================================");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tAdd Exam Marks\n");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t===================================\n");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tEnter student id:");
            scanf("%d-%d-%d",&id10,&id11,&id12);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tMath    = ");
            scanf("%f",&c1);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tPhysics = ");
            scanf("%f",&c2);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tEnglish = ");
            scanf("%f",&c3);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tCSE     = ");
            scanf("%f",&c4);
            f3=(c1+c2+c3+c4)/4;
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\"\"Exam marks added.\"\"\n\n");
            }
            break;
        }
        case 6:
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\tEnter student id:");
                scanf("%d-%d-%d",&id1,&id2,&id3);
               if(id1==213&&id2==15&&id3==4253)
                    {printf("\n\t\t\t\t\t\t\t\t\t\t\t\tId     : %d-%d-%d",id1,id2,id3);
                     printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\tCGPA   : %.2f",*pr);break;}
               if(id1==213&&id2==15&&id3==4245)
                    {printf("\n\t\t\t\t\t\t\t\t\t\t\t\tId     : %d-%d-%d",id1,id2,id3);
                     printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\tCGPA   : %.2f",f1);break;}
               if(id1==213&&id2==15&&id3==4283)
                    {printf("\n\t\t\t\t\t\t\t\t\t\t\t\tId     : %d-%d-%d",id1,id2,id3);
                     printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\tCGPA   : %.2f",f2);break;}
               if(id1==213&&id2==15&&id3==4244)
                    {printf("\n\t\t\t\t\t\t\t\t\t\t\t\tId     : %d-%d-%d",id1,id2,id3);
                     printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\tCGPA   : %.2f",f3);break;}
                else
                    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\"\"Not Found\"\"");
                break;
            }
             case 7://parthib
        {

            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tEnter the id of the student whose info you want to edit:");
                j:scanf("%d-%d-%d",&id1,&id2,&id3);
               if(id1==213&&id2==15&&id3==4253){
            printf("\n\t\t\t\t\t\t\t\t\t\t\t===================================");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t...Student Details...\n");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t===================================");
            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\tName      : %s\n",sn);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tDepartment: %s\n",dp);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tID        : %d-%d-%d\n",id1,id2,id3);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tCGPA      : %.2f\n",f);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tPhone     : %lld\n\n",p);
            printf("\t\t\t\t\t\t\t\t\t\t\t\tWant to edit this(y/n)?:");
            char ph;
            scanf(" %c",&ph);
            if(ph=='y')
            {
            getchar();
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tEnter student name:");
            gets(sn);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tEnter department name:");
            gets(dp);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tEnter CGPA:");
            scanf("%f",&f);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tEnter phone number:");
            scanf("%lld",&p);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\"Edited successfully.\"");
            }
            }
             else if(id1==213&&id2==15&&id3==4245){
            printf("\n\t\t\t\t\t\t\t\t\t\t\t===================================");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t...Student Details...\n");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t===================================");
            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\tName      : %s\n",sn1);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tDepartment: %s\n",dp1);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tID        : %d-%d-%d\n",id1,id2,id3);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tCGPA      : %.2f\n",f1);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tPhone     : %lld\n\n",p1);
            printf("\t\t\t\t\t\t\t\t\t\t\t\tWant to edit this(y/n)?:");
            char ph;
            scanf(" %c",&ph);
            if(ph=='y')
            {
            getchar();
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tEnter student name:");
            gets(sn1);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tEnter department name:");
            gets(dp1);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tEnter CGPA:");
            scanf("%f",&f1);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tEnter phone number:");
            scanf("%lld",&p1);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\"Edited successfully.\"");
            }
            }
            else if(id1==213&&id2==15&&id3==4283){
            printf("\n\t\t\t\t\t\t\t\t\t\t\t===================================");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t...Student Details...\n");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t===================================");
            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\tName      : %s\n",sn2);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tDepartment: %s\n",dp2);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tID        : %d-%d-%d\n",id1,id2,id3);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tCGPA      : %.2f\n",f2);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tPhone     : %lld\n\n",p2);
            printf("\t\t\t\t\t\t\t\t\t\t\t\tWant to edit this(y/n)?:");
            char ph;
            scanf(" %c",&ph);
            if(ph=='y')
            {
            getchar();
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tEnter student name:");
            gets(sn2);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tEnter department name:");
            gets(dp2);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tEnter CGPA:");
            scanf("%f",&f2);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tEnter phone number:");
            scanf("%lld",&p2);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\"Edited successfully.\"");
            }
            }
            else if(id1==213&&id2==15&&id3==4244){
            printf("\n\t\t\t\t\t\t\t\t\t\t\t===================================");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t...Student Details...\n");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t===================================");
            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\tName      : %s\n",sn3);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tDepartment: %s\n",dp3);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tID        : %d-%d-%d\n",id1,id2,id3);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tCGPA      : %.2f\n",f3);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tPhone     : %lld\n\n",p3);
            printf("\t\t\t\t\t\t\t\t\t\t\t\tWant to edit this(y/n)?:");
            char ph;
            scanf(" %c",&ph);
            if(ph=='y')
            {
            getchar();
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tEnter student name:");
            gets(sn);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tEnter department name:");
            gets(dp);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tEnter CGPA:");
            scanf("%f",&f);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tEnter phone number:");
            scanf("%lld",&p);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\"Edited successfully.\"");
            }
            }
            else
                {printf("\n\t\t\t\t\t\t\t\t\t\t\t\tID is invalid!\n");
                 printf("\n\t\t\t\t\t\t\t\t\t\t\t\tEnter The Correct ID:");
                 goto j;}

            break;
        }
           case 0:
                 {
                     printf("\n\t\t\t\t\t\t\t\t\t\t\t\"\"Exited Successfully\"\"");
                     exit(0);
                 }
           default:
                {
                    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\"There is no feature that you want to see\"\n");
                    break;
                }

      }
        printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\tGo back to main menu(y/n)?:");
        scanf(" %c",&ch);
    }while(ch=='y');

  }








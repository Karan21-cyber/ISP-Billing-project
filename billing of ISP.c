#include<stdio.h>
#include<stdlib.h>

void displayIntro();
void thankyou();
void count();
void randomNo();
void header();
void offer();
void play();
void customer();

void monthIntro();
void displaypackage();
void packagehome();
void packagesuper();
void packagefiber();

void homezoom();
void supersonic();
void fiberflash();
void choosepackage();
void calculate();


int main()
{
offer();
play();


 return 0;
}
void count()
{
    int
    static count;
    count+=1;
    printf("\t|Customer No:%d|\n",count);
}
void randomNo()
{
         printf("\t*****Your, Unique ID is %d******\n",rand()%100+1000);
}
void line()
{
    printf("\n---------------------------------------------------------------------------------------\n");
}
void thankyou()
{
    line();
    printf("\n\t\t\t**********Thank You*********\n");
    line();
}
void play()
{
    int d;
    printf("\t\nPress {1} key to continue for subscription other-wise any key to exit: ");
    scanf("%d",&d);
    if (d==1)
    {
    displayIntro();
    }
}
void displayIntro()
{
    line();
    printf("\t\t--------Welcome to ISP Billing service------\n\n");
    header();
    count();
    customer();
    displaypackage();
}
void header()
{
    printf("\t\t\t*********INVOICE***********\n");
    printf("\t\t\t    ISP BILLING SERVICE\n");
    line();
}
void offer()
{
   printf("\t\t\t Local ISP 25th Anniversary subscription offer\n ");
   printf("\t\t\t\t*****WE Have*****\n");
   printf("\tPackage/Range \t1.month\t\t3 monthly \t6 monthly \t1 year\n\n");
   printf("\tHome zoom20X \t 1499 \t\t4199 \t\t7499 \t\t13999\n");
   printf("\tSuper sonic30X \t 1799 \t\t4999 \t\t9299 \t\t17999\n");
   printf("\tFiber flash50X \t 2399 \t\t6599 \t\t12199 \t\t23999\n");
}
void customer()
{
    char name[50],address[50];
    printf("\tEnter Name:");
    scanf("%s",&name);
    printf("\tEnter Address:");
    scanf("%s",&address);
    line();
}
void displaypackage()
{
    int num;
    printf("\t\t\t\t*********We Have**********\n");
    printf("\t[1] Home Zoom 20X| [2] Super Sonic 30X| [3] Fiber Flash 50X| [4] No of Customer|\n");
    int rate[3][4]={{1499, 4199, 7499, 13999},
                 {1799, 4999, 9299, 17999 },
                 {2399, 6599, 12199, 23999}};
    printf("\nChoose the package number from above to get the price list of the package:");
    scanf("%d",&num);

    if (num==1)
    {
        line();
        printf("\t\t**You choose Home Zoom 20X**");
        homezoom(rate);
        thankyou();
    }
    else if(num==2)
    {
        line();
        printf("\t\t**You choose Super Sonic 30X**");
        supersonic(rate);
        thankyou();
    }
    else if(num==3)
    {
        line();
        printf("\t\t**You choose FIber Flash 50X**");
        fiberflash(rate);
        thankyou();
    }
    else if(num==4)
    {
    line();
    printf("\t\tThank you for comming!\n");
    main();
    line();
    }
    else
    {
        line();
        printf("\t\t**Invalid**\n");
        displaypackage();
        line();
    }
    line();
    printf("Do you wan to continue. If yes then press=[1] otherwise press any key:");
    scanf("%d",&num);
    line();
    if (num == 1)
    {
        line();
        main();
    }
    line();
    line();
}
void monthIntro()
{
     printf("\n\t\t**********We Have**********\n");
    printf("\t[1]for Monthly|[2] for 3 Month|[3} for 6 Month|[4]for 1 year|\n");
}
void homezoom(int rate[3][4])
{
       monthIntro();
        for(int i=0;i<1;i++)
        {
            for(int j=0;j<4;j++)
            {
                printf("%d \t\t",rate[i][j]);
            }
        }
        line();
        packagehome();
}
void supersonic(int rate[3][4])
{
       monthIntro();
        for(int i=1;i<2;i++)
        {
            for(int j=0;j<4;j++)
            {
                printf("%d \t\t",rate[i][j]);
            }
        }
        line();
        packagesuper();

}
void fiberflash(int rate[3][4])
{
        monthIntro();
         for(int i=2;i<3;i++)
        {
            for(int j=0;j<4;j++)
            {
                printf("%d \t\t",rate[i][j]);
            }
        }
        line();
        packagefiber();
}
void packagehome()
{
    int num;
    int rate[3][4]={{1499, 4199, 7499, 13999},
                 {1799, 4999, 9299, 17999 },
                 {2399, 6599, 12199, 23999}};
    printf("\tChoose the package:");
    scanf("%d",&num);
    if (num==1)
    {
        printf("\t**You choose 1 month package**\n");
        for(int i=0;i<1;i++)
        {
            for(int j=0;j<1;j++)
            {
                printf("Amount: %d\t",rate[i][j]);
            }
        }
        calculate(rate[0][0]);
    }
    else if (num==2)
    {
        printf("\t**You choose 3 month package**\n");
        for (int i=0;i<1;i++)
        {
            for (int j=1;j<2;j++)
            {
                printf("Amount: %d\t",rate[i][j]);
            }
        }calculate(rate[0][1]);
    }
     else if (num==3)
    {
        printf("\t**You choose 6 month package**\n");
        for (int i=0;i<1;i++)
        {
            for (int j=2;j<3;j++)
            {
                printf("Amount: %d\t",rate[i][j]);
            }
        }calculate(rate[0][2]);
    }
     else if (num==4)
    {
        printf("\t**You choose 1 year package**");
        line();
        printf("\n\t\t**You are eligible for lottery prize 55 inch SMART TV**\n");
        randomNo();
        for (int i=0;i<1;i++)
        {
            for (int j=3;j<4;j++)
            {
                printf("Amount: %d\t",rate[i][j]);
            }
        }calculate(rate[0][3]);
    }
    else
    {
        line();
        printf("\t\t**Invalid!**\n");
        packagehome();
    }

}
void packagesuper()
{

    int num;
    int rate[3][4]={{1499, 4199, 7499, 13999},
                 {1799, 4999, 9299, 17999 },
                 {2399, 6599, 12199, 23999}};
    printf("\tChoose the package:");
    scanf("%d",&num);
    if (num==1)
    {
        printf("\t**You choose 1 month package**\n");
        for(int i=1;i<2;i++)
        {
            for(int j=0;j<1;j++)
            {
                printf("Amount: %d\t",rate[i][j]);
            }
        }calculate(rate[1][0]);
    }
    else if (num==2)
    {
        printf("\t**You choose 3 month package**\n");
        for (int i=1;i<2;i++)
        {
            for (int j=1;j<2;j++)
            {
                printf("Amount: %d\t",rate[i][j]);
            }
        }calculate(rate[1][1]);
    }
     else if (num==3)
    {
        printf("\t**You choose 6 month package**\n");
        for (int i=1;i<2;i++)
        {
            for (int j=2;j<3;j++)
            {
                printf("Amount: %d\t",rate[i][j]);
            }
        }calculate(rate[1][2]);
    }
     else if (num==4)
    {
        printf("\t**You choose 1 year package**\n");
        line();
        printf("\n\t**You are eligible for lottery prize 55 inch SMART TV**N\n");
        randomNo();
        for (int i=1;i<2;i++)
        {
            for (int j=3;j<4;j++)
            {
                printf("Amount: %d\t",rate[i][j]);
            }
        }calculate(rate[1][3]);
    }
    else
    {
        printf("\t\t**Invalid!**\n");
        packagesuper();
    }
}
void packagefiber()
{
    int num;
    int rate[3][4]={{1499, 4199, 7499, 13999},
                 {1799, 4999, 9299, 17999 },
                 {2399, 6599, 12199, 23999}};
    printf("\tChoose the package:");
    scanf("%d",&num);
    if (num==1)
    {
        printf("\t**You choose 1 month package**\n");
        for(int i=2;i<3;i++)
        {
            for(int j=0;j<1;j++)
            {
                printf("Amount: %d\t",rate[i][j]);
            }
        } calculate(rate[2][0]);
    }
    else if (num==2)
    {
        printf("\t**You choose 3 month package**\n");
        for (int i=2;i<3;i++)
        {
            for (int j=1;j<2;j++)
            {
                printf("Amount: %d\t",rate[i][j]);
            }
        }
        calculate(rate[2][1]);
    }
     else if (num==3)
    {
        printf("\t**You choose 6 month package**\n");
        for (int i=2;i<3;i++)
        {
            for (int j=2;j<3;j++)
            {
                printf("Amount: %d\t",rate[i][j]);
            }
        }
        calculate(rate[2][2]);
    }
     else if (num==4)
    {
        printf("\t**You choose 1 year package**");
        line();
        printf("\n\t**You are eligible for lottery prize 55 inch SMART TV**\n");
        randomNo();
        for (int i=2;i<3;i++)
        {
            for (int j=3;j<4;j++)
            {
                printf("Amount: %d\t",rate[i][j]);
            }
        }
        calculate(rate[2][3]);
    }
    else
    {
    line();
    printf("\t\tInvalid!\n");
    packagefiber();
    }
}
void calculate(int amount)
{
    float totaltax,totalcharge;
    totaltax= amount + (0.10*amount);
    totalcharge = totaltax + (0.13*totaltax);
    printf("|Total amount with tax:%f| ",totaltax);
    printf("|Total amount with vat:%f|",totalcharge);
    line();
    printf("\n|Total charge is %f|",totalcharge);
    line();
}

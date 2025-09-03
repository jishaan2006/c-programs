#include<stdio.h>
int main()
{
    int a=1,c;
    printf("Enter Amount in INR:");
    scanf("%d",&a);
    printf("1.USD\n2.AUD\n3.YEN\n4.POUND\nChoose Currency to covert in(1-4:)");
    scanf("%d",&c);
    switch (c)
    {
     case 1:printf("%d INR = %f USD",a,(float)a/88.5); //type casting
     break;
     case 2:printf("%d INR = %f AUD",a,(float)a/57.54);
     break;
     case 3:printf("%d INR = %f YEN",a,(float)a*1.667);
     break;
     case 4:printf("%d INR = %f POUND",a,(float)a/117.13);
     break;
     default: printf("INVALID choice:\n");
    }
    return 0;
}








/*#include<stdio.h>
int main()
{
    int a, c;
    printf("Enter Amount in INR: ");
    scanf("%d", &a);
    if (a <= 0) {
        printf("Please enter a positive amount.\n");
        return 1;
    }
    printf("1. USD\n2. AUD\n3. YEN\n4. POUND\nChoose Currency to convert to (1-4): ");
    scanf("%d", &c);
    switch (c)
    {
        case 1: printf("%d INR = %.2f USD\n", a, (float)a / 88.5); break;
        case 2: printf("%d INR = %.2f AUD\n", a, (float)a / 57.54); break;
        case 3: printf("%d INR = %.2f YEN\n", a, (float)a * 1.667); break;
        case 4: printf("%d INR = %.2f POUND\n", a, (float)a / 117.13); break;
        default: printf("INVALID choice.\n");
    }
    return 0;
}*/


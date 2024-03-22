//#include <stdio.h>
//
//struct amount
//{
//    float interest;
//    int bamount;
//    float rate;
//    float total;
//};
//
//struct amount a;
//
//int main()
//{
//    printf("Enter base amount (in rupees): ");
//    scanf("%d", &a.bamount);
//
//    printf("Enter rate (annual rate in percentage): ");
//    scanf("%f", &a.rate);
//
//    a.total = a.bamount;
//
//    for (int i = 0; i < 12; i++)
//    {
//        printf("Month: %d\n", i + 1);
//
//        a.interest = (a.bamount * a.rate * (i + 1) / 12) / 100;
//
//        printf("Interest for Month %d is: %.2f\n", i + 1, a.interest);
//
//        a.total += a.interest;
//    }
//
//    printf("Total after 12 months: %.2f\n", a.total);
//    return 0;
//}

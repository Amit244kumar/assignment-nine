int main()
{
    int year;
    printf("Enter the year");
    scanf("%d",&year);
    switch(year%100?year%4?0:1:year%400?0:1)
    {
    case 1:
        printf("The year is leap year");
        break;
    case 0:
        printf("The year is not leap year");
    }
    getch();
    return 0;
}

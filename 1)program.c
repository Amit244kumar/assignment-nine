int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        printf("There are 31 days in January");
        break;
    case 2:
        printf("There are 28 days in February");
        break;
    case 3:
        printf("There are 31 days in March");
        break;
    case 4:
        printf("There are 30 days in April");
        break;
    case 5:
        printf("There are 31 days in May");
        break;
    case 6:
        printf("There are 30 days in June");
        break;
    case 7:
        printf("There are 31 days in July");
        break;
    case 8:
        printf("There are 31 days in August");
        break;
    case 9:
        printf("There are 30 days in September");
        break;
    case 10:
        printf("There are 31 days in October");
        break;
    case 11:
        printf("There are 30 days in November");
        break;
    case 12:
        printf("There are 31 days in December");
        break;
    default:
        printf("The invalid number");
    }
    getch();
    return 0;
}

int main()
{
    int n;
    printf("Enter the positive or negative number");
    scanf("%d",&n);
    switch(n<0)
    {
    case 1:
        n=n-n-n;
        printf("The number is positive now %d",n);
        break;
    case 0:
        n=n-n-n;
        printf("The number is negative now %d",n);
    }
    getch();
    return 0;
}

int main()
{

    int a,b,c,d,r;
    printf("Enter the three values:");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
        r=1;
    else if(d==0)
        r=2;
    else
        r=3;
    switch(r)
    {
    case 1:
        printf("The real roots");
        break;
    case 2:
        printf("The equal root");
        break;
    case 3:
        printf("The imaginary root");
    }
    getch();
    return 0;
}

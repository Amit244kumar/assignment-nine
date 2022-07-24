int main()
{
    int n1,n2,n3,n;
    while(1){
        system("cls");
        printf("\n1.To check isosceles triangle");
        printf("\n2.To check right angle triangle");
        printf("\n3.To check equilateral  triangle");
        printf("\n4.Exit");
        printf("\nEnter your choice");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            printf("Enter the two side");
            scanf("%d%d",&n1,&n2);
            printf(n1==n2?"The triangle is isosceles":"The triangle is not isosceles");
            break;
        case 2:
            printf("Enter hypotenus");
            scanf("%d",&n1);
            printf("Enter base");
            scanf("%d",&n2);
            printf("Enter height");
            scanf("%d",&n3);
            printf(n1*n1==n2*n2+n3*n3?"The triangle is right angle triangle":"The triangle is not right angle triangle");
            break;
        case 3:
             printf("Enter the three  side");
            scanf("%d%d%d",&n1,&n2,&n3);
            printf(n1==n2&&n1==n3&&n2==n3?"The triangle is equilateral triangle":"The triangle is not equilateral triangle");
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice");
        }
        getch();
    }
    return 0;
}

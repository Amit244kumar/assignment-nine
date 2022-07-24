int main()
{
    int num1,num2,n;\
    while(1){
            system("cls");
            printf("\n1.To addition");
            printf("\n2.To subtraction");
            printf("\n3.To multiplication");
            printf("\n4.To division");
            printf("\n5.Exit");
            printf("Enter your choice");
            scanf("%d",&n);
            switch(n)
            {
            case 1:
                printf("Enter the two numbers");
                scanf("%d%d",&num1,&num2);
                printf("The sum is %d",num1+num2);
                break;
            case 2:
                printf("Enter two Nnumbers");
                scanf("%d%d",&num1,&num2);
                printf("The subtraction is %d",num1-num2);
                break;
            case 3:
                printf("Enter the two numbers");
                scanf("%d%d",&num1,&num2);
                printf("The multiplication is %d",num1*num2);
                break;
            case 4:
                 printf("Enter the two numbers");
                scanf("%d%d",&num1,&num2);
                printf("The division is %d",num1/num2);
                printf("\n\'The fractional value is not included\'");
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice");
            }
    getch();
    }
    return 0;

}

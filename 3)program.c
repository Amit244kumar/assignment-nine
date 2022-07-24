int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        printf("Good morning");
        break;
    case 2:
        printf("Amazing day");
        break;
    case 3:
        printf("Lovely people");
        break;
    case 4:
        printf("Glad to see you");
        break;
    case 5:
        printf("Rainy season");
        break;
    case 6:
        printf("This morning is beautiful");
        break;
    case 7:
        printf("Good to see you");
        break;
    default:
        printf("Invalid choice");
    }
    getch();
    return 0;
}

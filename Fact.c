void main()
{
int i,fact=1,n;
clrscr();
printf("Enter any integer:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("factorial of %d is=%d",n,fact);
getch();
}

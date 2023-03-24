void swap(int,int)
void main()
{
    int fnum,snum,result;
    printf("Enter any two integers: ");
    scanf("%d%d",&fnum,&snum);
    swap(fnum,snum)
    printf("fnum=%d snum=%d",fnum,snum);
}
void sap(int fnum,int snum);
{

    int temp=fnum;
    fnum=snum;
    snum=temp;
}

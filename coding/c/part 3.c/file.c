void main()
{
    FILE *f1,*f2;
    char ch;
    clrscr();
    f1=fopen("FileDemo.txt","r");
    f2=fopen("XYZ.txt","w");
    while(ch!=EOF)
    {
        ch=fgets(f1);
        fputc(ch.f2);
    }
    fclose(f1);
    fclose(f2);
    getch();
}
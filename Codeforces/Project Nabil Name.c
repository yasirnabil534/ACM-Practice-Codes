#include<stdio.h>

void n(void)
{
    int n,a,b,i,l,j;
    for(n=1;n<=15;n++)
    {
        for(i=0;i<5;i++)
            printf("*");
        printf("%*c",n,'*');
        for(i=0;i<4;i++)
            printf("*");
        for(i=0;i<15-n;i++)
            printf(" ");
        for(i=0;i<5;i++)
            printf("*");
        printf("\n");
    }
    printf("\n");
}

void a(void)
{
    int n,a,b,i,l,j;
    for(i=1,a=-1,b=9;;i++)
    {
        //if(a<=10)
            a+=2;
        if(b>0)
            b--;
        if(b==0)
            break;
        printf("%*c",b,'*');
        for(j=0;j<4;j++)
            printf("*");
        printf("%*c",a,'*');
        for(j=0;j<4;j++)
            printf("*");
        printf("\n");
    }
    for(i=1;i<6;i++)
    {
        for(b=1;b<25;b++)
            printf("*");
            printf("\n");
    }
    for(i=1;i<6;i++)
    {
        for(b=1;b<25;b++)
        {
            if(b<=5||b>=20)
                printf("*");
            else
                printf(" ");
        }
            printf("\n");
    }
    printf("\n");
}

void b(void)
{
    int n,a,b,i,l,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<7;j++)
            printf("*");
        for(j=0;j<5;j++)
            printf("*");
        for(l=0;l<=i;l++)
            printf("**");
        printf("\n");
    }
    for(i=1;i<=3;i++)
    {
        for(j=0;j<7;j++)
            printf("*");
        for(j=0;j<5;j++)
            printf(" ");
        printf("%*c",i,'*');
        for(l=0;l<7;l++)
            printf("*");
        printf("\n");
    }
    for(i=1,b=3;b>0;i++,b--)
    {
        for(j=0;j<7;j++)
            printf("*");
        for(j=0;j<5;j++)
            printf(" ");
        printf("%*c",b,'*');
        for(l=0;l<7;l++)
            printf("*");
        printf("\n");
    }
    for(i=2;i>0;i--)
    {
        for(j=0;j<7;j++)
            printf("*");
        for(j=0;j<5;j++)
            printf("*");
        for(l=1;l<=i;l++)
            printf("**");
        printf("\n");
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<7;j++)
            printf("*");
        for(j=0;j<5;j++)
            printf("*");
        for(l=0;l<=i;l++)
            printf("**");
        printf("\n");
    }
    for(i=1;i<=3;i++)
    {
        for(j=0;j<7;j++)
            printf("*");
        for(j=0;j<5;j++)
            printf(" ");
        printf("%*c",i,'*');
        for(l=0;l<7;l++)
            printf("*");
        printf("\n");
    }
    for(i=1,b=3;b>0;i++,b--)
    {
        for(j=0;j<7;j++)
            printf("*");
        for(j=0;j<5;j++)
            printf(" ");
        printf("%*c",b,'*');
        for(l=0;l<7;l++)
            printf("*");
        printf("\n");
    }
    for(i=3;i>0;i--)
    {
        for(j=0;j<7;j++)
            printf("*");
        for(j=0;j<5;j++)
            printf("*");
        for(l=1;l<=i;l++)
            printf("**");
        printf("\n");
    }
    printf("\n");
}

void i(void)
{
    int n,a,b,i,l,j;
    for(i=0;i<20;i++)
    {
        for(j=0;j<25;j++)
        {
            if(j<8||j>13)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    printf("\n");
}

void l(void)
{
    int n,a,b,i,l,j;
    for(i=1;i<=22;i++)
    {
        if(i<=18)
        {
            for(j=1;j<=5;j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            for(j=1;j<=20;j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    printf("\n");
}

void c(void)
{
    int n,a,b,i,l,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<20;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<20;j++)
        {
            if(j>4&&j<15)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<20;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
}

void g(void)
{
    int n,a,b,i,l,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<20;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<20;j++)
        {
            if(j>4&&j<11)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<20;j++)
        {
            if(j>4&&j<15)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<20;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
}

void d(void)
{
    int n,a,b,i,l,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<10;j++)
            printf("*");
        for(j=0;j<5;j++)
            printf("*");
        for(l=0;l<=i;l++)
            printf("*");
        printf("\n");
    }
    for(i=1;i<=5;i++)
    {
        for(j=0;j<7;j++)
            printf("*");
        for(j=0;j<=5;j++)
            printf(" ");
        printf("%*c",i,'*');
        for(l=0;l<7;l++)
            printf("*");
        printf("\n");
    }
    for(i=1,b=5;b>0;i++,b--)
    {
        for(j=0;j<7;j++)
            printf("*");
        for(j=0;j<5;j++)
            printf(" ");
        printf("%*c",b,'*');
        for(l=0;l<7;l++)
            printf("*");
        printf("\n");
    }
    for(i=5;i>0;i--)
    {
        for(j=0;j<5;j++)
            printf("*");
        for(j=1;j<10;j++)
            printf("*");
        for(l=1;l<=i;l++)
            printf("*");
        printf("\n");
    }
    printf("\n");
}

void o(void)
{
    int n,a,b,i,l,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<22;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=0;i<12;i++)
    {
        for(j=0;j<22;j++)
        {
            if(j>5&&j<16)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<22;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
}

void e()
{
    int n,a,b,i,l,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<22;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<8;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<15;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<8;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<22;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
}

void f()
{
    int n,a,b,i,l,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<22;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<8;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<15;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<8;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
}

void h()
{
    int n,a,b,i,l,j;
    for(i=0;i<8;i++)
    {
        for(j=0;j<21;j++)
        {
            if(j>6&&j<14)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    for(i=0;i<6;i++)
    {
        for(j=0;j<21;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=0;i<8;i++)
    {
        for(j=0;j<21;j++)
        {
            if(j>6&&j<14)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    printf("\n");
}

void s()
{
    int n,a,b,i,l,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<22;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<8;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<22;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<22;j++)
        {
            if(j>13)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<22;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

}

void u(void)
{
    int n,a,b,i,l,j;
    for(i=0;i<15;i++)
    {
        for(j=0;j<22;j++)
        {
            if(j>5&&j<16)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<22;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
}

void v(void)
{
    int n=0,a=5,b=16,i,l=21,j;
    for(i=0;i<10;i++)
    {
        for(j=0;j<22;j++)
        {
            if(j>5&&j<16)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    for(i=0;i<6;i++)
    {
        for(j=0;j<22;j++)
        {
            if((j>=n&&j<=a)||(j>=b&&j<=l))
                printf("*");
            else
                printf(" ");
        }
        n++;a++;b--;l--;
        printf("\n");
    }
    for(i=1,n=1;i<10;i+=2,n++)
    {
        for(l=0;l<6;l++)
            printf(" ");
        printf("%*c",n,'*');
        for(j=8;j>i-1;j--)
            printf("*");
        printf("\n");
    }
    printf("\n");
}

void j()
{
    int n,a,b,i,l,j;
    for(i=0;i<12;i++)
    {
        for(j=0;j<5;j++)
            printf(" ");
        for(j=0;j<22;j++)
        {
            if(j>9&&j<15)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
            printf(" ");
        for(j=0;j<22;j++)
        {
            if((j>9&&j<15)||j<5)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
            printf(" ");
        for(j=0;j<15;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
}

void k(void)
{
    int n,a,b,i,l,j;
    for(i=0,n=10;i<10;i++)
    {
        n--;
        for(j=0;j<5;j++)
            printf("*");
        for(j=0;j<n;j++)
            printf(" ");
        for(j=0;j<5;j++)
            printf("*");
        printf("\n");
    }
    for(i=0;i<9;i++)
    {
        for(j=0;j<5;j++)
            printf("*");
        for(j=0;j<i+1;j++)
            printf(" ");
        for(j=0;j<5;j++)
            printf("*");
        printf("\n");
    }
    printf("\n");
}

void m(void)
{
    int n,a,b,i,l,j;
    for(i=1;i<=6;i++)
    {
        for(j=0;j<5;j++)
            printf("*");
        for(j=1;j<i;j++)
            printf(" ");
        for(j=0;j<5;j++)
            printf("*");
        for(j=5;j>=i;j--)
            printf(" ");
        for(j=5;j>=i;j--)
            printf(" ");
        for(j=0;j<5;j++)
            printf("*");
        for(j=1;j<i;j++)
            printf(" ");
        for(j=0;j<5;j++)
            printf("*");
        printf("\n");
    }
    for(i=0,n=8,a=2;i<4;i++,n-=2,a++)
    {
        for(j=0;j<5;j++)
            printf("*");
        for(j=0;j<5;j++)
            printf(" ");
        printf("%*c",a,'*');
        for(j=1;j<n;j++)
            printf("*");
        for(j=0;j<5;j++)
            printf(" ");
        printf("%*c",a-1,' ');
        for(j=0;j<5;j++)
            printf("*");
        printf("\n");
    }
    for(i=0;i<7;i++)
    {
        for(j=0;j<30;j++)
        {
            if(j<5||j>24)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}

void y(void)
{
    int n,a,b,i,l,j;
    for(i=1;i<=11;i++)
    {
        for(j=1;j<i;j++)
            printf(" ");
        for(j=0;j<5;j++)
            printf("*");
        for(j=10;j>=i;j--)
            printf(" ");
        for(j=10;j>=i;j--)
            printf(" ");
        for(j=0;j<5;j++)
            printf("*");
        for(j=1;j<i;j++)
            printf(" ");
        printf("\n");
    }
    for(i=0,a=7;i<2;i++,a-=2)
    {
        for(j=0;j<11;j++)
            printf(" ");
        printf("%*c",i+1,'*');
        for(j=a;j>0;j--)
            printf("*");
        printf("\n");
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<12;j++)
            printf(" ");
        for(j=0;j<6;j++)
            printf("*");
        printf("\n");
    }
    printf("\n");
}

void p(void)
{
    int n,a,b,i,l,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<20;j++)
            printf("*");
        printf("\n");
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<20;j++)
        {
            if(j<5||j>14)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<20;j++)
            printf("*");
        printf("\n");
    }
    for(i=0;i<8;i++)
    {
        for(j=0;j<5;j++)
            printf("*");
        printf("\n");
    }
    printf("\n");
}

void t(void)
{
    int n,a,b,i,l,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<20;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=0;i<15;i++)
    {
        for(j=0;j<20;j++)
        {
            if(j>6&&j<13)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}

void q(void)
{
    int n,a,b,i,l,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<20;j++)
            printf("*");
        printf("\n");
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<20;j++)
        {
            if(j<5||j>14)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<20;j++)
        {
            if(j<5||j>11)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<25;j++)
            printf("*");
        printf("\n");
    }
    printf("\n");
}

void r()
{
    int n,a,b,i,l,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<20;j++)
            printf("*");
        printf("\n");
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<20;j++)
        {
            if(j<5||j>14)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<20;j++)
            printf("*");
        printf("\n");
    }
    for(i=0;i<8;i++)
    {
        for(j=0;j<5;j++)
            printf("*");
        printf("%*c",i+3,'*');
        for(j=0;j<5;j++)
            printf("*");
        printf("\n");
    }
    printf("\n");
}

void w(void)
{
    int n,a,b,i,l,j;
    for(i=0;i<6;i++)
    {
        for(j=0;j<25;j++)
        {
            if(j<5||j>19)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for(i=0;i<9;i++)
    {
        for(j=0;j<25;j++)
        {
            if((j>4&&j<10)||(j>14&&j<20))
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<25;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
}

void x(void)
{
    int n,a,b,i,l,j;
    for(i=0,a=1,b=15;i<8;i++,a++,b-=2)
    {
        printf("%*c",a,'*');
        for(j=1;j<5;j++)
        {
            printf("*");
        }
        printf("%*c",b,'*');
        for(j=1;j<5;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<8;j++)
        {
            printf(" ");
        }
        for(j=0;j<8;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    a--;
    b+=2;
    for(i=0;i<8;i++,a--,b+=2)
    {
        printf("%*c",a,'*');
        for(j=1;j<5;j++)
        {
            printf("*");
        }
        printf("%*c",b,'*');
        for(j=1;j<5;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
}

void z(void)
{
    int n,a,b,i,l,j;
    for(i=0;i<3;i++)
    {
        for(n=0;n<3;n++)
            printf(" ");
        for(j=0;j<20;j++)
            printf("*");
        printf("\n");
    }
    for(i=0,a=15;i<14;i++,a--)
    {
        for(n=0;n<3;n++)
            printf(" ");
        printf("%*c",a,'*');
        for(j=0;j<4;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(n=0;n<3;n++)
            printf(" ");
        for(j=0;j<20;j++)
            printf("*");
        printf("\n");
    }
    printf("\n");
}

void gap(void)
{
    int n,a,b,i,l,j;
    for(i=0;i<20;i++)
        printf("\n");
}

int main()
{
    char ch;
    printf("Enter some alphabets: ");
    while(1)
    {
        ch=getchar();
        if(ch=='\n')
        {
            break;
        }
        else
        {
            if(ch>='A'&&ch<='Z')
                ch+=32;
            printf("\n");
            switch(ch)
            {
            case 'a':
                a();
                break;
            case 'b':
                b();
                break;
            case 'c':
                c();
                break;
            case 'd':
                d();
                break;
            case 'e':
                e();
                break;
            case 'f':
                f();
                break;
            case 'g':
                g();
                break;
            case 'h':
                h();
                break;
            case 'i':
                i();
                break;
            case 'j':
                j();
                break;
            case 'k':
                k();
                break;
            case 'l':
                l();
                break;
            case 'm':
                m();
                break;
            case 'n':
                n();
                break;
            case 'o':
                o();
                break;
            case 'p':
                p();
                break;
            case 'q':
                q();
                break;
            case 'r':
                r();
                break;
            case 's':
                s();
                break;
            case 't':
                t();
                break;
            case 'u':
                u();
                break;
            case 'v':
                v();
                break;
            case 'w':
                w();
                break;
            case 'x':
                x();
                break;
            case 'y':
                y();
                break;
            case 'z':
                z();
                break;
            case ' ':
                gap();
                break;
            }
        }
    }
    return 0;
}

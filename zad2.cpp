#include<iostream>
using namespace std;
char upperCase(char a)
{
    if(a>='a' && a<='z') return (a - ('a'-'A'));
    else return a;
}
bool check1(char a[],int i)
{
    if((a[i+1])=='u') {
        if((a[i+2])=='p') {
            if((a[i+3])=='c') {
                if((a[i+4])=='a') {
                    if((a[i+5])=='s') {
                        if((a[i+6])=='e') {
                            if((a[i+7])=='>') return 1;
                        }
                        else return 0;
                    }
                    else return 0;
                }
                else return 0;
            }
            else return 0;
        }
        else return 0;
    }
    else return 0;
}

bool check2(char a[],int i)
{
    if((a[i+1])=='/') {
        if((a[i+2])=='u') {
            if((a[i+3])=='p') {
                if((a[i+4])=='c') {
                    if((a[i+5])=='a') {
                        if((a[i+6])=='s') {
                            if((a[i+7])=='e') {
                                if((a[i+8])=='>') return 1;
                            }
                            else return 0;
                        }
                        else return 0;
                    }
                    else return 0;
                }
                else return 0;
            }
            else return 0;
        }
        else return 0;
        }
    else return 0;
}
void func(char a[])
{
    int i=0, f=0;
    while(a[i]!=NULL)
    {

        if(a[i]=='<') {
            if(check1(a,i)) {
                i = i+7;
                f=1;
            }
            if(check2(a,i)) {
                i = i+8;
                f=0;
            }
        }
        if(f==1) a[i] = upperCase(a[i]);
        i++;
    }
}
int main()
{
    char a[100];
    cin.getline(a,100,'\n');
    func(a);
    cout<<a;
}

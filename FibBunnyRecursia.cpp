#include <iostream>
using namespace std;
unsigned long f(unsigned long n)
{
    if( n==2)
        return 2;
    else if (n==1)
        return 1;
    else
        return f(n-1)+f(n-2);
}
int main(){
    setlocale(LC_CTYPE, "Russian");
    int n;
    cin>>n;
    if(n==1){
        cout<<"����� ������:"<<1<<endl;
        cout<<"���������� ���:"<<1<<endl;
        cout<<"Fn+1/Fn:"<<2<<endl;
        cout<<"����� ����� ���������:"<<2<<endl;
    }
    else if(n==2){
        cout<<"����� ������:"<<2<<endl;
        cout<<"���������� ���:"<<2<<endl;
        cout<<"Fn+1/Fn:"<<2.5<<endl;
        cout<<"����� ����� ���������:"<<3<<endl;
    }
    else{
    cout<<"����� ������:"<<1<<endl;
    cout<<"���������� ���:"<<1<<endl;
    cout<<"Fn+1/Fn:"<<2<<endl;
    cout<<"����� ����� ���������:"<<2<<endl;
    cout<<"����� ������:"<<2<<endl;
    cout<<"���������� ���:"<<2<<endl;
    cout<<"Fn+1/Fn:"<<2.5<<endl;
    cout<<"����� ����� ���������:"<<3<<endl;
    for(int i=2;i++<n;){
        int f1 = 0, f2 = 1,k=1;
        while (f2 <= f(i)){
            if (f2 == f(i))
                break;
        int t = f1;
        f1 = f2;
        f2 = t + f2;
        k++;
        }
        double b = f(i);
        cout<<"����� ������:"<<i<<endl;
        cout<<"���������� ���:"<<f(i)<<endl;
        cout<<"Fn+1/Fn:"<<f(i)+1/b<<endl;
        cout<<"����� ����� ���������:"<<k<<endl;
    }
    }
    return 0;
}

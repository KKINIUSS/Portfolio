#include <iostream>
using namespace std;
int main(){
    setlocale(LC_CTYPE, "Russian");
    int n;
    int a1 = 1, a2 = 2, a;
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
        a = a1+a2;
        a1 = a2;
        a2 = a;
        int f1 = 0, f2 = 1,k=1;
        while (f2 <= a){
            if (f2 == a)
                break;
        int t = f1;
        f1 = f2;
        f2 = t + f2;
        k++;
        }
        double b = a;
        cout<<"����� ������:"<<i<<endl;
        cout<<"���������� ���:"<<a<<endl;
        cout<<"Fn+1/Fn:"<<a+1/b<<endl;
        cout<<"����� ����� ���������:"<<k<<endl;
        }
    }
    return 0;
}

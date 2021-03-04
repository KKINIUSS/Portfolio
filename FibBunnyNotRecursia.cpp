#include <iostream>
using namespace std;
int main(){
    setlocale(LC_CTYPE, "Russian");
    int n;
    int a1 = 1, a2 = 2, a;
    cin>>n;
    if(n==1){
        cout<<"Номер месяца:"<<1<<endl;
        cout<<"Количество пар:"<<1<<endl;
        cout<<"Fn+1/Fn:"<<2<<endl;
        cout<<"Номер числа Фиббоначи:"<<2<<endl;
    }
    else if(n==2){
        cout<<"Номер месяца:"<<2<<endl;
        cout<<"Количество пар:"<<2<<endl;
        cout<<"Fn+1/Fn:"<<2.5<<endl;
        cout<<"Номер числа Фиббоначи:"<<3<<endl;
    }
    else{
        cout<<"Номер месяца:"<<1<<endl;
        cout<<"Количество пар:"<<1<<endl;
        cout<<"Fn+1/Fn:"<<2<<endl;
        cout<<"Номер числа Фиббоначи:"<<2<<endl;
        cout<<"Номер месяца:"<<2<<endl;
        cout<<"Количество пар:"<<2<<endl;
        cout<<"Fn+1/Fn:"<<2.5<<endl;
        cout<<"Номер числа Фиббоначи:"<<3<<endl;
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
        cout<<"Номер месяца:"<<i<<endl;
        cout<<"Количество пар:"<<a<<endl;
        cout<<"Fn+1/Fn:"<<a+1/b<<endl;
        cout<<"Номер числа Фиббоначи:"<<k<<endl;
        }
    }
    return 0;
}

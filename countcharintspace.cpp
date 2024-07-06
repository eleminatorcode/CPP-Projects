#include<iostream>
using namespace std;
int main()
{
    char c;
    c=cin.get();
    int count=0;
    int count1=0;
    int count2=0;
    while(c!='$'){
        
        if(c>=97&&c<=122){
        count++;
            }
            if(c>=48&&c<=57){
                count1++;
            }
            if(c>=0&&c<=32){
                count2++;
            }
            c=cin.get();
}
cout<<"albhabet is:"<<count<<"\n"<<"number is:"<<count1<<"\n"<<"whitespace is:"<<count2;
}
#include<iostream>
using namespace std;
int main(){
    int option;
    float temp;
     cout<<"Enter the OPTION to input value in:"<<"\n"<<"1->Fahrenhite"<<"\n"<<"2->Celcius"<<"\n"<<"3->kelvin"<<endl<<endl;
     cin>>option;
     cout<<endl;
     cout<<"Enter The temperature:";
     cin>>temp;
     float fahrenhitec, cleciusK, kelvinC,celciusf,kelvinf,fahrenhiteK;
     fahrenhitec=(temp-32)*5/9;
     fahrenhiteK=((temp-32)*5/9)+273.15;
     cleciusK=(temp+273.15);
     celciusf=(temp*9/5)+32;
     kelvinC=(temp-273.15);
     kelvinf=(temp-273.15)*9/5+32;


     switch(option){
     case 1: cout<<"CELCIUS:"<<fahrenhitec<<endl;
             cout<<"KELVIN:"<<fahrenhiteK<<endl;
             break;
    case 2: cout<<"FAHRENHITE:"<<celciusf<<endl;
            cout<<"KELVIN:"<<cleciusK<<endl;
            break;
    case 3: cout<<"FAHRENHITE:"<<kelvinf<<endl;
            cout<<"CELCIUS:"<<kelvinC<<endl;
            break;
    default: cout<<"invalid option!";

             break;
             }


}
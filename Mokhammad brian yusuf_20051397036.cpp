#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
 
int main (void)
{

 struct
 {
  float jm,mnt,dtk;
  float jm1,m1,d1;
  float jk2,m2,d2;
  float b_menit,b_detik,total;
 }ps [1000];

 cout<<"===================";
 cout<<"\n|| Program Billing ||";
 cout<<"\n|| M  Brian  Yusuf ||";
 cout<<"\n===================";
 cout<<"\n";
 cout<<"\n=====Jam Masuk====="<<endl;
 cout<<"||Jam    : ";cin>>ps[0].jm;
 cout<<"||Menit  : ";cin>>ps[0].mnt;
 cout<<"||Detik  : ";cin>>ps[0].dtk;
 cout<<"||Jam Masuk = "<<ps[0].jm<<" : "
 <<ps[0].mnt<<" : "<<ps[0].dtk;
 cout<<"\n===================";
 cout<<endl<<endl;

 cout<<"=====Jam Keluar====="<<endl;
 cout<<"||Jam    : ";cin>>ps[0].jm1;
 cout<<"||Menit  : ";cin>>ps[0].m1;
 cout<<"||Detik  : ";cin>>ps[0].d1;
 cout<<"||Jam Keluar  = "<<ps[0].jm1<<" : "
 <<ps[0].m1<<" : "<<ps[0].d1;
 cout<<"\n==================";
 if (ps[0].jm > ps[0].jm1)
 { ps[0].jk2 =24-(ps[0].jm-ps[0].jm1); }
 else
 { ps[0].jk2 =ps[0].jm1-ps[0].jm; }
 if (ps[0].mnt > ps[0].m1)
 { ps[0].m2 =ps[0].mnt-ps[0].m1; }
 else
 { ps[0].m2 =ps[0].m1-ps[0].mnt; }
 if (ps[0].dtk > ps[0].d1)
 { ps[0].d2 =ps[0].dtk-ps[0].d1; }
 else
 { ps[0].d2 =ps[0].d1-ps[0].dtk; }

 cout<<endl<<endl;
 cout<<"Total Waktu : "<<ps[0].jk2<<" : "
 <<ps[0].m2<<" : "<<ps[0].d2;

 cout<<endl<<endl;
 ps[0].b_menit = ps[0].m2/60;
 ps[0].b_detik = ps[0].m2/3600;
 ps[0].total = (ps[0].jk2+ps[0].b_menit+ps[0].b_detik)*5000;
 cout<<"Total Biaya : "<<ps[0].total;
 getch();
 }

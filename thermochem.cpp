#include<iostream>
 
#include<iomanip>
 
#include<math.h>
 
using namespace std;
 
//this programme calculates the value of thermal correction to Vibrational energy
 
int main()
 
{
 
float kb=1.3806488*pow(10,-23);
 
float Na=6.02214129*pow(10,23);
 
float Re,Te;
 
float R=kb*Na;
 
float h=6.626*pow(10,-34);
 
float T,vi,zpe=0,Et=0;
 
float c=299.792458*pow(10,8),te;
 
int m,i;
 
//entering the total no of vibrational frequencies excluding imaginary frequencies
 
cin<<m;
 
//Temperature T
 
cin&gt;&gt;T;
 
float vib[m],Etv[m],tv[m],x[m],y[m],z[m];
 
cout&lt;&lt;"i"&lt;&lt;setw(25)&lt;&lt;"Vib-temp"&lt;&lt;setw(25)&lt;&lt;"Vib-Energy"&lt;&lt;endl;
 
cout&lt;&lt;"---------------------------------------------------------------------------------------"&lt;&lt;endl;
 
for(i=0;i&lt;m;i++)
 
{
 
cin&gt;&gt;vib[i];
 
tv[i]=vib[i]*h*c/kb;
 
//tv[i] is the vibrational temperature of the ith mode of vibration
 
x[i]=exp(tv[i]/T)-1;
 
Etv[i]=((tv[i]/2)+(tv[i]/x[i]))*R;
 
z[i]=vib[i]*h*c/2;
 
cout&lt;&lt;i&lt;&lt;setw(25)&lt;&lt;setprecision(9)&lt;&lt;tv[i]&lt;&lt;setw(25)&lt;&lt;setprecision(9)&lt;&lt;Etv[i]/4184&lt;&lt;endl;
 
zpe=zpe+z[i];
 
Et=Et+Etv[i];
 
}
 
Te=3*R*T/2;
 
Re=3*R*T/2;
 
cout<<"---------------------------------------------------------------------------------------";
 
cout&lt;&lt;"Temperature = "&lt;&lt;setprecision(9)&lt;&lt;T&lt;&lt;" kelvin"&lt;&lt;"\t"&lt;&lt;endl;
 
cout&lt;&lt;"Zero-Point correction to Energy = "&lt;&lt;setprecision(9)&lt;&lt;(Na*zpe)/4184&lt;&lt;" kcal/mol"&lt;&lt;"\t"&l;
 
cout&lt;&lt;"Thermal correction to Vib Energy = "&lt;&lt;setprecision(9)&lt;&lt;(Et-Na*zpe)/4184&lt;&lt;" kcal/mol"&lt;&lt;endl;
 
cout&lt;&lt;"Thermal correction to Rot Energy = "&lt;&lt;setprecision(9)&lt;&lt;(Re)/4184&lt;&lt;" kcal/mol"&lt;&lt;endl;
 
cout&lt;&lt;"Thermal correction to Trans Energy = "&lt;&lt;setprecision(9)&lt;&lt;(Te)/4184&lt;&lt;" kcal/mol"&lt;&lt;endl;
 
cout&lt;&lt;"RT = "&lt;&lt;setprecision(9)&lt;&lt;R*T/4184&lt;&lt;endl;
 
return 0;
 
}

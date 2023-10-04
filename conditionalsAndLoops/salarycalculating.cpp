#include<iostream>
using namespace std;

int main(){

  int basic,totalSalary;
  cout<<"Enter Basic :";
  cin>>basic;
  char grade ;
  cout<<"Enter the grade as A or B or C or else :";
  cin>>grade;

 float hra = 0.2*basic;
 float da = 0.5*basic;

 int allow;
 if(grade == 'A'){
    allow = 30600;
 }
 else if( grade == 'B'){
   allow = 27600;
 }
 else if(grade == 'C'){
  allow = 24600;
 }
 else {
  allow = 17600;
 }

 int pf = 0.12*basic;
 totalSalary = hra + da + allow + basic - pf;
 cout<<"Total salary is :"<<totalSalary<<endl;
 return 0;
}
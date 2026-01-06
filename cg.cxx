#include<iostream> 
#include<cmath> 
using namespace std; 
float best_case(float q, float gama) 
{ 
return 1.0/(6.0*pow(q,-1*gama)); 
} 
float worst_case(float q, float gama) 
{ 
return 1.0/(2.0*pow(q-1,-1*gama)+2*pow(q,-1*gama)+2*pow(q+1,-1*gama)); 
} 
int main() 
{ 
float gama; 
float q= sqrt(3*7); 
cout<<"Enter the value of gama: "; 
cin>>gama; 
float res1 = best_case(q, gama); 
float res2 = worst_case(q, gama); 
cout<<"Best case result:"<< res1<<" "<<res2; 
return 0;  
}
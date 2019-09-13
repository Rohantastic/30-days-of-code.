#include<iostream>
#include<cmath> 
using namespace std;

int main() 
{
    double meal,tipp,taxp;
    int total ;
    
    cin>>meal>>tipp>>taxp;
    
    tipp=(meal*tipp/100);
     
    taxp=(meal*taxp/100);
    
    
    total = round(meal + tipp+taxp);
    cout<< dollars;
    return 0;
}

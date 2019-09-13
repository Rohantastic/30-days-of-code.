 
 
#include <iostream>
 
using namespace std;

int main() 
{
    double meal,tipp,taxp;
    int total ;
    
    cin>>meal>>tipp>>taxp;
    
    tipp=(meal*tipp/100);
     
    taxp=(meal*taxp/100);
    
    
    total = (meal + tipp+taxp);
    cout<<"The total meal cost is "<<total<<" dollars.";
    return 0;
}

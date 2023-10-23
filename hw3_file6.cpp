#include <iostream>
using namespace std;
int main()
{
    bool ingroup[20];
    int innum=20;
    for(int i=0;i<20;i++)
        ingroup[i]=true;
    int time=0;
    int j=1;    
    for(int cycle=1;innum!=0;cycle++)
    {
            int k=(time)%20;//使得循环时可以找到j所对于的编号 
            
            if (ingroup[k]==true)
            
            {    if((j)%3==0 && ingroup[k]==true )
                {
                cout<<k<<" ";
                ingroup[k]=false;
                innum--;
                }   
               time++;
                j++;
            }
            else
                time++;    
    }
    return 0;
}
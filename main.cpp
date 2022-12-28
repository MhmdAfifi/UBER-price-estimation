#include <iostream>

using namespace std;

class UberX
{
public:
    float duration,distance, surgePrice;
    char character;

    UberX(float du,float di,float su, char c)
    {
        duration = du;
        distance = di;
        surgePrice = su;
        character = c;

    }

 int cost()
 {
     switch(character)
     {
         case 'N': return 8+(duration * 0.45)+ (distance * 3.05);
         break;

         case 'Y': return 8+( (duration * 0.45)+ (distance * 3.05) * surgePrice) ;
         break;

     }

 }



};

int main()
{
    float duration, distance, surgePrice;
    char surge, servicetype;

    cout<<"enter the time in minutes \n";
    cin>>duration;

    cout<<"enter the distance \n";
    cin>>distance;
    distance = distance * 1.6093;

    cout<<"enter the service type \n";
    cout<<"for uber x entyer X, for uber taxi enter T \n";
    cin>>servicetype;

    cout<<"is there a surge or not? \n";
    cin>>surge;

    if(surge == 'Y')
    {

        cout<<"enter the surge price value \n";
        cin>>surgePrice;
    }else
    {
        surgePrice=1;
    }

    UberX uberXcar = UberX(duration, distance, surgePrice ,surge);
   // UberX uberTcar = UberX(duration, distance, surgePrice ,surge);
   // UberX uberCFTcar = UberX(duration, distance, surgePrice ,surge);


switch(servicetype)
{

case 'X':
    if(uberXcar.cost()< 13)
    {
        cout<<"the cost is : "<<13<<" EGP"<<endl;
    }else
    {
        cout<<"the cost is : "<<uberXcar.cost()<<" EGP"<<endl;


    }
}






    return 0;
}

#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
   char znak='a';
   int litera = 0;
   do
   {
       litera=int(znak);
       cout << znak <<"  "<< endl;
       litera++;
       znak=char(litera);
       Sleep (1000);

   }while (znak<='t');
   return(0);



}

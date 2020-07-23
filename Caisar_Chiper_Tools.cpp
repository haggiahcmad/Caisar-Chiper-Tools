#include <iostream>
#include<cwchar>
using namespace std;

int main()
{
   int i, x;
   char str[1000];

   cout<<" _________________________________________"<<endl;
   cout<<"|            Caisar Chiper Tools          |"<<endl;
   cout<<"|_________________________________________|"<<endl;
   cout<<"|                                         |"<<endl;
   cout<<"|                 Engkripsi               |"<<endl;
   cout<<"|                    &                    |"<<endl;
   cout<<"|                 Dekripsi                |"<<endl;
   cout<<"|_________________________________________|"<<endl;
   
   cout << " Masukan Text : ";
   cin.getline(str, 1000);

   cout << "1 = Engkripsi\n";
   cout << "2 = Dekripsi\n";
   cout << "Silahkan Pilih 1/2 : ";
   cin >> x;

   //using switch case statements
   switch(x)
   {
      //first case for encrypting a string
      case 1:
         for(i = 0; (i < 1000 && str[i] != '\0'); i++)
            str[i] = str[i] - 10; 

         cout << "\nEngkripsi Text: " << str << endl;
         break;

      //second case for decrypting a string
      case 2:
         for(i = 0; (i < 1000 && str[i] != '\0'); i++)
         str[i] = str[i] + 10; 

      cout << "\nDekripsi Text: " << str << endl;
      break;

      default:
         cout << "\nInput Salah !!!\n";
   }
   return 0;
}

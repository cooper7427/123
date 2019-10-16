#include <iostream>

using namespace std;

int main(){
   char str[100];
   bool IsBreak=false;
   cout<<"آâهنèٍه"<<endl;
   cin>>str;
   for (int i=0; str[i]!='\0'; i++)
   if (str[i]<48 || str[i]>57) {
      cout<<"آâهنهيî يه ÷èٌëî\n"; 
      IsBreak=true; 
      break;
   }
   if(IsBreak==false){
      cout<<"Hello, "<<str<<endl;
   }
   return 0;
}
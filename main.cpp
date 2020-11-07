 #include <iostream>
 using namespace std;
 int main()
 {
   int num, counter, res;
   cout <<"Which number would you like to see the multiplication table? ";
   cin >>num;
   for (counter=0;counter<=10;counter++)
   {
   	   res = num * counter;
     cout <<num<<" x "<<counter<<" = "<<res<<"\n";  	
   }
     
 }

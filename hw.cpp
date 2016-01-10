

#include<iostream>
 
using namespace std;
 
class programming
{
   public:
      int variable;
 
   public:
 
      void input_value()
      {
         cout << "In function input_value, Enter an integer\n";
         cin >> variable;
      }
 
      void output_value()
      {
         cout << "Variable entered is ";
         cout << variable << "\n";
         cout << "done.\n" << endl ;
      }

      void output_help()
      {
         cout << "Enter a number please" << endl ;
      }

};
 
main()
{
   programming object; 
 
   object.output_help() ;
   object.input_value();
   object.output_value();
 
   //object.variable;  Will produce an error because variable is private
 
   return 0;
}

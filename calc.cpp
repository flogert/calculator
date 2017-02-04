#include <cstdlib>
#include <iostream>

using namespace std;
float addition(float num1, float num2);
float subtraction(float num1, float num2);
float multiplication(float num1, float num2);
float division(float num1, float num2);


int main()
{
    float number1;
    float number2;
    int choice;
    cout << "Choose your operation. 1 = Adding. 2 = Subtracting. 3 = Multiplying. 4 = Dividing" << endl;
    cout << "Choice: ";
    cin >> choice;
    if(choice==1)
    {
                 //Addition
    cout << " Now adding. Enter the first number that you want to add. \n Number 1: " << endl;
    cin >> number1;
    cout << " Enter the second number. \n Number 2: ";
    cin >> number2;
    cout << " The answer is: " << addition(number1, number2) << endl;
        
    }
    else
    { 
        if(choice==2)
        {
               cout << " Now subtracting. Enter the first number that you want to subtract. \n Number 1: ";
                cin >> number1;
                cout << " Enter the second number. \n Number 2: ";
                cin >> number2;
                cout << " The answer is: " << subtraction(number1, number2) << endl;
            
                }
                else
                {
                    if (choice==3)
                    {
                       cout << " Now multiplying. Enter the first number that you want to multiply. \n Number 1: ";
                       cin >> number1;
                       cout << " Enter the second number. \n Number 2: ";
                       cin >> number2;
                       cout << " The answer is: " << multiplication(number1, number2) << endl;           
                    
                    
                     }
                     else
                     {
                         if (choice ==4)
                         {
                                     cout << " Now dividing. Enter the first number that you want to divide. \n Number 1: ";
                                     cin >> number1;
                                     cout << " Enter the second number. \n Number 2: ";
                                     cin >> number2;
                                     if (number2==0)
                                     {
                                                    cout << "\nAnswer is undefined\n";
                                     }
                                     else
                                      {
                                                    cout << " The answer is: " << division(number1, number2) << endl;
                                      }
                         }
                        else
                                      {
                                          cout << "\n You must select a number between 1 and 4. \n";
                                      }
                                    
                      }
                     
               }
                     
      } 
  
  
    system("PAUSE");
    return 0;
}

float addition(float num1, float num2)
{
    return num1 + num2;
}
float subtraction(float num1, float num2)
{
    return num1 - num2;
}
float multiplication(float num1, float num2)
{
    return num1 * num2;
}
float division(float num1, float num2)
{
    return num1 / num2;
}

#include <iostream>
using namespace std;
char letterconverter(char* i);

int main()
{
  char number[100] = "";
  char actual[100] = "";
  int base1;
  int base2;
  cout << "Enter the number you wish to have converted (up to 10 digits).\n";
  cin >> number;
  cout << "What base is it?\n";
  cin >> base1;
  cout << "What base do you want it to be?\n";
  cin>>base2;
  //cout << "This is a test. Your number is: " << number <<". The length is: "<<strlen(number)<<". It is base " << base1 << ". You want it to be base " <<base2 <<"\n"; //DEBUG/TEST
  //*actual = letterconverter(number);				//commented out
  /*
  for (int i =0;actual[i];i++)
  {
	  cout << actual[i];
  }*/						//Broken atm, YOU CANT RETURN ARRAYS IN C++ should increment through and add to array in here while printing. increment through number. if it is a digit, print, convert to int and add to actual (MAKE INT ARRAY), if not get a return int from convert

}

char letterconverter(char* number)
{
	char actual[100]="";
	int i = 0;
	for(int k = 0; number[k]; k++)
	{
	  if (isdigit(number[k]))
	  { 
		  actual[i]=number[k];
		  i++;
	  }
	  else 
	  {
			switch (number[k])
			{
			case 'a': actual[i]='1'; actual[i+1]='0'; i = i+2; break;
			}
	  }
	  for (int i =0;actual[i];i++)
  {
	  cout << actual[i];
  }
	}
	return *actual;
}
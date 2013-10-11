#include <iostream>
#include <array>
#include <math.h>

using namespace std;
int letterconverter(int i);

int main()
{
  char number[100] = "";
  int actual[100];
  int converted=0;
  int base1;
  int base2;
  int length =0;
  cout << "Enter the number you wish to have converted (up to 20 digits).\n";
  cin >> number;
  cout << "What base is it? (up to base 30)\n";
  cin >> base1;
  cout << "What base do you want it to be?\n";
  cin>>base2;
  //cout << "This is a test. Your number is: " << number <<". The length is: "<<strlen(number)<<". It is base " << base1 << ". You want it to be base " <<base2 <<"\n"; //DEBUG/TEST
  //*actual = letterconverter(number);				//commented out
  for (int i =0;number[i];i++)
  {
	  if (isdigit(number[i]))
	  {
		  //cout << number[i]; debug
		  actual[i] = number[i] -'0'; //converts from char to int
		  length++;
	  }
	  else
	  {
		  actual[i] = letterconverter(number[i]); //gets int from letter
		  length++;
		  //cout << actual[i]; debug
	  }
  }		

 for (int i=0;actual[i];i++)
  {
	converted = converted + (actual[i]*(pow(base1,length-i)));            //I believe this is broken, converted is run value. should be a valid decimal value.
  }
  cout << converted;
}

int letterconverter(int number)
{
			switch (number)
			{
			case 'a': return 10;
			case 'b': return 11;
			case 'c': return 12;
			case 'd': return 13;
			case 'e': return 14;
			case 'f': return 15;
			case 'g': return 16;
			case 'h': return 17;
			case 'i': return 18;
			case 'j': return 19;			
			case 'k': return 20;
			case 'l': return 21;
			case 'm': return 22;
			case 'n': return 23;
			case 'o': return 24;
			case 'p': return 25;
			case 'q': return 26;
			case 'r': return 27;
			case 's': return 28;
			case 't': return 29;
			case 'u': return 30;
			}
}
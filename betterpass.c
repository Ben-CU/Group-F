#include <stdio.h>
#include <string.h>

int main()
{
  char UserInput[7];
  printf ("Please enter the password: ");
  fgets(UserInput, 7, stdin);
  long PassKey = 965848625040;
  int InputLength = strlen(UserInput);
  int NumberArray[InputLength];
  int Counter;
  long UsersFirstKey = 1;
  int UsersSecondKey = 0;
  char SecretStuff[] = "ucjamkcxrmxrfcxqcapcrxkylgdcqrmxbmlrxqfmuxrmxmrfcpq";
  for (Counter = 0; Counter < InputLength; Counter++)
  {
    NumberArray[Counter] = UserInput[Counter];
    UsersFirstKey = UsersFirstKey * NumberArray[Counter];
    UsersSecondKey = UsersSecondKey + NumberArray[Counter];
  }
  if (UsersSecondKey > 25)
  {
    UsersSecondKey = UsersSecondKey / 25;
  }
  if (PassKey == UsersFirstKey)
  {
    char CharList[] = " abcdefghijklmnopqrstuvwxyz";
    char DecodedSecretStuff[strlen(SecretStuff)];
    for (Counter = 0; Counter < strlen(SecretStuff); Counter++)
    {
      int CurrentPosition = 0;
      while (SecretStuff[Counter] != CharList[CurrentPosition])
      {
        CurrentPosition++;
      }
      CurrentPosition = CurrentPosition - UsersSecondKey;
      if (CurrentPosition < 0)
      {
        DecodedSecretStuff[Counter] = CharList[CurrentPosition + strlen(CharList) - 1];
      }
      else
      {
        DecodedSecretStuff[Counter] = CharList[CurrentPosition];
      }
    }
    printf ("%s\n", DecodedSecretStuff);
  }
  else
  {
    printf ("Sorry that Password is incorrect, stay away.");
  }
return 0;
}

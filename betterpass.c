#include <stdio.h>
#include <string.h>

int main()
{
  char UserInput[7];
  printf ("Please enter the password: ");
  fgets(UserInput, 7, stdin);
  long PassKey = 1946252954870;
  int InputLength = strlen(UserInput);
  int NumberArray[InputLength];
  int Counter;
  long UsersFirstKey = 1;
  char SecretStuff[] = "tDKBNLDySNySGDyRDBQDSyLzMHEDRSNyxykDUDQyRGNVySNyNSGDQRy";
  for (Counter = 0; Counter < InputLength; Counter++)
  {
    NumberArray[Counter] = UserInput[Counter];
    UsersFirstKey = UsersFirstKey * NumberArray[Counter] + NumberArray[Counter];
  }
  long UsersSecondKey = UsersFirstKey;
  while (UsersSecondKey > 53)
  {
    UsersSecondKey = UsersSecondKey % 53;
  }
  if (PassKey == UsersFirstKey)
  {
    char CharList[] = " abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ-)";
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
    printf ("Sorry that Password is incorrect, stay away.\n");
  }
return 0;
}

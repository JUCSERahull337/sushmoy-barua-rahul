
#include <stdio.h>
int check_anagram(char [], char []);

int main()
{
  char t1[1000], t2[1000];

  printf("Enter First string\n");
  gets(t1);
  printf("Enter Second string\n");
  gets(t2);

  if (check_anagram(t1, t2))
    printf("The strings are anagrams.\n");
  else
    printf("The strings aren't anagrams.\n");

  return 0;
}

int check_anagram(char t1[], char t2[])
{
  int first[26] = {0}, second[26] = {0}, c=0;

  // Calculating frequency of characters of the first string

  while (t1[c] != '\0') {
    first[t1[c]-'a']++;
    c++;
  }

  c = 0;

  while (t2[c] != '\0') {
    second[t2[c]-'a']++;
    c++;
  }

  // Comparing the frequency of characters

  for (c = 0; c < 26; c++)
    if (first[c] != second[c])
      return 0;

  return 1;
}

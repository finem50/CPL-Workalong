#include <stdio.h>
#define MAXLINE 1000

int n_getline(char line[], int maxline);
void copy(char to[], char from[]);

// Print longest input line
int main(){

  int len, max;
  char line[MAXLINE], longest[MAXLINE];

  max = 0;
  while((len = n_getline(line, MAXLINE)) > 0)
    if(len > max){

      max = len;
      copy(longest, line);
    }

    if(max > 0)
      printf("%s", longest);

  return 0;
}

int n_getline(char s[], int lim){

  int c, i;

  for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
    s[i] = c;

  if(c == '\n'){
    s[i] = c;
    i++;
  }

  s[i] = '\0';

  return i;
}

// Copy from into to; assume to is big enough
void copy(char to[], char from[]){

  int i;
  i = 0;

  while((to[i] = from[i]) != '\0')
    i++;
}

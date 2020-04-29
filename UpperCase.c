#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// :)
 
/*
 * turns the given String into upper-case characters
*/
void toUpperCase(char* text){
    int len=strlen(text);
    /*for(int l1=0;l1<len;++l1){
        if('a'<=text[l1]&&text[l1]<='z'){
            text[l1]+='A'-'a';
        }
    }*/
    for(char*ptext;ptext-text<len;*ptext=('a'<=*ptext&&*ptext<='z')?'A'-'a':0,ptext++);
}

void test(char* text){
  char* newString = malloc(strlen(text)*sizeof(char)+1);
  strcpy(newString, text);
  toUpperCase(newString);
  printf("%s --> %s\n", text, newString);
}


int main(int argc, char const *argv[]) {

  test("xyz");
  test("this is a test");
  
  return 0;
}

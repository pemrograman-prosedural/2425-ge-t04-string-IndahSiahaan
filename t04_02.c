// 12S24017 - Arya Pratama Sinambela
// 12S24052 - Indah Triyuni Siahaan

  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  
  int main(int _argv, char **_argc) {
      char input[21];
      scanf("%20s[^\n]", input);
  
      int length = strlen(input);
      for (int i =0; i < length; i++) {
      printf ("%03d", input[i]);
      }
      
      printf("013");
      
      return 0;
  }
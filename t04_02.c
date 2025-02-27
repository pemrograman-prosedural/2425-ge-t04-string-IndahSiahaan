// 12S24017 - Arya Pratama Sinambela
// 12S24052 - Indah Triyuni Siahaan

  #include <stdio.h>
  #include <string.h>
  
  int main(int _argv, char **_argc) {
      char string[21];
      scanf("%20s[^\n]", string);
      int length = strlen(string);
      for (int i = 0; i < length; i++) {
      printf ("%03d", string[i]);
      }

      printf("013");
      
      return 0;
  }
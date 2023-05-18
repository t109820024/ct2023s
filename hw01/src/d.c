#include <stdio.h>
#include <stddef.h>



int main(){
  printf("中文\n\n");

  // https://stackoverflow.com/questions/29776849/why-cant-i-print-a-unicode-character-in-c-with-wchar-t
  wchar_t a = 0x0040;   /* A */
  printf("%lc\n\n", a);

  // https://www.ithome.com.tw/voice/135711
  char text[] = u8"劉𪚥𨰻";
  printf("%s\n\n", text);

  return 0;
}

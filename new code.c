// ai chat bot in c programming
#include <stdio.h>    
#include <conio.h>
#include <string.h>
#include <time.h>
char user_input[50];
 int main()
{   
    //system("cls");
    printf("welcome in ai chat bot\n");
    while(1)
    {
     printf("user==>");
     gets(user_input);
     if(strcmp(user_input,"exit")==0) 
     {
      //   system("cls");
         printf("bot ==> ok bye\n");
         break;
     }
     else if(strcmp(user_input,"hi")==0)
     {
         printf("bot ==> hi sir\n");
     }
     else if(strcmp(user_input,"open chrome")==0)
     {
         printf("ok sir , opening chrome browser\n");
        // system("start chrome");
     }
     else if(strcmp(user_input,"valorant")==0)
     {
         printf("ok,sir , opening valorant\n");
         // system("start Valorant");
     }
     else if(strcmp(user_input,"open notepad")==0)
     {
         printf("ok sir , opening notepad editor\n");
         //system("start notepad");
     }
     else if(strcmp(user_input,"open cmd")==0)
     {
         printf("ok sir , opening cmd terminal\n");
        // system("start cmd");
     }
     else if(strcmp(user_input,"time")==0)
     {
         time_t s, val =1 ;
         struct tm* current_time;
         //time in second
         s = time(NULL);
         current_time = localtime(&s);
         //print time in minute
         //print hour and second
         printf("bot ==> %02d:%02d:%02d\n",current_time->tm_hour,current_time->tm_min,current_time->tm_sec);
     }
     else if(strcmp(user_input,"open youtube")==0)
     {
        printf("ok sir , opening youtube\n");   
        //system("start http://youtube.com");   
     }
    }
    return 0;
}
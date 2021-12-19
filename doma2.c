#include<stdio.h>
#include<math.h>
#include<string.h>
#define N 50


int main()
{
   /* {
      // первое задание
      char *str1[N];
      char str2[N];
      char str3[N];
      int l = 0;
      printf("¬едите строку");
      gets(str1);
      l = strlen(str1);
      int re1 = 0, re2 = 0;
      re1 = l - 1;
      strcpy(*str2, str1);
      for (re2, re1; re2 <= l - 1; re2++, re1--)
      {
         str2[re2] = str1[re1];
      }
      int r1 = 0, r2 = 0, r3 = 0;

      re2 = 1;
      re1 = l - 1;
      strcpy(str3, str2);
      for (re2; re2 <= N; re2++)
      {
         r1 = re2;
         r2 = re2;
         if (str2[re2] == ' ')
         {
            for (r3, r1; r3 <= r2; r1--, r3++)
            {
               str3[r3] = str2[r1];
            }
            r3 = r2;
            r1 = r2;
         }
      }
      printf("Preobrazovannaya: %s\n", str3);
      system("pause");
   */


   // второе задание
   void ex_2();
   {

      struct Ppls
      {
         char famili[256];
         char Name[256];
         char SecondName[256];
         char Pol[256];
         char Job[256];
         int Day;  int Month;  int Year;  int Age;
      };
      int y = 0;

      scanf_s("%d", &y);

      struct Ppls* Arr = (struct Ppls*)malloc(y * sizeof(struct Ppls));
      for (int i = 0; i < y; i++)
      {
         scanf_s("%s", Arr[i].famili, 256);
         scanf_s("%s", Arr[i].Name, 256);
         scanf_s("%s", Arr[i].SecondName, 256);
         scanf_s("%s", Arr[i].Pol, 256);
         scanf_s("%s", Arr[i].Job, 256);
         scanf_s("%d", &Arr[i].Day);
         scanf_s("%d", &Arr[i].Month);
         scanf_s("%d", &Arr[i].Year);
         Arr[i].Age = 2021 - Arr[i].Year;
      }

      for (int i = 0; i < y; i++)
      {
         if (strcmp(Arr[i].Job, "Engineer") == 0)
         {
            if (strcmp(Arr[i].Pol, "M") == 0)
            {
               if (Arr[i].Age >= 65)
               {
                   printf("%d.%d.%d", Arr[i].Job, Arr[i].Day, Arr[i].Month, Arr[i].Year);
                  printf("%s %s %s, %s, %s,", Arr[i].famili, Arr[i].Name, Arr[i].SecondName, Arr[i].Pol);
               }
            }
            else
            {
               if (Arr[i].Age >= 60)
               {
                  printf("%d.%d.%d", Arr[i].Job, Arr[i].Day, Arr[i].Month, Arr[i].Year);
                  printf("%s %s %s, %s, %s,", Arr[i].famili, Arr[i].Name, Arr[i].SecondName, Arr[i].Pol);
               }
            }
         }
      }
   }
}
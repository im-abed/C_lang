// four  ways to compare two arrays of strings
#include <stdio.h>
#include <string.h>
/*
int main(){
//1st way without strcmp (using gets and string library)
char str1[10],str2[10];
int result;
int i;
printf("\n enter the first string\n");
gets(str1);
printf("\n you did enter \n %s",str1);

printf("\n enter the second string\n");
gets(str2);
printf("\n you did enter \n  %s",str2);

for( i=0; str1[i]==str2[i]&&str1[i]=='\0';i++);
//'\0' stands for null which means the end of the string
if(str1[i]>str2[i]){
    printf("\n the first string is bigger");
}
else if(str1[i]<str2[i]){
    printf("\n the second string is bigger");
}else{
        printf("\n the strings are equal");
}
    return 0;

}
*/
/*
// 2nd way like the previous one but with while loop instead
int main(){
char str1[10],str2[10];
int result;
int i=0;
printf("\n enter the first string\n");
gets(str1);
printf("\n you did enter \n %s",str1);

printf("\n enter the second string\n");
gets(str2);
printf("\n you did enter \n  %s",str2);

while(str1[i]==str2[i]&&str1[i]=='\0');
i++;
if(str1[i]>str2[i]){
    printf("\n the first string is bigger");
}
else if(str1[i]<str2[i]){
    printf("\n the second string is bigger");
}else{
        printf("\n the strings are equal");
}
    return 0;

}
*/




// 3rd way using functions
int Comparefunc(char *str1, char *str2);

int main()
{
    char str1[10], str2[10];
    int result;
    int i = 0;
    printf("\n enter the first string\n");
    gets(str1);
    printf("\n you did enter \n %s", str1);

    printf("\n enter the second string\n");
    gets(str2);
    printf("\n you did enter \n  %s", str2);

    result = Comparefunc(str1, str2);

    if (result > 0)
    {
        printf("\n string 1 is bigger");
    }
    else if (result < 0)
    {
        printf("\n second string is bigger");
    }
    else
    {
        printf("\n they re equal");
    }

    return 0;
}

int Comparefunc(char *str1, char *str2)
{
    int i = 0;
    while (str1[i] == str2[i])
    {
        if (str1[i] == '\0' && str2[i] == '\0')
            break;
        i++;
    }
    return str1[i] - str2[i];
}

/*
// 4th way with strcmp
int main()
{
    char str1[10], str2[10];
    int result;
    printf("\n enter the first string \n");
    scanf("%s", str1);
    printf("\n enter the second string \n");
    scanf("%s", str2);

    result = (strcmp(str1, str2));
    if (result == 0)
    {
        printf("\n they are the same");
    }
    else
        printf("\n they are different");

return 0;
}
*/

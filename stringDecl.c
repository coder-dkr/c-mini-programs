#include <stdio.h>
#include <string.h>

//comment out other sections when you run a snippet seperated by xxxxxxxxxx;

int main() {
    char str[] = {'D','H','R','U','V','\0'}; //null '\0' is added at the end of the string array to terminate it;
    printf("%s\n",str); // %s is used to scan or print string 

    //xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx;
    
    //scanning a string
    char str2[50];
    printf("Enter a string: ");
    scanf("%s",str2);
    fflush(stdin);
    printf("Your entered string is %s\n",str2); // it doesnt allow spaces no matter how much length you give;

    //xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
    
    //scanning with spaces
    char str3[50];
    printf("Enter a string with spaces: ");
    fgets(str3,50,stdin); //strictly follows the max input length
     
    //xxxxxxxxxxxxxxxxxxxxxxxxxxx comment any one reading method;

    // gets(str3);// unsecure as it doesnt follow max input limt

    printf("Your entered string is %s\n",str3); // it doesnt allow spaces no matter how much length you give;
    puts(str3);
     

    return 0;
}


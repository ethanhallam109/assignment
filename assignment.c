#include<stdio.h>

int main()
{
    int c;
    char str[26];
    int key=1;
    int x;
    printf("choose an option:\n 1. Encrypt a message\n 2. Decrypt a message\n");
    scanf("%d", &x);
    switch(x)
    {
    case 1:
    {
        printf("\nEnter a message to encrypt:\n ");
        scanf(" %[^\n]s", str);
        
        for( c = 0 ; (c<40 && str[c] != '\0') ; c++)
        {
            if(str[c]=='Z' || str[c]=='z')//coverts z to a
        {
            str[c]=64;
        }
            if(str[c]<=122 && str[c]>=97)//changes case
        {
            str[c]=str[c]-32;
        }
        str[c] = (str[c] + key);
        }
    printf("\n encrypted message:%s\n ", str);
    break;
    }
    
    case 2:
    {
            printf("\nEnter a message to decrypt:\n ");
            scanf(" %[^\n]s", str);
            
        for( c = 0 ; (c<40 && str[c] != '\0') ; c++)
        {
                if(str[c]=='A' || str[c]=='a')
            {
                str[c]=91;
            }
            if(str[c]<=122 && str[c]>=97)
            {
                str[c]=str[c]-32;
            }
        str[c] = (str[c] - key);
        }
        printf("\n encrypted message:%s\n ", str);
	    break;
    }
    default:
    {
        printf("Please restart the program and choose a correct option\n");
        break;
    }
    }
    return 0;
}

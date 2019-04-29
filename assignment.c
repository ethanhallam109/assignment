/*all testing was completed on onlineGBD due to limited knowlege on how to use and work che eclipse as i was unable to*/


#include<stdio.h>
#include <string.h>


int main()
{
    int x;
    printf("choose an option number:\n 1. Encrypt a message using rotation cypher\n 2. Decrypt a message using rotation cypher\n 3. Encrypt a message using substitution cypher\n 4. Decrypt a message using substitution cypher\n");
    scanf("%d", &x);
    
        switch(x)//switch statment allows the user to choose from the 4 options
        {
        case 1:
        {
            /*initiates all variables within the switch set not affecting any other switch sets*/
            int c;
            char str[26];
            int key;
            
            printf("\nEnter a message to encrypt:\n ");
            scanf(" %[^\n]s", str); //stores the message to encrypt
            printf("\nEnter the key:\n ");
            scanf("%d",&key);//allows the user to chose a key for the rotation encryption
            
            for( c = 0 ; (c<40 && str[c] != '\0') ; c++)//initiates loop for the 
            {
                if(str[c]=='Z' || str[c]=='z')//coverts z to a when rotating through stopping the text to be coverted to symbols
                {
                    str[c]=64;
                }
                if(str[c]<=122 && str[c]>=97)//changes case, this will change the case of the message to uppercase
                {
                    str[c]=str[c]-32;
                }
                str[c] = (str[c] + key);//applys the key to the message, encryting the message
            }
        printf("\n encrypted message:%s\n ", str);
        break;
        }
        
        case 2:
        {
            /*initiates all variables within the switch set not affecting any other switch sets*/
            int c;
            char str[26];
            int key;
            
            printf("\nEnter a message to decrypt:\n ");
            scanf(" %[^\n]s", str);
            printf("\nEnter the key:\n ");
            scanf("%d",&key);
                
            for( c = 0 ; (c<40 && str[c] != '\0') ; c++)
            {
                    if(str[c]=='A' || str[c]=='a')//coverts z to a when rotating through stopping the text to be coverted to symbols
                {
                    str[c]=91;
                }
                if(str[c]<=122 && str[c]>=97)//changes case, this will change the case of the message to uppercase
                {
                    str[c]=str[c]-32;
                }
            str[c] = (str[c] - key);//applys the key to the code and decrypts the encryption 
            }
            printf("\n encrypted message:%s\n ", str);
    	    break;
            }
        case 3:
        {
            char lowcase[30]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
            char upcase[30]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
   
        char key[27], m3[1000];
 
    printf("\nenter the message to encrypt: ");
    scanf(" %[^\n]",m3);

    int n;
    int i;

    printf("\nEnter key of 26 characters: ");
    scanf("%s",key);
    
    for(n=0;n<strlen(m3);n++) {
                               
        for(i=0;i<26;i++) {
                                    
            if(upcase[i]==m3[n]) 
            { 
             
                m3[n]=key[i];
                break;
            }
            if(lowcase[i]==m3[n]) 
            {
                m3[n]=key[i];
                break;
            }
        }
    }
        printf("\nyour encrypted message is:\n %s",m3);
        break;
        }
        case 4:
        {
            char upcase[30]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
            char lowcase[30]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
            
            char key[30];
            char m4[1500];
                                      
            printf("\nEnter message to decrypt: ");
            scanf(" %[^\n]",m4);
            
            int n;
            int i;
            
            printf("\nEnter key/26 characters: ");
            scanf("%s",key);
                                      
            for(n=0;n<strlen(m4);n++) {
                                        
                for(i=0;i<26;i++) 
                {
                                            
                    if(m4[n]==key[i])
                    {
                        m4[n]=upcase[i];
                        break;
                    }
                    if(m4[n]==key[i]) 
                    {
                        m4[n]=lowcase[i];
                        break;
                    }
                    else {
                    
                    m4[n]=m4[n];
                    }
                }
            }
                printf("\nDecrypted message: %s",m4);
                return 0;
                }
        default:
        {
            printf("Please restart the program and choose a correct option\n");
            break;
        }
            }
    return 0;
}

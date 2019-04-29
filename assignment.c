/*all testing was completed on onlineGBD and codeboard.io due to limited knowlege on how to use and work che eclipse as i was unable to*/


#include<stdio.h>
#include <string.h>


int main()
{
    int x;
    /*prints the menu for the user to choose from allowing them to choose one of the options*/
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
            
            for( c = 0 ; (c<40 && str[c] != '\0') ; c++)//initiates loop for the encryption
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
                
            for( c = 0 ; (c<40 && str[c] != '\0') ; c++)//begins loop for decryption
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
            /*intitiate the strings to store the message and key allowing for the program to encrypt the message*/
            char lowcase[30]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
            char upcase[30]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
   
        char key[27], m3[1000];
 
    printf("\nenter the message to encrypt: ");
    scanf(" %[^\n]",m3);

    int n;
    int i;

    printf("\nEnter key of 26 characters: ");
    scanf("%s",key);
    
    for(n=0;n<strlen(m3);n++) //i is initialised to 0, while i is less than 26, i is incremented by 1 each time
    {
        for(i=0;i<26;i++) 
        {
            if(upcase[i]==m3[n]) //if the message is uppercase, it will equal the key value of that letter
            { 
                m3[n]=key[i];//Each letter of m3 is substituted for the key letters
                break;
            }
            if(lowcase[i]==m3[n]) //if the message lowercase, it will equal the key value of that letter
            {
                m3[n]=key[i];//Each letter of msg3 is substituted for the keysub letters
                break;
            }
        }
    }
        printf("\nyour encrypted message is:\n %s",m3);
        break;
        }
        case 4:
        {
            /*intitiate the strings to store the message and key allowing for the program to encrypt the message*/
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
                                      
            for(n=0;n<strlen(m4);n++) //i is initialised to 0, while i is less than 26, i is incremented by 1 each time
            {
                for(i=0;i<26;i++) 
                {
                    if(m4[n]==key[i])//If each letter of m4 is substituted for the key letters, it will equal the corresponding letter
                    {
                        m4[n]=upcase[i];//The corresponding characters will be uppercase
                        break;
                    }
                    if(m4[n]==key[i]) //If each letter of m4 is substituted for the key letters, it will equal the corresponding letter
                    {
                        m4[n]=lowcase[i];//The corresponding characters will be lowercase
                        break;
                    }
                    else 
                    {
                        m4[n]=m4[n];//Else the message input is stored as an unchanged message
                    }
                }
            }
                printf("\nDecrypted message: %s",m4);//prints encrypted message for user
                return 0;
                }
        default://default allows for if an incorrect selection is choose in the menu informing the user to restart and choose again
        {
            printf("Please restart the program and choose a correct option\n");
            break;
        }
            }
    return 0; //ends the program
}

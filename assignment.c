#include<stdio.h>

int main()
{
    int c;
    char str[26];
    int x, key = 3;
    
    printf("\nEnter a message to encrypt:\n ");
    scanf("%s", str);
    // scanf("%[^\n]s", str);
    
    for( c = 0 ; (c<40 && str[c] != '\0') ; c++)
        str[c] = str[c] + 3 ;
        
    printf("\n encrypted message:%s\n ", str);
        
	
  return 0;  
}



























//#include<stdio.h>
//
//int main()
//{
//    int c;
//    char str[26];
//    int x, key = 3;
//    
//    printf("Enter a message to encrypt:\n ");
//    scanf("%s", &str);
//    
//    for( c = 0 ; (c<40 && str[c] ! = '\0') ; c++)
//        str[c] = str[c] + key
//        
//    printf("encrypted message:%s\n ", str[c]);
//        
//	
//	
//	
//	
//	
//	
//	
//	
//    
//  return 0;  
//}
////int main()
////{
////	char message[100], ch;
////	int i, key;
////	
////	printf("Enter a message to encrypt: ");
////	Scanf(“%[^\n]s”,str);
////	printf("Enter key: ");
////	scanf("%d", &key);
////	
////	for(i = 0; message[i] != '\0'; ++i){
////		ch = message[i];
////		
////		if(ch >= 'a' && ch <= 'z'){
////			ch = ch + key;
////			
////			if(ch > 'z'){
////				ch = ch - 'z' + 'a' - 1;
////			}
////			
////			message[i] = ch;
////		}
////		else if(ch >= 'A' && ch <= 'Z'){
////			ch = ch + key;
////			
////			if(ch > 'Z'){
////				ch = ch - 'Z' + 'A' - 1;
////			}
////			
////			message[i] = ch;
////		}
////	}
////	
////	printf("Encrypted message: %s", message);
////	
////	return 0;
////}

    #include<stdio.h>
 /* function prototype used to send a message or error if the parameters and argruments seted donn't match. make sense uses it ifi you didi not define de function before the main function */
    void birthday(char name[ ], int age);
    
    int main()
    {
        char name[ ] = "Fer";
        int age = 27;
            
        birthday (name, age); 
        
    return 0;
    }
    
    void birthday(char name[ ], int age) 
    {    
         printf("\n happy birthday dear %s",name);  
         printf("\n You are %d yeras old",age); 
    }
    
#include <stdio.h>
int main(){
    int solved=0;
    int ind=0;
    int key=0;
    int tot;
    char str[5000]={"am rcug oh hvs aozz"};
    char keytest;
    int testright, testleft, test2right;
    for (ind = 0 ; str[ind] != '\0' ; ind++){     //this for loop goes through the array moving one letter right each time
                if (str[ind] > 96   &&  str[ind] < 123){    //checks to see if the character is in the alphabet and is lower case 
                    str[ind] = str[ind] - 32;       //changes it from lower case to upper case
                }
            }
    for(ind=0; str[ind] != '\0' ; ind++){
        testright=ind+1;
        testleft=ind-1;
        test2right=ind+2;
       /* if(str[testright]==32 && str[testleft]==32){
            updown=str[ind]-97;
            keytest=str[ind];
            printf("%d %d" ,updown ,keytest);
                for(updown>=0; keytest!=97 ; key--){
                    keytest=keytest+key;
                }
                key=key+1;
                key=key*-1;
                printf("\n%d\n",key);
        }*/
     
        if(str[testleft]==32 && str[testright]>64 && str[testright]< 91 && str[test2right]==32 && solved==0 ){
            printf("found 2 letter word");
            tot=str[ind]-str[testright];
            if(tot<0){
             tot=tot+26;    
             printf("\n%d",tot);
            }
            switch(tot){
                case(7):        //at
               keytest=str[ind];
               while(keytest != 65){
                   keytest=keytest-1;
                   if (keytest<65){
                       keytest=keytest+26;
                   }
                   key++;
               }
               solved=1;
            break;
           
                case(15):       	  //it
               keytest=str[ind];
               while(keytest != 73){
                   keytest=keytest-1;
                   if (keytest<65){
                       keytest=keytest+26;
                   }
                   key++;
               }
               solved=1;
            break;
            
              case(21):               //in
               keytest=str[ind];
               while(keytest != 73){
                   keytest=keytest-1;
                   if (keytest<65){
                       keytest=keytest+26;
                   }
                   key++;
               }
               solved=1;
            break;
            
              case(16):               //is
               keytest=str[ind];
               while(keytest != 73){
                   keytest=keytest-1;
                   if (keytest<65){
                       keytest=keytest+26;
                   }
                   key++;
               }
               solved=1;
            break;
            
              case(14):                //my
               keytest=str[ind];
               while(keytest != 77){
                   keytest=keytest-1;
                   if (keytest<65){
                       keytest=keytest+26;
                   }
                   key++;
               }
               solved=1;
            break;
            
              case(4):                  //so
               keytest=str[ind];        
               while(keytest != 83){
                   keytest=keytest-1;
                   if (keytest<65){
                       keytest=keytest+26;
                   }
                   key++;
               }
               solved=1;
            break;
           
             case(5):               //to
               keytest=str[ind];
               while(keytest != 84){
                   keytest=keytest-1;
                   if (keytest<65){
                       keytest=keytest+26;
                   }
                   key++;
               }
               solved=1;
            break;
            
              case(2):              //us
               keytest=str[ind];
               while(keytest != 85){
                   keytest=keytest-1;
                   if (keytest<65){
                       keytest=keytest+26;
                   }
                   key++;
               }
               solved=1;
            break;
            
              case(9):          //of
               keytest=str[ind];
               while(keytest != 79){
                   keytest=keytest-1;
                   if (keytest<65){
                       keytest=keytest+26;
                   }
                   key++;
               }
               solved=1;
            break;
            
              case(25):         //hi
               keytest=str[ind];
               while(keytest != 72){
                   keytest=keytest-1;
                   if (keytest<65){
                       keytest=keytest+26;
                   }
                   key++;
               }
               solved=1;
            break;
            
              case(8):          //as
               keytest=str[ind];
               while(keytest != 65){
                   keytest=keytest-1;
                   if (keytest<65){
                       keytest=keytest+26;
                   }
                   key++;
               }
               solved=1;
            break;
            
        }
}
}
    printf("\nkey is %d",key);
    
    
    
    
ind=0;
for(ind=0; str[ind]!='\0' ; ind++){
            if(str[ind]>96 && str[ind]<123){
            str[ind] =str[ind]-key;
                if((str[ind])<(97)){
            str[ind]=str[ind]+26;
        }
        }
        if(str[ind]<91 && str[ind]>64){
        str[ind] =str[ind]-key;    
          if((str[ind])<65){
            str[ind]=str[ind]+26;
        }
     } 
}
printf("\nthe phrase is= %s",str);
}

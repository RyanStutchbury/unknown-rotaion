#include <stdio.h>
int main(){
    int ind=0;
    int key=1;

    char str[5000]={"lime c bat"};
    char updown ,keytest;
    int testright, testleft;
    
    for(ind=0; str[ind] != '\0' ; ind++){
        testright=ind+1;
        testleft=ind-1;
        if(str[testright]==32 && str[testleft]==32){
            updown=str[ind]-97;
            keytest=str[ind];
            printf("%d %d" ,updown ,keytest);
                for(updown>=0; keytest!=97 ; key--){
                    keytest=keytest+key;
                }
                key=key+1;
                key=key*-1;
                printf("\n%d\n",key);
        }
    }
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
printf("%s",str);
}

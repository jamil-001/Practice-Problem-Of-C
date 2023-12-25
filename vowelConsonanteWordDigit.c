#include<stdio.h>
int main(){
    char str[100],ch;
    int i,vowel,consonante,digit,word,other;
    i=vowel=consonante=digit=word=other=0;
     printf("Enter a string:\n");
     gets(str);
     while((ch=str[i])!='\0'){
        if(ch=='a'|| ch=='e'||ch=='i'||ch=='0'||ch=='u'
           ||ch=='a'|| ch=='e'||ch=='i'||ch=='0'||ch=='u')
           vowel++;
           else if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
            consonante++;
           else if(ch>='0'&& ch<='9')
            digit++;
           else if(ch==' ')
            word++;
           else
               other++;
           i++;
     }
     word++;
     printf("Number of vowel: %d\n",vowel);
     printf("Number of consonante: %d\n",consonante);
     printf("Number of digit: %d\n",digit);
     printf("Number of word: %d\n",word);
     printf("Number of other: %d\n",other);
}

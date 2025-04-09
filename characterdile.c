#include<stdio.h>
int main(){
	FILE *fp;
	fp=fopen("sample.txt","r");
	char ch;
	int word_count=0,sentence_count=0,line_count=0;
	while(fscanf(fp,"%c",&ch)==1){
		if(ch==' ' || ch=='.'){
		    word_count+=1;
		}
		if(ch==','){
		  sentence_count+=1;
        }
        if(ch=='\n'){
        	line_count+=1;
        }
     }
     fclose(fp);
        printf("word count=%d\n",word_count);
        printf("sentence count=%d\n",sentence_count);
        printf("line count=%d\n",line_count);
        return 0;
}

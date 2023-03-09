#include <stdio.h>
#include<stdlib.h>

int main(){
    FILE* fp;
    int a[] = {1, 2, 3};
    char b[] = "ABC";
    float c [] = {1.1,1.2,1.3};
    if ((fp = fopen("cj.txt","wb+")) == NULL){
        printf("Cannot open the file ...");
        exit(1);
    }
    if(fwrite(a),sizeof(a),1,fp)!=1){
        printf("File write error...\n");
    }
    fseek(fb, 0 , SEEK_SET);
    if(fwrite(a),sizeof(a), 1, fp)!=1){
        printf("File write error...\n");
    }
    
    return 0;
}

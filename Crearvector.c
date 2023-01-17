#include <stdio.h>

int main(){

    FILE *archivo=NULL;
    FILE *archivo2=NULL;
    int x,y;

    archivo=fopen("vector.txt","r+");
    archivo2=fopen("vector1.txt","w");

    
    if (archivo==NULL){
        printf("No se puede abrir el archivo");
        return -1;
    }

    for(int i=0; i<100; i++){
        fscanf(archivo, "%d",&x);
        y=x*3;
        fprintf(archivo2,"%d\n",y);
    }
     fclose(archivo);
     fclose(archivo2);
     return 0;
}
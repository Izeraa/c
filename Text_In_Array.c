# include <stdio.h>
# include <stdlib.h>
# include <string.h> 
// #include <locale.h> ; setlocale(LC_ALL,"Portuguese");
/* */
// prototipagens
 
int main (void){
   printf("  -------------- Mano VI ---------  \n ");
   //
  char Text_In_Array(int auu,int ayy, FILE *Text_Array_Inside ); // auu-->line ; ayy --> coluna
  // char Text_In_Array ( int  , FILE ); 
  FILE *Text_I;
  //Text_I = fopen("02,1 Lendo Aquivos Textos A.txt","r");
  // Variables
     
    printf(" Passo I \n \n");
    
    char *X_Rline =(char*) calloc(120,sizeof(char));
    char Text_II[300][300];
    char Text_III[300][300];
    int auu,p,i,ayy;
        
    // *X_Rline = Text_In_Array ( auu , Text_I );
    //(FILE*) Text_I = fopen("02,1 Lendo Aquivos Textos A.txt","r")))
    // *X_Rline = Text_In_Array ( auu ,(FILE *Text_I = fopen("02,1 Lendo Aquivos Textos A.txt","r")) ;
    // *X_Rline = Text_In_Array ( auu , (*Text_I = &(fopen("02,1 Lendo Aquivos Textos A.txt","r")))) ;
    //  X_Rline = (char)*( Text_In_Array ( auu , Text_I = fopen("02,1 Lendo Aquivos Textos A.txt","r"))) ;
    
    // strcpy( Text_II ,(char*) ( Text_In_Array ( auu , (FILE*) (Text_I = fopen("02,1 Lendo Aquivos Textos A.txt","r")))));
    // memcpy(Text_II,(char*) ( Text_In_Array ( auu , (FILE*) (Text_I = fopen("02,1 Lendo Aquivos Textos A.txt","r"))))),strlen(Text_II)-1* sizeof(char));
    // printf("\n Passo II \n \n");
    // printf(" tustus %s \n",&Text_II[0] );
    // printf(" tustus %s \n",&Text_II[1] );
    // printf(" tustus %s \n",&Text_II[2] );
    
    printf("\n The For Paso 2,5 \n");
    
    
    // *X_Rline = (char*) ( Text_In_Array ( auu , (FILE*) (Text_I = fopen("02,1 Lendo Aquivos Textos A.txt","r")))) ;
    //printf(" ---> %s <--- \n.",&Text_II);
    // printf("\n Passo III \n \n");
    // printf(" tustus %s \n",&X_Rline[0] );
    // printf(" tustus %s \n",&X_Rline[1] );
    // printf(" tustus %s \n",&X_Rline[2] );
    
    
    //% Text_II [i][p] = ( Text_In_Array ( auu , ayy ,(FILE*) (Text_I = fopen("02,1 Lendo Aquivos Textos A.txt","r")))) ;
    //Text_II = (char*) ( Text_In_Array ( auu , (FILE*) (Text_I = fopen("02,1 Lendo Aquivos Textos A.txt","r")))) ;
    //printf(" ---> %s <--- \n.",&Text_II);
    // *X_Rline = ( Text_In_Array ( auu , ayy ,(FILE*) (Text_I = fopen("02,1 Lendo Aquivos Textos A.txt","r")))) ;
    for ( p,i = 0; p <=9 ; p++ ) {  
      Text_II [i][p] = ( Text_In_Array ( auu , ayy ,(FILE*) (Text_I = fopen("Text_In_Array.txt","r")))) ;
      printf(" xo %s .",&Text_II [i][p] );
      //fgets(Text_III[i][p],1,*(&Text_II [i][p]));
      //fgets(Text_III[i][p],1,"%s",&Text_II [i][p]);
      // Text_III[i][p] = (char*) ("%s",&Text_II [i][p] );
      //Text_III[i][p] = *(&Text_II [i][p]);
      ///strcpy(Text_III[i][p],"%s"&Text_II [i][p]);
      // strcpy(&Text_III[i][p],&Text_II [i][p]);
      strncpy(&Text_III[i][p],(&Text_II [i][p]),1);
      ayy++;
    }; 
    
    printf("\n \n --- Passo III --- \n \n");
    printf(" [0]tustus %s \n",&Text_II[0] );
    printf(" [1]tustus %s \n",&Text_II[1] );
    printf(" tustus %s \n",&Text_II[0][0] );
    printf(" tustus %s \n",&Text_II[1][0] );
    printf(" tustus %s \n",&Text_II[0][2] );
    printf(" tustus %s \n",&Text_II[0][3] );
    printf(" tustus %s \n",&Text_II[0][4] );
    printf(" tustus %s \n",&Text_II[0][5] );
    printf("\n \n --- Passo IV --- \n \n");
    printf(" keka %s \n",&Text_III[0][0] );
    printf(" keka %s \n",&Text_III[0][1] );
    printf(" keka %s \n",&Text_III[0][2] );
    printf(" keka %s \n",&Text_III[0][3] );
    printf(" keka %s \n",&Text_III[0][4] );
    printf(" keka %s \n",&Text_III[0][5] );
    printf(" keka %s \n",&Text_III[1][0] );
    printf(" keka %s \n",&Text_III[1][1] );
   //    
    
    fclose(Text_I);
    free(X_Rline);

    printf(" \n -------- Mano FIM -------- \n ");
    
    return(0);
};


char Text_In_Array(int auu,int ayy, FILE *Text_Array_Inside ){
    printf(" \n -------- Entro -------- \n ");
	// char *Text_Array_Inside =(char*) calloc(2000,sizeof(char));
    // FILE *Texto_Load = (*Text_Array_Inside); 
    // Texto_Load  ;
    char *Read_Line = (char*) calloc(120,sizeof(char));
    char *Copy_Read_Line =(char*) calloc(120,sizeof(char));
    char *Text_Read  =(char*) calloc(120,sizeof(char));
    // char Text_Read[4][4]; 
    // char Text_Read_I[4][4]; 
    
    for (int i = 0; i <=1 ; i ++){   
        fgets(Read_Line,120,Text_Array_Inside); // a cada fgets ler uma linha diferente 
        printf(" voce encontrou = %s",Read_Line);
        strcpy(Copy_Read_Line, Read_Line);
        for( int p=0; *(&Copy_Read_Line[p]) != '\n' ; p++) 
            strncpy( &Text_Read[p], &Copy_Read_Line[p],1);
        	//printf(" Into %s. \n ",&Text_Read[p]);
    	return Text_Read[ayy];
        
    }
    //strcpy(Text_Read_I, Text_Read);
    
    //return *(&Text_Read[i][p]);

};

//  120-1 é o numeros de caracteres lidos a cada linha

/*
char Text_In_Array(int auu,int ayy, FILE *Text_Array_Inside ){
    printf(" \n -------- Entro -------- \n ");
	// char *Text_Array_Inside =(char*) calloc(2000,sizeof(char));
    // FILE *Texto_Load = (*Text_Array_Inside); 
    // Texto_Load  ;
    char *Read_Line = (char*) calloc(120,sizeof(char));
    char *Copy_Read_Line =(char*) calloc(120,sizeof(char));
    // char *Text_Read  =(char*) calloc(120,sizeof(char));
    char Text_Read[4][4]; 
    char Text_Read_I[4][4]; 
    
    for (int i = 0; i <=1 ; i ++){   
        fgets(Read_Line,120,Text_Array_Inside);
        printf(" voce encontrou = %s",Read_Line);
        strcpy(Copy_Read_Line, Read_Line);
        for( int p=0; *(&Copy_Read_Line[p]) != '\n' ; p++) {
            strncpy( &Text_Read[i][p], &Copy_Read_Line[ayy],1);
        	printf(" Into %s. \n ",&Text_Read[i][p]);
    		//return Text_Read[i][p];
        }
    }
    //strcpy(Text_Read_I, Text_Read);
    
    //return *(&Text_Read[i][p]);

};
// */  
  
   /*
    fgets(Read_Line,120,Text_Array_Inside);
    printf(" voce encontrou = %s",Read_Line);
    strcpy(Copy_Read_Line, Read_Line);
        
    for( int p=0; *(&Copy_Read_Line[p]) != '\n' ; p++)
        strncpy(Text_Read[p],Copy_Read_Line[p],1);
        printf(" %s. ",&Text_Read[p]);
    		
    return *Text_Read[p];
    // */

    /* 
    for (int i = 0; i <=0 ; i ++){   
        fgets(Read_Line,120,Text_Array_Inside);
        printf(" voce encontrou = %s",Read_Line);
        strcpy(Copy_Read_Line, Read_Line);
        for( int p=0; *(&Copy_Read_Line[p]) != '\n' ; p++)
            strncpy(Text_Read[p],Copy_Read_Line[p],1);
        	printf(" %s. ",&Text_Read[p]);
    		
        return *Text_Read[p];
 
    }
    
    // */





/*
    char* zr2_ArrayNumberInside = (char*) calloc((strlen(zr2_ArrayInside))-1,sizeof(int));
    for (int i = 0; i != sizeof((char*)(&zr2_ArrayInside))  ; i ++)
        *(zr2_ArrayNumberInside + i) = zr2_ArrayInside[i] - '0';
    return zr2_ArrayNumberInside;
    
// */

/*
char Text_In_Array(char zr2_ArrayInside[]){
	char* zr2_ArrayNumberInside = (char*) calloc((strlen(zr2_ArrayInside))-1,sizeof(int));
    for (int i = 0; i != sizeof((char*)(&zr2_ArrayInside))  ; i ++)
        *(zr2_ArrayNumberInside + i) = zr2_ArrayInside[i] - '0';
    return zr2_ArrayNumberInside;
    
    
};
// */
/*

// */

/*


// */
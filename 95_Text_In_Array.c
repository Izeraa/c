/*
    <🐼> read a txt file and transform it into an matrix. </🐼>
        example
        [🐼] [0] [1] [2] [3] [4] [5] [6]
        [0] [p] [o] [k] [e] [m] [o] [n]
        [1] [M] [e] [g] [a] [m] [a] [n]
        corriga marcando meus erros de vermelho e explicando por favor
    </🐼>
*/

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <locale.h>


/*  ---- 🐼 ❀❀❀ Prototipagens ❀❀❀ 🐼 ----  */
char Text_In_Array(int F_R_N_LINES,int F_R_N_Colums, FILE *Text_Array_Inside, char Text_Read [300][300] );
int F_N_LINES (); 

// void limparBuffer(void);


/*  ---- 🐼 ❀❀❀ Variables ❀❀❀ 🐼 ----  */
int F_R_N_LINES;                   // FILE_READ_NUMBER_LINES--> LINE
// F_N_LINES ();
int F_R_N_Colums;                 //  FILE_READ_NUMBER_Colums --> COLUM

char Text_II[300][300];
char Text_Read [300][300];
char Text_Read2 [300][300];
char Text_Read_LINE[300];

int main (void){
    setlocale(LC_ALL,"pt_BR");
    /*  ---- 🐼 ❀❀❀ Variables ❀❀❀ 🐼 ----  */
    // int pp,ii;
    // char *X_Rline =(char*) calloc(120,sizeof(char));
    // char Text_IV[300][300];
    // char Text_V[300][300];

    printf("  -------------- Mano VI ---------  \n ");
   //

  // char Text_In_Array ( int  , FILE );
    
    /*  ---- 🐼 ❀❀❀ Lines The Archive ❀❀❀ 🐼 ----  */
     
     FILE *Text_II = fopen("Text_In_Array.txt","r");
      // int jkk ; 
      char xk;
      char HJK[120];
        while ( fgetc(Text_II) != EOF){ 
            fgets(HJK,120,Text_II);
            // xk = fgetc(Text_II); 
            // if ( xk == '\n' ){ jkk++;};  
            F_R_N_LINES++;
        };
        printf("seu numero da sorte é %d.\n",F_R_N_LINES);    
      fclose(Text_II);

    /*  ---- 🐼 ❀❀❀ Sending The Archive ❀❀❀ 🐼 ----  */
    FILE *Text_I;

    Text_In_Array ( F_R_N_LINES , F_R_N_Colums ,(FILE*) (Text_I = fopen("Text_In_Array.txt","r")), Text_Read ) ;
    if (Text_I == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    };
    
    fclose(Text_I);
    
    
    printf("\n \n 🐼 Passo 🐼 I \n \n");


    printf("\n \n --- Passo III --- \n \n");
    /* < 🐼 >  ---- 🐼 ❀❀❀ LOOK IN TERMINAL  ❀❀❀ 🐼 ----  */

        //  printf(" ---- 🐼 LINES 🐼 ---- \n" );
        // for (int i = 0; i != 5 ; i++){
        //    printf(" 🐼 %s \n ",&(Text_Read_LINE[i]));
        // };
        
        printf(" ---- 🐼 ARRAY 🐼 ---- \n" );
        int wwl,wwp;
        for ( wwl = 0; wwl != 5 ; wwl++){
            printf("\n");
            //*(&Text_Read[i][p]) != '\n'      Text_Read[wwl][wwp] != '\n'     wwp !=5
            for ( wwp = 0; wwp !=5 ; wwp++){
                
                printf("[%c]",(Text_Read[wwl][wwp]) );
                
            };
            
        };
        // if (Text_Read[]){ };


        printf(" \n -------- Mano FIM -------- \n ");
    /* < /🐼 >  ---- 🐼 ❀❀❀ LOOK IN TERMINAL  ❀❀❀ 🐼 ----  */    
    return(0);

};



int F_N_LINES () {
    FILE *Text_II = fopen("Text_In_Array.txt","r");
    char xk;
    char HJK[120];
    while ( fgetc(Text_II) != EOF){  fgets(HJK,120,Text_II); F_R_N_LINES++;  };
    printf("seu numero da sorte é %d.\n",F_R_N_LINES);    
    fclose(Text_II);
    
    return 0;

};

   


char Text_In_Array(int F_R_N_LINESy,int F_R_N_Columsy, FILE *Text_Array_Inside, char Text_Ready [300][300] ){

    printf(" \n -------- Entro -------- \n ");

    char One_Letra[1];
    char One_Letrx;
    char One_Letry;
    char Read_Line[120];
    
    for (int i = 0; i!= F_R_N_LINES ; i ++){
        // [LINE]

            fgets(Read_Line,120,*(&Text_Array_Inside));
            printf("\n voce encontrou = %s \n",Read_Line);
            strcpy(&(Text_Read_LINE[i]),Read_Line);
        for( int p=0; *(&Read_Line[p]) != '\n' ; p++ ) {
            // [COLUM] < 🐼>
                One_Letrx = Read_Line[p];
                (Text_Read[i][p]) = One_Letrx;
                printf("[%c]\n ",Text_Read[i][p]);
                
            // < /🐼 >
        };

    };


    printf("\n" );
    printf(" ---- kaku ---- \n" );
    printf(" kaku %c \n",Text_Read[0][0] );
    printf(" kaku %c \n",Text_Read[0][1] );
    printf(" kaku %c \n",Text_Read[0][2] );
    printf(" kaku %c \n",Text_Read[0][3] );
    printf(" kaku %c \n",Text_Read[0][4] );

    printf("\n" );
    printf(" ---- keller ---- \n" );
    printf(" kaku %c \n",Text_Read[0][0] );
    printf(" kaku %c \n",Text_Read[0][1] );
    printf(" kaku %c \n",Text_Read[0][2] );
    printf(" kaku %c \n",Text_Read[0][3] );
    printf(" kaku %c \n",Text_Read[0][4] );

    // strcpy(Text_Read2 ,Text_Read);

    // return ((*&Text_Read));
    return 0;

};


 
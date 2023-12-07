/*
<🐼> 
not work
read a txt file and transform it into an array.
example
[🐼] [0] [1] [2] [3] [4] [5] [6]
[0] [p] [o] [k] [e] [m] [o] [n]
[1] [M] [e] [g] [a] [m] [a] [n]
why :
# you, together with bash, can transform or rename to .txt and can edit them { == | = .... }
. and transform it into "html" again
# the original idea for working with subtitles however...
</🐼>
*/

/* <🐼> fazer que os array 300 nao tenha resto mas nao da certo  o n de colunas pode  variar </🐼> */


# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <locale.h>


/*  ---- 🐼 ❀❀❀ Prototipagens ❀❀❀ 🐼 ----  */
char Text_In_Array(int a_n_lines,int ar_n_colum, FILE *Text_Array_Inside, char Text_Read [300][300] );
void limparBuffer(void);


/*  ---- 🐼 ❀❀❀ Variables ❀❀❀ 🐼 ----  */
// a_n_lines-->line ; ar_n_colum --> colum
int a_n_lines,ar_n_colum;
char Text_II[300][300];
char Text_Read [300][300];
char Text_Read2 [300][300];


int main (void){
    setlocale(LC_ALL,"pt_BR");
    /*  ---- 🐼 ❀❀❀ Variables ❀❀❀ 🐼 ----  */
    int pp,ii;
    char *X_Rline =(char*) calloc(120,sizeof(char));
    char Text_IV[300][300];
    char Text_V[300][300];

    printf("  -------------- Mano VI ---------  \n ");
   //

  // char Text_In_Array ( int  , FILE );

    /*  ---- 🐼 ❀❀❀ Sending The Archive ❀❀❀ 🐼 ----  */
    FILE *Text_I;

    // Text_In_Array ( a_n_lines , ar_n_colum ,(FILE*) (Text_I = fopen("Text_In_Array.txt","r")), Text_Read ) ;
    Text_II[ii][pp] = ( Text_In_Array ( a_n_lines , ar_n_colum ,(FILE*) (Text_I = fopen("Text_In_Array.txt","r")), Text_Read )) ;
    // strcpy(bebe2,"menina");
    // strcpy(Text_II,(Text_In_Array ( a_n_lines , ar_n_colum ,(FILE*) (Text_I = fopen("Text_In_Array.txt","r")), Text_Read)) );
    // strcpy(Text_II,((char*) *&(Text_In_Array ( a_n_lines , ar_n_colum ,(FILE*) (Text_I = fopen("Text_In_Array.txt","r")), Text_Read)) ));
    // memcpy(Text_II,texto1,strlen(texto1)-1* sizeof(char));

    printf("\n \n 🐼 Passo 🐼 I \n \n");



    printf("\n The For Paso 2,5 \n");

    printf("\n \n --- Passo III --- \n \n");
    printf(" [0]tustus %s \n",&Text_II[0] );
    printf(" [1]tustus %s \n",&Text_II[1] );
    printf(" tustus %s \n",&Text_II[0][0] );
    printf(" tustus %s \n",&Text_II[0][1] );
    printf(" tustus %s \n",&Text_II[0][2] );
    printf(" tustus %s \n",&Text_II[1][0] );
    printf(" tustus %s \n",&Text_II[0][2] );
    printf(" tustus %s \n",&Text_II[0][3] );
    printf(" tustus %s \n",&Text_II[0][4] );
    printf(" tustus %s \n",&Text_II[0][5] );

    printf("\n" );
    printf(" ---- Lilu ---- \n" );
    printf(" Lilu %s \n",&Text_Read[0][0] );
    printf(" Lilu %s \n",&Text_Read[0][1] );
    printf(" Lilu %s \n",&Text_Read[0][2] );
    printf(" Lilu %s \n",&Text_Read[0][3] );
    printf(" Lilu %s \n",&Text_Read[0][4] );


    printf(" \n -------- Mano FIM -------- \n ");
    return(0);

};



char Text_In_Array(int a_n_lines,int ar_n_colum, FILE *Text_Array_Inside, char Text_Read [300][300] ){
    printf(" \n -------- Entro -------- \n ");
	// char *Text_Array_Inside =(char*) calloc(2000,sizeof(char));
    // FILE *Texto_Load = (*Text_Array_Inside);
    // Texto_Load  ;
    char One_Letra[1];
    char One_Letra2 = (char*) calloc(1,sizeof(char));
    char *Read_Line = (char*) calloc(120,sizeof(char));
    char *Copy_Read_Line = (char*) calloc(120,sizeof(char));
   // char Text_Read [300][300];

    int p,i;

    // Text_Array_Inside != EOF      _IO_EOF_SEEN
    // for (int i = 0; (&Text_Array_Inside) != EOF  ; i ++) {
    for (int i = 0; i != 20 ; i ++){
        fgets(Read_Line,120,*(&Text_Array_Inside));
        printf(" voce encontrou = %s",Read_Line);
        strcpy(Copy_Read_Line, Read_Line);
        for( int p=0; *(&Copy_Read_Line[p]) != '\n' ; p++ ) {
            *(&One_Letra2) = *(&Read_Line[p]) ;
            // memcpy(*One_Letra2,&Read_Line[p],sizeof(char));
            strncpy( &Text_Read[i][p], (char*) (&One_Letra2),sizeof(char));
            // strncpy( &Text_Read[i][p],&Read_Line[p],sizeof(char));
            // strncpy( &Text_Read[i][p],&Read_Line[p],1);
            printf(" Into %s. \n ",&Text_Read[i][p]);
            limparBuffer();
            // mem_flush();
            // strlen(One_Letra)


            //strncpy( &Text_Read[i][p],(char*)((getchar(&Copy_Read_Line[p])) != 1 ),1);
            // strncpy( &Text_Read[i][p],(char)(getchar(&Copy_Read_Line[p])),1);
            // Text_Read[i][p] = getchar(strncpy( &Text_Read2[i][p], &Copy_Read_Line[ar_n_colum],1));
        	// printf(" Into %s. \n ",&Text_Read[i][p]);
    		//return Text_Read[i][p];
            //*One_Letra2 = *(&Read_Line[p]);

            // memcpy(&One_Letra2[p],&Read_Line[p],1* sizeof(char));
            // printf(" xumm %s. \n ",&One_Letra2[p]);
            // memcpy(&Text_Read[i][p],&Read_Line[p],1* sizeof(char));
            // printf(" Into %s. \n ",&Text_Read[i][p]);
           // limparBuffer();


            // (strncpy( &Text_Read[i][p],&Read_Line[p],1) = getchar() ) != 1*sizeof(char)   ){
            // ( memcpy(&Text_Read[i][p],&Read_Line[p],1* sizeof(char)) = getchar()) != sizeof(char)
            /*
            while ( (strncpy( &Text_Read[i][p],&Read_Line[p],1) = getchar() ) != sizeof(char) ) {
                printf(" Into %s. \n ",&Text_Read[i][p]);
                limparBuffer();
            };
            */

        };
    };
    printf("\n" );
    printf(" ---- kaku ---- \n" );
    printf(" kaku %s \n",&Text_Read[0][0] );
    printf(" kaku %s \n",&Text_Read[0][1] );
    printf(" kaku %s \n",&Text_Read[0][2] );
    printf(" kaku %s \n",&Text_Read[0][3] );
    printf(" kaku %s \n",&Text_Read[0][4] );

    // strcpy(Text_Read2 ,Text_Read);

    return (((char*)(*&Text_Read)));

};

/* <🐼>  Clear Buffer -->  void limparBuffer(void); limparBuffer();  </🐼>   */
// /*
void limparBuffer(void){
    fflush(stdin);
    fflush(stdout);
    fflush(stderr);
    setbuf(stdin,NULL);
    setbuf(stdout,NULL);
   // scanf(%c);
    // fpurge(stdin);
    // fpurge(stdout);
    __fpurge(stdin);
    __fpurge(stdin);


    // char c;
    // while ((c =getchar()) !='\n' && c != EOF);

};
// */



/* Intel: mem_flush();
mem_flush(const void *p, unsigned int allocation_size){
    const size_t cache_line = 64;
    const char *cp = (const char *)p;
    size_t i = 0;

    if (p == NULL || allocation_size <= 0)
            return;

    for (i = 0; i < allocation_size; i += cache_line) {
            asm volatile("clflush (%0)\n\t"
                         :
                         : "r"(&cp[i])
                         : "memory");
    }

    asm volatile("sfence\n\t"
                 :
                 :
                 : "memory");
};
// */

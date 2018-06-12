
void execute (char *senha) {
    int tam,i;
    int *key,*crip;
    
    
    tam = strlen (senha);
    
    srand (time (NULL));
    
    
    key = (int *) malloc (tam * sizeof (tam));
    crip = (int*) malloc (tam * sizeof (tam));
    
    for (i = 0;i<tam; i++){
        
        key[i] = rand () % 1000;
        crip[i] = key [i] + senha [i];
        printf ("[Valor do caracter: %d ->", senha[i]);
        printf ("key(+): %d] ", key[i]);
        printf ("\n");
        }
        
        printf ("--------------\n");
        puts ("crip (valor + key) :");
        for (i = 0;i<tam; i++){
        printf ("%d ", crip[i]);
        }
        
        
    
    return 0;
}
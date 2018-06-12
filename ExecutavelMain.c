void execute (char *senha);


int main (){
char *senha;



senha = (char *) malloc(10 * sizeof(senha));
gets (senha);
 
 execute (senha);


return 0;
    
}


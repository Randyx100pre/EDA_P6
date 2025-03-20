enum boolean enqueue_tail(struct nodo **h, struct nodo **t, int *ch, int *ct, *f){
    if (*ct == SIZE_QUEUE) {
        return false;
    }else{
        if(*t==NULL){
            struct nodo *new = (struct nodo *) malloc(sizeof(struct nodo));
            if(new==NULL){
                return falso;
            }
            char sentence[MAX_STR];
            char *sep;
            fgets(sentence, MAX_STR, f);
            sep=strtok(sentence, ",");
            strcpy(new->nom, sep);
            sep= strtok(NULL, ",");
            new->precio= atof(sep);
            new->prev=NULL;
            new->next=NULL;
            if(*t==NULL){
                (*h)=new;
                *ch=0;

            }
            else{
                (*t)->next =new;
                new->prev =(*t);

            }
            (*t)=new;
            *ct +=1;
            return verdad;
        }
    }


}
struct nodo *dequeue_head(struct nodo **h, struct nodo **t, int *ch, int *ct){
    if(*ch==SIZE_QUEUE){
        return NULL; //Está vacío
    }else{
        struct nodo *ap = *h;
        if(*h == *t){
            (*h)=NULL;
            (*t)=NULL;
            *ch=SIZE_QUEUE;
            *ct=0;
        }else{
            (*h)=*h->next;
            (*h)->prev = NULL;
            *ch +=1;
        }
        ap->next = NULL;
        return ap;

    }
}
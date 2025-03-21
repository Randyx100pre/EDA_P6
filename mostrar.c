void mostrar(struct nodo *h){
    if(h==NULL){
        printf("No hay nada que mostrar");
        return;
    }else{
        int i=1;
        while(h!=NULL){
            printf("%p<-\t ->%p\n", h->prev, h->next);
            printf("%i\t %s\t %.2f\n", i, h->nom, h->precio);
            i++;
            h=h->next;
        }
    }
    return;
}

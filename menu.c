void menu(){
    struct nodo *tail=NULL, *head = NULL;
    int cont_head=SIZE_QUEUE, cont_tail=0;
    FILE *f= fopen("products.csv", r);
     enqueue_tail(&head, &tail, &cont_head, &cont_tail, f);

}
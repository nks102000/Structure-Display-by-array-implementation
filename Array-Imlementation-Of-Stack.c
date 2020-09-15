//Poping data in reverse order and storing the stack back as normal
void fun(st){
    if(top==NULL){
        return;
    }
    int b=pop(st);
    fun(st);
    printf("%d",b);
    push(st,b);
}

//Poping data in inserting the stack back as normal
void fun(st){
    if(top==NULL){
        return;
    }
    int b=pop(st);
    printf("%d",b);
    fun(st);
    push(st,b);
}
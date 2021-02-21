typedef struct no *PilhaNumeros;

PilhaNumeros cria_pilha();

int pilha_vazia(PilhaNumeros p);

int pilha_cheia(PilhaNumeros p);

int push(PilhaNumeros p, int elem);

int pop(PilhaNumeros p, int *elem);

int le_topo(PilhaNumeros p, int *elem);

int imprimir(PilhaNumeros p);

void menuNumero();

int imprime_reversa(PilhaNumeros p);

int Pares_Impares(PilhaNumeros p, PilhaNumeros *p2, PilhaNumeros *p3);


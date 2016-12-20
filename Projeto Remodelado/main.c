#include <stdio.h>
#include <stdlib.h>

void ler_data();
void criaMenuLinhaInferior();
void criaMenuLinhaSuperior();
int menu_principal();
int dispositivos_computacionais();
int produtos_aplicacoes();
int software_dispositivos();
int estatistica_software();
int estatistica_dispositivos();
int estatistica_produtos();
void inserir();
void consultar();
void alterar();
void eliminar();
int sair();
float ler_float();
int ler_int();
int validar_ano();

int main()
{
int exit = 0;

    printf("[Fun%c%co para ler datas(click Enter)]", 135, 198);
    getch();
    //ler_data();

    while(exit != 1)
    {
        //nao é preciso confirmação para sair dos sub menus
        //função para ler caracteres/ficheiro e guardar ficheiros
        //Dizer sempre ao utilizador que quando abrir a função ler ficheiro vai apagar os dados existentes
        //falta validação para a função de numeros inteiros
    	system("cls");

		switch(menu_principal())
        {
            case 1:
                while(exit != 1) {
                    switch(dispositivos_computacionais())
                    {
                        case 1:
                            inserir();
                            break;

                        case 2:
                            eliminar();
                            break;

                        case 3:
                            consultar();
                            break;

                        case 4:
                            alterar();
                            break;

                        case 5:
                            switch(estatistica_dispositivos())
                            {
                                case 0:
                                    exit = sair();
                                    break;

                                default:
                                    printf("Digite uma op%c%co v%clida\n", 135 ,198, 160);
                                    getch();
                            }
                            break;

                        case 0:
                            exit = sair();
                            break;

                        default:
                            printf("Digite uma op%c%co v%clida\n", 135 ,198, 160);
                            getch();
                    }
                }
                break;

            case 2:
                switch(produtos_aplicacoes())
                {
                    case 1:
                        inserir();
                        break;

                    case 2:
                        eliminar();
                        break;

                    case 3:
                        consultar();
                        break;

                    case 4:
                        alterar();
                        break;

                    case 5:
                        switch(estatistica_produtos())
                        {
                            case 0:
                                exit = sair();
                                break;

                            default:
                                printf("Digite uma op%c%co v%clida\n", 135 ,198, 160);
                                getch();
                        }
                        break;

                    case 0:
                        exit = sair();
                        break;

                    default:
                        printf("Digite uma op%c%co v%clida\n", 135 ,198, 160);
                        getch();
                }
                    break;

            case 3:
                switch(software_dispositivos())
                {
                    case 1:
                        inserir();
                        break;

                    case 2:
                        eliminar();
                        break;

                    case 3:
                        consultar();
                        break;

                    case 4:
                        alterar();
                        break;

                    case 5:
                        switch(estatistica_software())
                        {
                            case 0:
                                exit = sair();
                                break;

                            default:
                                printf("Digite uma op%c%co v%clida\n", 135 ,198, 160);
                                getch();
                        }
                        break;

                    case 0:
                        exit = sair();
                        break;

                    default:
                        printf("Digite uma op%c%co v%clida\n", 135 ,198, 160);
                        getch();
                }
                break;

            case 0:
                exit = sair();
                break;

            default:
                printf("Digite uma op%c%co v%clida\n", 135, 198, 160);
                getch();
        }
    }
}

void criaMenuLinhaSuperior() {
    int i;
    printf("%c", 201);

    for(i=0; i<50; i++)
        printf("%c", 205);
    printf("%c", 187);
}

void criaMenuLinhaInferior() {
    int i;
    printf("%c", 200);
    for(i=0; i<50; i++)
        printf("%c", 205);
    printf("%c", 188);
}

int menu_principal() {

    int opcao;

    system("cls");
    criaMenuLinhaSuperior();
    printf("\n\n\t\t[Menu Principal]\n\n");
    printf("\n\t1. Dispositivos Computacionais\n");
    printf("\n\t2. Produtos/Aplica%c%ces de Software\n", 135, 228);
    printf("\n\t3. Software de dispositivo\n");
    printf("\n\t0. Sair\n\n");
    criaMenuLinhaInferior();
    printf("\nOp%c%co>", 135, 198);
    opcao = ler_int();

    return opcao;
}

int dispositivos_computacionais() {

    int opcao;

        system("cls");
        criaMenuLinhaSuperior();
        printf("\n\n\t[Dispositivos Computacionais]\n\n");
        printf("\n\t1. Inserir dispositivo\n");
        printf("\n\t2. Eliminar dispositivo\n");
        printf("\n\t3. Consultar dispositivo\n");
        printf("\n\t4. Alterar dispositivo\n");
        printf("\n\t5. Estat%csticas\n", 141);
        printf("\n\t0. Sair\n\n");
        criaMenuLinhaInferior();
        printf("\nOp%c%co>", 135, 198);
        opcao = ler_int();

        return opcao;
}

int produtos_aplicacoes() {

    int opcao;

    system("cls");
    criaMenuLinhaSuperior();
    printf("\n\n\t[Produtos/Aplica%c%ces de Software]\n\n", 135, 228);
    printf("\n\t1. Inserir Produto/Aplica%c%co\n", 135, 198);
    printf("\n\t2. Eliminar Produto/Aplica%c%co\n", 135, 198);
    printf("\n\t3. Consultar Produto/Aplica%c%Co\n", 135, 198);
    printf("\n\t4. Alterar Produto/Aplica%c%co\n", 135, 198);
    printf("\n\t5. Estat%csticas\n", 141);
    printf("\n\t0. Sair\n\n");
    criaMenuLinhaInferior();
    printf("\nOp%c%co>", 135, 198);
    opcao = ler_int();

    return opcao;
}

int software_dispositivos() {

    int opcao;

    system("cls");
    criaMenuLinhaSuperior();
    printf("\n\n\t[Software de Dispositivo]\n\n");
    printf("\n\t1. Inserir software de dispositivo\n");
    printf("\n\t2. Eliminar software de dispositivo\n");
    printf("\n\t3. Consultar de dispositivo\n");
    printf("\n\t4. Alterar software de dispositivo\n");
    printf("\n\t5. Estat%csticas\n", 141);
    printf("\n\t0. Sair\n\n");
    criaMenuLinhaInferior();
    printf("\nOp%c%co>", 135, 198);
    opcao = ler_int();

    return opcao;
}

int estatistica_dispositivos() {

    int opcao;

        system("cls");
        criaMenuLinhaSuperior();
        printf("\n\n\t[Estat%csticas]\n\n", 141);
        printf("Aqui ser%co inseridas algumas estat%csticas \n", 198 ,141);
        printf("\n\t0. Sair\n\n");
        criaMenuLinhaInferior();
        printf("\nOp%c%co>", 135, 198);
        opcao = ler_int();

        return opcao;
}

int estatistica_produtos() {

    int opcao;

        system("cls");
        criaMenuLinhaSuperior();
        printf("\n\n\t[Estat%csticas]\n\n", 141);
        printf("Aqui ser%co inseridas algumas estat%csticas \n", 198 ,141);
        printf("\n\t0. Sair\n\n");
        criaMenuLinhaInferior();
        printf("\nOp%c%co>", 135, 198);
        opcao = ler_int();

        return opcao;
}

int estatistica_software() {

    int opcao;

        system("cls");
        criaMenuLinhaSuperior();
        printf("\n\n\t[Estat%csticas]\n\n", 141);
        printf("Aqui ser%co inseridas algumas estat%csticas \n", 198 ,141);
        printf("\n\t0. Sair\n\n");
        criaMenuLinhaInferior();
        printf("\nOp%c%co>", 135, 198);
        opcao = ler_int();

        return opcao;
}

int sair()
{
    int resposta;

    system("cls");
	do
        {
            printf("Deseja mesmo sair? (1-Sim/0-N%co)", 198);
            resposta = ler_int();
        }while(resposta != 0 && resposta != 1);
    system("cls");
    return resposta;
}

void inserir(){

    char num, num2;

    criaMenuLinhaSuperior();
    printf("\n\tAqui vai ser para inserir");
    getch();
        /*printf("\n\tID: ");
        scanf(" %c", &num);
        printf("\n\tNumero de serie: ");
        scanf(" %c", &num2);
        criaMenuLinhaInferior();*/
}

void consultar(){
    int num;

    criaMenuLinhaSuperior();
    printf("\n\tAqui vai ser para consultar");
    getch();

    /*printf("\n\tID: \n");
    getch();
    criaMenuLinhaInferior();*/


}

void alterar() {

    criaMenuLinhaSuperior();
    printf("\n\tAqui vai ser para alterar");
    getch();

    /*printf("\n\tID: ");
    getch();
    criaMenuLinhaInferior();*/

}

void eliminar() {

    criaMenuLinhaSuperior();
    printf("\n\tAqui vai ser para eliminar");
    getch();

    /*printf("\n\tID: ");
    getch();
    criaMenuLinhaInferior();*/

}

void ler_data() {

    int ano, mes, dia, bissexto;

    bissexto = validar_ano();

    do {
        system("cls");
        printf("Indique o m%cs: ", 136);
        mes = ler_int();
        if(mes <=0 || mes >12) {
            system("cls");
            printf("M%cs inv%clido\n", 136, 160);
            getch();
        }
    } while(mes <=0 || mes >12);
    system("cls");

    switch(mes) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        do {
            system("cls");
            printf("Indique o dia: ");
            dia = ler_int();
            system("cls");
            if(dia <=0 || dia >31) {
                system("cls");
                printf("Dia inv%clido\n", 160);
                getch();
            }
        } while(dia <=0 || dia >31);
        break;
    case 2:
        if(bissexto == 0) {
                do {
                    printf("Indique o dia: ");
                    dia = ler_int();
                    system("cls");
                        if(dia <=0 || dia >31) {
                            system("cls");
                            printf("Dia inv%clido\n", 160);
                            getch();
                        }
                        else {
                            if(dia == 29) {
                                system("cls");
                                printf("Este ano n%co %c bissexto, indique um dia v%clido\n", 198, 130, 160);
                                getch();
                            }
                            else {
                                system("cls");
                                if(dia == 30 || dia == 31) {
                                    system("cls");
                                    printf("Selecionou o m%cs de Fevereiro, indique um dia v%clido\n", 136, 160);
                                    getch();
                                }
                            }

                        }
                } while(dia <=0 || dia >28);
                break;
        }
        else {
                do {
                    system("cls");
                    printf("Indique o dia: ");
                    dia = ler_int();
                    system("cls");
                    if(dia <=0 || dia >29) {
                        system("cls");
                        printf("Dia inv%clido\n", 160);
                        getch();
                    }
                } while(dia <=0 || dia >29);
                break;
        }
    case 4:
    case 6:
    case 9:
    case 11:
        do {
            system("cls");
            printf("Indique o dia: ");
            dia = ler_int();
            system("cls");
            if(dia <=0 || dia >30) {
                system("cls");
                printf("Dia inv%clido\n", 160);
                getch();
            }
        } while(dia <=0 || dia >30);
    }
}

int validar_ano(){

    int ano, bissexto;

   do{
        system("cls");
        printf("Indique o ano: ");
        ano = ler_int();
        system("cls");

            if (ano % 400 == 0) {
                bissexto = 1;
            }
            else if ((ano % 4 == 0) && (ano % 100 != 0)) {
                bissexto = 1;
            }
            else {
                bissexto = 0;
            }

                if(ano < 1900 || ano > 2150)
            {
                system("cls");
                printf("Ano inv%clido\n", 160);
                getch();
            }

    }while(ano < 1900 || ano > 2150);

    return bissexto;
}

int ler_int(){

    fflush(stdin); //limpa o buffer
    int num;
        scanf("%d", &num);
        return num;
}

float ler_float(){

    fflush(stdin);
    float num;
        scanf("%f", &num);
        return num;
}

#include <stdio.h>
#include <stdbool.h> // Para usar o tipo de dado bool (verdadeiro ou falso)

// Função para exibir a pergunta e suas opções de resposta
void exibirPergunta(const char* pergunta) {
    printf("%s\n", pergunta);
}

// Função para verificar a resposta do usuário
bool verificarResposta(char resposta, char respostaCorreta) {
    return resposta == respostaCorreta || resposta == respostaCorreta + ('a' - 'A');
}

int main() {
    char resposta;
    int score = 0;
    const int NUMERO_DE_PERGUNTAS = 2; // Atualize esse valor conforme o número total de perguntas

    // Pergunta 1
    exibirPergunta("1. O que é Git e qual é a sua finalidade principal em desenvolvimento de software?\n"
                   "a) Um sistema de gerenciamento de banco de dados.\n"
                   "b) Uma linguagem de programação.\n"
                   "c) Uma ferramenta de controle de versão.\n"
                   "d) Um ambiente de desenvolvimento integrado (IDE).\n");

    scanf(" %c", &resposta);
    if (verificarResposta(resposta, 'c')) {
        score++;
    }

    // Pergunta 2
    exibirPergunta("2. Qual é o objetivo principal do desenvolvimento responsivo (responsive web design) em relação a sites e aplicações web?\n"
                   "a) Criar interfaces complexas e interativas para atrair mais usuários.\n"
                   "b) Garantir que o site ou aplicação funcione apenas em dispositivos móveis.\n"
                   "c) Adaptar o layout e design para diferentes tamanhos de tela e dispositivos.\n"
                   "d) Melhorar o desempenho e a velocidade de carregamento.\n");

    scanf(" %c", &resposta);
    if (verificarResposta(resposta, 'c')) {
        score++;
    }

    // Adicione outras perguntas aqui
    // ...

    // Exibe a pontuação final
    printf("Você acertou %d/%d perguntas!\n", score, NUMERO_DE_PERGUNTAS);

    return 0;
}

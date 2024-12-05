#ifndef DOARPARAVITIMAS_H //if not define
#define DOARPARAVITIMAS_H
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //necessário para usar setlocale
#include <string.h>

void digitePraSair(){
    int lixo;
    printf("\ndigite qualquer valor para retornar.\n");
    scanf("%c", lixo);
}

void doar_para_vitimas(){

    setlocale(LC_ALL,"");

    int opcao = 0;

    printf("O que você gostaria de doar?\n");
    printf("1 - Dinheiro\n");
    printf("2 - Outros (alimentos, roupas, cobertores, etc)\n");

    while(1){ //funcao continua rodando ate uma opcao ser aceita, caso a pessoa digite uma opcao invalida ele escaneara novamente
        scanf("%d", &opcao);

        if(opcao == 1){
            printf("A sua doação é nacional ou internacional?\n");

                    //outro while - scanf - switchcase para as duas opceos

                while(1){ //funcao continua rodando ate uma opcao ser aceita, caso a pessoa digite uma opcao invalida ele escaneara novamente
                    char opcao2[50];
                    scanf("%s", &opcao2);

                    if(!strcmp(opcao2, "nacional") || !strcmp(opcao2, "Nacional") || !strcmp(opcao2, "NACIONAL")){
                        printf("Pix: CNPJ: 92.958.800/0001-38\n");
                        printf("Banco do Estado do Rio Grande do Sul ou Associação dos Bancos no Estado do Rio Grande do Sul\n");
                        printf("Atenção: quando realizar a operação, confirme que o nome da conta que aparece é \"SOS Rio Grande do Sul\" e que o banco é o Banrisul.\n");
                        printf("Mais informacoes no site sosenchentes.rs.gov.br");
                        digitePraSair();
                        break;
                        
                    }else if(!strcmp(opcao2, "internacional") || !strcmp(opcao2, "Internacional") || !strcmp(opcao2, "INTERNACIONAL")){

                    printf("For donations in Dollar (USA)\n");      
                    printf("\n");
                    printf("Beneficiary Name: ASSOCIACAO DOS BANCOS NO ESTADO DO RIO GRANDE DO SUL\n");
                    printf("ACH Routing number: 031100209\n");      
                    printf("Wire routing number: 021000089\n");     
                    printf("Account number: 71340000000037775\n");  
                    printf("Country: BR\n");
                    printf("Address: Rua Andradas, 1234 17 ANDAR - Centro - Porto Alegre/RS - CEP: 90020008\n");    
                    printf("\n");
                    printf("For donations in Euro currency\n");     
                    printf("\n");
                    printf("Bank: Standard Chartered Bank - Frankfurt\n");
                    printf("Swift: SCBLDEFX\n");
                    printf("Account number: 500058000\n");
                    printf("Beneficiary bank: Banco Topazio S/A\n");
                    printf("Swift: TOPZBRRSXXX\n");
                    printf("Beneficiary name: Associao dos Bancos no Estado do Rio Grande do Sul\n");
                    printf("Address: Rua Andradas, 1234 17 ANDAR - Centro - Porto Alegre/RS - CEP: 90020008\n");    
                    printf("CNPJ: 92.958.800/0001-38\n");
                    printf("IBAN: BR9007679404000009295880038C1\n");
                    printf("\n");
                    printf("For donations in Sterling Pound\n");    
                    printf("\n");
                    printf("Bank: Standard Chartered Bank - Frankfurt\n");
                    printf("Swift: SCBLDEFX\n");
                    printf("Account number: 500058101\n");
                    printf("Beneficiary bank: Banco Topazio S/A\n");
                    printf("Swift: TOPZBRRSXXX\n");
                    printf("Beneficiary name: Associao dos Bancos no Estado do Rio Grande do Sul\n");
                    printf("Address: Rua Andradas, 1234 17 ANDAR - Centro - Porto Alegre/RS - CEP: 90020008\n");    
                    printf("CNPJ: 92.958.800/0001-38\n");
                    printf("IBAN: BR9007679404000009295880038C1\n");
                    printf("\n");
                    printf("For donations in Canadian Dollar\n");   
                    printf("\n");
                    printf("Beneficiary name: Associao dos Bancos no Estado do Rio Grande do Sul\n");
                    printf("Institution number: 328\n");
                    printf("Transit number: 20012\n");
                    printf("Account number: 3010400614\n");
                    printf("\n");
                    printf("For donations in Australian Dollar\n"); 
                    printf("\n");
                    printf("Bank: Standard Chartered Bank - Frankfurt\n");
                    printf("Swift: SCBLDEFX\n");
                    printf("Account number: 500365503\n");
                    printf("Beneficiary bank: Banco Topazio S/A\n");
                    printf("Swift: TOPZBRRSXXX\n");
                    printf("Beneficiary name: Associao dos Bancos no Estado do Rio Grande do Sul\n");
                    printf("Address: Rua Andradas, 1234 17 ANDAR - Centro - Porto Alegre/RS - CEP: 90020008\n");    
                    printf("CNPJ: 92.958.800/0001-38\n");
                    printf("IBAN: BR9007679404000009295880038C1\n");
                    printf("\n");
                    printf("For donations in Japanese Yen\n");      
                    printf("\n");
                    printf("Bank: Standard Chartered Bank - Frankfurt\n");
                    printf("Swift: SCBLDEFX\n");
                    printf("Account number: 500365301\n");
                    printf("Beneficiary bank: Banco Topazio S/A\n");
                    printf("Swift: TOPZBRRSXXX\n");
                    printf("Beneficiary name: Associao dos Bancos no Estado do Rio Grande do Sul\n");
                    printf("Address: Rua Andradas, 1234 17 ANDAR - Centro - Porto Alegre/RS - CEP: 90020008\n");    
                    printf("CNPJ: 92.958.800/0001-38\n");
                    printf("IBAN: BR9007679404000009295880038C1\n");
                    printf("\n");
                    printf("For donation in Swiss Franc\n");        
                    printf("\n");
                    printf("Bank: Standard Chartered Bank - Frankfurt\n");
                    printf("Swift: SCBLDEFX\n");
                    printf("Account number: 500365402\n");
                    printf("Beneficiary bank: Banco Topazio S/A\n");
                    printf("Swift: TOPZBRRSXXX\n");
                    printf("Beneficiary name: Associao dos Bancos no Estado do Rio Grande do Sul\n");
                    printf("Address: Rua Andradas, 1234 17 ANDAR - Centro - Porto Alegre/RS - CEP: 90020008\n");    
                    printf("CNPJ: 92.958.800/0001-38\n");
                    printf("IBAN: BR9007679404000009295880038C1\n");
                    digitePraSair();
                    break;
                    }else{printf("Opcão inválida, digite novamente: ");}

                }
            break;
            

        }else if(opcao == 2){
        printf("\nEnvie sua doacao para o Centro Logístico da Defesa Civil Estadual.\n"); 
        printf("Endereço:\n");
        printf("Avenida Joaquim Porto Villanova, 101, bairro Jardim Carvalho  Porto Alegre.\n");
        printf("Telefone: (51) 3210 4255. Horário de funcionamento: das 8h30 as 17h, de segunda a sexta-feira.\n");
        printf("\n");
        printf("O que doar:\n");
        printf("\n");
        printf("Os estoques de agua mineral ja estao plenamente atendidos no momento. Substitua sua doacao por alguns dos outros itens solicitados.\n");
        printf("\n");
        printf("Prioridades:\n");
        printf("\n");
        printf("- Cobertores\n");
        printf("- Roupas intimas novas (masculinas e femininas)\n");
        printf("- Meias\n");
        printf("- Água sanitária\n");
        printf("- Sabão em pó\n");
        printf("- Escova e pasta de dente\n");
        printf("- Desodorante\n");
        printf("- Xampu\n");
        printf("\n");
        printf("--- Kits de limpeza ---\n");
        printf("\n");
        printf("- Um litro de desinfetante\n");
        printf("- 500 ml de detergente lquido\n");
        printf("- Esponjas\n");
        printf("- Panos de limpeza\n");
        printf("\n");
        printf("--- Kits de higiene pessoal ---\n");
        printf("\n");
        printf("- Um pacote de absorventes femininos\n");
        printf("- Aparelho de barbear\n");
        printf("- Quatro rolos de papel higinico\n");
        printf("- Repelente\n");
        printf("- Álcool gel\n");
        printf("- Itens de limpeza\n");
        printf("\n");
        printf("- Luvas\n");
        printf("- Botas de borracha\n");
        printf("- Baldes\n");
        printf("- Panos\n");
        printf("- Vassouras (com cabo)\n");
        printf("- Rodos (com cabo)\n");
        printf("- Escova de limpeza\n");
        printf("O ideal  realizar a entrega do kit pronto, pois isso dispensa as etapas de triagem e montagem, agilizando o repasse do material s comunidades em vulnerabilidade.\n");
        printf("\n");
        printf("--- Outros itens ---\n");
        printf("\n");
        printf("- Colchões (novos ou em bom estado)\n");
        printf("- Roupa de cama\n");
        printf("- Roupa de banho\n");
        printf("- Cobertores\n");
        printf("- Cestas bsicas fechadas\n");
        printf("- Fraldas infantis e geritricas\n");
        printf("\n");
        printf("--- Itens da cesta básica para atendimento aos afetados pelas enchentes ---\n");
        printf("\n");
        printf("- Arroz\n");
        printf("- Feijão\n");
        printf("- Macarrão\n");
        printf("- Açúcar\n");
        printf("- Farinha de trigo\n");
        printf("- Café\n");
        printf("- Sal\n");
        printf("- Óleo\n");
        printf("- Biscoito\n");
        printf("- Achocolatado\n");
        printf("- Leite em pó\n");
        printf("- Enlatados (atum, sardinha, legumes)\n");
        printf("\n");
        printf("--- No estão sendo recebidos ---\n");
        printf("\n");
        printf("- Roupas e calçados\n");
        printf("- Medicamentos\n");
        printf("As doações podem ser feitas por organizaes no governamentais (ONGs), laboratrios farmacuticos, distribuidoras de medicamentos e municpios\n");
        printf("Os itens para doação devem ser informados pelo e-mail doacoes-medicamentos@saude.rs.gov.br, especificando: quantidade, apresentação, lote e validade (que deve ser superior a três meses).\n");
        printf("Os municpios interessados em doar medicamentos devem acessar a lista de disponibilidade de doao de medicamentos, fazer o download do arquivo, preench-lo e enviar por e-mail.\n");
        printf("J os municpios que necessitam de doaes devem acessar o formulrio de necessidade de medicamentos do componente bsico e preencher as informaes necessrias, enviando depois por e-mail.\n");
        printf("No so aceitas, neste momento, doaes de medicamentos de pessoas fsicas\n");
        printf("Marmitas\n");
        printf("Os interessados em contribuir com refeições prontas (marmitas) devero fazer contato prvio com a Defesa Civil do municpio que pretendem ajudar para ajuste.\n");
        printf("\n");
        printf("Empresas e grupos\n");
        printf("Empresas, grupos de servio e organizaes que desejarem enviar doaes devero contatar previamente a Defesa Civil do Estado no telefone (51) 3120-4255 para tratativas envolvendo a logstica do material.\n");
        printf("\n");
        printf("Também é possível buscar informações sobre doações com as prefeituras e defesas civis municipais.\n");
        printf("\n");
        printf("Outro local de doação: Planalto Médio\n");
        printf("Endereço:\n");
        printf("Centro Regional de Doações - Passo Fundo\n");
        printf("ERS 324 - bairro Valinhos\n");
        printf("Horário: das 8h às 18h\n");
        printf("\n");
        printf("O que doar:\n");
        printf("\n");
        printf("- Alimentos no perecíveis\n");
        printf("- Produtos de limpeza\n");
        printf("- Itens de higiene (fraldas, escova de dentes, shampoo)\n");
        printf("Mais informações no site sosenchentes.rs.gov.br");
        digitePraSair();
        break;
        
        }else{ printf("Opcão inválida, digite novamente: ");
        
        }

    }
}

#endif
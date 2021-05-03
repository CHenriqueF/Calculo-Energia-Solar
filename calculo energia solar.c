#include <stdio.h>

#include <locale.h>
/* CALCULO PARA ENERGIA SOLAR
- KW pode ser encontrado na sua conta de luz, forne�a o valor MAIS ALTO dos ultimo 12 meses;
- Escolha um das quatro op��es de potencia para seus paineis solares.
- Como conseguir o indice de irradia��o solar: 
- 1� voc� precisa da latitude e longitude, digite seu endere�o no google e ache sua casa.
- clique com o bot�o direito e escolha "O que h� aqui?/What's here?" e guarde a latitude e longitude 
- 2� Entre nesse link do site do CRESESB - Centro de referencia para energias solar e E�lica Sergio de S. Brito
- http://www.cresesb.cepel.br/index.php#data 
- na esquerda clique em "Potencial energetico" e depois "Potencial Solar"
- Digite a Latitude e longitude em seus respectivo locais e colete o MENOR valor m�dio.
- Agora que voc� j� reuniu toda a informa��o necessaria, voc� est� pronto para iniciar o programa.*/

int main()
{
    int quantidadeplacas;
    float w,kw,kwp,area,Irradsolar;
    setlocale (LC_ALL, "Portuguese");

//user input
    printf("Digite o valor em KW da sua maior conta de luz:\n");
    scanf("%f",&kw);
    
    printf("Digite a potencia em W para os seus paineis fotovoltacois: [300w-330w-400w-430w]\n");
    scanf("%f",&w);

    printf("Digite o valor da irradia��o solar da sua cidade:\n");
    scanf("%f",&Irradsolar);

    
//formulas
    
    kwp=((((kw/30)/Irradsolar)*1.30));
    quantidadeplacas=((((kw/30)/Irradsolar)*1.30)*1000)/w;
    if (w==300)
        area=(((1.95*0.95)*quantidadeplacas)*1.10);
        else if (w==330)
            area=(((1.95*0.95)*quantidadeplacas)*1.10);
            else if(w==400)
                area=(((1.98*1.0)*quantidadeplacas)*1.10);
                else if(w==430)
                    area=(((2.11*1.05)*quantidadeplacas)*1.10);
//output

    printf("Seu KW/P foi de %.2f.\n",kwp);
    printf("%i paineis ser�o necessarios, de acordo com a potencia %.0fW inserida.\n",quantidadeplacas,w);
    printf("A area necessaria ser� de %.2fm�.",area);

    return 0;
}
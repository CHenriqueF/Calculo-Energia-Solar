#include <stdio.h>

#include <locale.h>
/* CALCULO PARA ENERGIA SOLAR
- KW pode ser encontrado na sua conta de luz, forneça o valor MAIS ALTO dos ultimo 12 meses;
- Escolha um das quatro opções de potencia para seus paineis solares.
- Como conseguir o indice de irradiação solar: 
- 1° você precisa da latitude e longitude, digite seu endereço no google e ache sua casa.
- clique com o botão direito e escolha "O que há aqui?/What's here?" e guarde a latitude e longitude 
- 2° Entre nesse link do site do CRESESB - Centro de referencia para energias solar e Eólica Sergio de S. Brito
- http://www.cresesb.cepel.br/index.php#data 
- na esquerda clique em "Potencial energetico" e depois "Potencial Solar"
- Digite a Latitude e longitude em seus respectivo locais e colete o MENOR valor médio.
- Agora que você já reuniu toda a informação necessaria, você está pronto para iniciar o programa.*/

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

    printf("Digite o valor da irradiação solar da sua cidade:\n");
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
    printf("%i paineis serão necessarios, de acordo com a potencia %.0fW inserida.\n",quantidadeplacas,w);
    printf("A area necessaria será de %.2fm².",area);

    return 0;
}
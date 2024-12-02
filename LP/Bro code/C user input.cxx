#include<stdio.h>
#include <string.h>
int main()
{  
   //BroCode
char name[25];  //25bytes
int age;
 printf("What's your name? \n");
 // scanf("%s",&name); so vai funcionar se nao tiver barra de espaço na frase
 // pra usar fgets nao precisa de outra biblioteca, so para tirar 
 fgets(name,25,stdin); //stdin = standart imput // por padrao inclui umanova linha quando aperta enter 
 
 name[strlen(name)-1] = '\0';  // Em C, '\0' é o caractere nulo, usado para indicar o fim de uma string.
  
    
  printf("What's your age? \n");
  scanf("%d",&age);
 
 printf("\n oi %s, suave? ",name);
 printf("\n sua idade é %d anos", age);
      
   /*
	
	char naame [9000] = "Se você está interessado em um caminho de estudos para trabalhar na NASA, o foco vai além de C e C++, pois é uma área que envolve competências multidisciplinares. Aqui estão sugestões de livros e áreas para se aprofundar, cobrindo habilidades essenciais em programação, engenharia de software, física, matemática avançada, e ciência de dados aplicada ao espaço. # 1. **Fundamentos de Programação e Engenharia de Software*Para trabalhar em sistemas críticos e no desenvolvimento de software robusto, que são essenciais em agências como a NASA: **Code Complete* - Steve McConnelUm dos melhores livros para aprender sobre as práticas de engenharia de software. Ele cobre tópicos como design de código limpo, estruturação de código e práticas que são fundamentais em ambientes críticos como o da NASA.Se você está interessado em um caminho de estudos para trabalhar na NASA, o foco vai além de C e C++, pois é uma área que envolve competências multidisciplinares. Aqui estão sugestões de livros e áreas para se aprofundar, cobrindo habilidades essenciais em programação, engenharia de software, física, matemática avançada, e ciência de dados aplicada ao espaço. # 1. **Fundamentos de Programação e Engenharia de Software*Para trabalhar em sistemas críticos e no desenvolvimento de software robusto, que são essenciais em agências como a NASA: **Code Complete* - Steve McConnelUm dos melhores livros para aprender sobre as práticas de engenharia de software. Ele cobre tópicos como design de código limpo, estruturação de código e práticas que são fundamentais em ambientes críticos como o da NASA.Se você está interessado em um caminho de estudos para trabalhar na NASA, o foco vai além de C e C++, pois é uma área que envolve competências multidisciplinares. Aqui estão sugestões de livros e áreas para se aprofundar, cobrindo habilidades essenciais em programação, engenharia de software, física, matemática avançada, e ciência de dados aplicada ao espaço. # 1. **Fundamentos de Programação e Engenharia de Software*Para trabalhar em sistemas críticos e no desenvolvimento de software robusto, que são essenciais em agências como a NASA: **Code Complete* - Steve McConnelUm dos melhores livros para aprender sobre as práticas de engenharia de software. Ele cobre tópicos como design de código limpo, estruturação de código e práticas que são fundamentais em ambientes críticos como o da NASA.Se você está interessado em um caminho de estudos para trabalhar na NASA, o foco vai além de C e C++, pois é uma área que envolve competências multidisciplinares. Aqui estão sugestões de livros e áreas para se aprofundar, cobrindo habilidades essenciais em programação, engenharia de software, física, matemática avançada, e ciência de dados aplicada ao espaço. # 1. **Fundamentos de Programação e Engenharia de Software*Para trabalhar em sistemas críticos e no desenvolvimento de software robusto, que são essenciais em agências como a NASA: **Code Complete* - Steve McConnelUm dos melhores livros para aprender sobre as práticas de engenharia de software. Ele cobre tópicos como design de código limpo, estruturação de código e práticas que são fundamentais em ambientes críticos como o da NASA." ;
       char x = 'x';
	
			
   printf("%lu \n", sizeof(naame));  // byte
   printf("%lu \n", sizeof(naame)*8);  // bit
   
   printf("%lu\n", sizeof(x));  // byte */
 
   
return 0;
}
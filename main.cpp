#include <iostream>

int main() {
    // Declaração das variáveis
    char nome[100];
    int idade;
    char materiaIngles[30];
    char materiaPortugues[30];
    char materiaFisica[30];
    float nota1;
    float nota2;
    float media;
    
    // Entrada de dados
    std::cout << "Nome: ";
    std::cin.getline(nome, 100);
    
    std::cout << "Matéria de Inglês: ";
    std::cin.getline(materiaIngles, 30);
    
    std::cout << "Matéria de Português: ";
    std::cin.getline(materiaPortugues, 30);
    
    std::cout << "Matéria de Física: ";
    std::cin.getline(materiaFisica, 30);
    
    std::cout << "Idade: ";
    std::cin >> idade;
    
    std::cout << "Insira a nota 1: ";
    std::cin >> nota1;
    
    std::cout << "Insira a nota 2: ";
    std::cin >> nota2;
    
    // Cálculo da média
    media = (nota1 + nota2) / 2;
    
    // Saída formatada dos resultados
    std::cout << "\nResultados:" << std::endl;
    std::cout << "Nome: " << nome << std::endl;
    std::cout << "Idade: " << idade << std::endl;
    std::cout << "Matérias:" << std::endl;
    std::cout << "- Inglês: " << materiaIngles << std::endl;
    std::cout << "- Português: " << materiaPortugues << std::endl;
    std::cout << "- Física: " << materiaFisica << std::endl;
    std::cout << "Notas:" << std::endl;
    std::cout << "- Nota 1: " << nota1 << std::endl;
    std::cout << "- Nota 2: " << nota2 << std::endl;
    std::cout << "Média: " << media << std::endl;

    return 0;
}

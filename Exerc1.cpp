#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;

void exerc1() {
    int notaLab = 0, avSemestral = 0, exameFinal = 0, mediaPonderada = 0, pesoNotaLab = 2, pesoAvSemestral = 3, pesoExameFinal = 5;
    cout << "Informe a nota de Laboratorio: ";
    cin >> notaLab;
    cout << "Informe a nota da Avaliacao Semestral: ";
    cin >> avSemestral;
    cout << "Informe a nota do Exame Final: ";
    cin >> exameFinal;
    mediaPonderada = ((notaLab * pesoNotaLab) + (avSemestral * pesoAvSemestral) + (exameFinal * pesoExameFinal)) / (pesoNotaLab + pesoAvSemestral + pesoExameFinal);

    if (mediaPonderada < 5) {
        cout << "Conceito do aluno: E -> media final: " << mediaPonderada << endl;
    }
    else if (mediaPonderada >= 5 && mediaPonderada < 6) {
        cout << "Conceito do aluno: D -> media final: " << mediaPonderada << endl;
    }
    else if (mediaPonderada >= 6 && mediaPonderada < 7) {
        cout << "Conceito do aluno: C -> media final: " << mediaPonderada << endl;
    }
    else if (mediaPonderada >= 7 && mediaPonderada < 8) {
        cout << "Conceito do aluno: B -> media final: " << mediaPonderada << endl;
    }
    else if (mediaPonderada >= 8 && mediaPonderada <= 10) {
        cout << "Conceito do aluno: A -> media final: " << mediaPonderada << endl;
    }
    else {
        cout << "Notas invalidas, tente novamente.";
    }
}

void exerc2() {
    string nome;
    float peso = 0.0, altura = 0.0, imc = 0.0;
    cout << "Informe o seu nome: ";
    cin >> nome;
    cout << "Informe a sua altura: ";
    cin >> altura;
    cout << "Informe o seu peso: ";
    cin >> peso;
    imc = ((peso / pow(altura, 2)));

    if (imc <= 18.5) {
        cout << "Olá " << nome << "! O seu IMC e: " << imc << "->Magreza";
    }
    else if (imc > 18.5 && imc <= 24.9) {
        cout << "Olá " << nome << "! O seu IMC e: " << imc << " -> Peso Normal";
    } 
    else if (imc > 24.9 && imc <= 29.9) {
        cout << "Olá " << nome << "! O seu IMC e: " << imc << " -> Sobrepeso";
    }
    else if (imc > 29.9 && imc <= 34.9) {
        cout << "Olá " << nome << "! O seu IMC e: " << imc << " -> Obesidade Grau 1";
    } 
    else if (imc > 34.9 && imc < 39.9) {
        cout << "Olá " << nome << "! O seu IMC e: " << imc << " -> Obesidade Grau 2";
    }
    else if (imc > 39.9) {
        cout << "Olá " << nome << "! O seu IMC e: " << imc << " -> Obesidade Grau 3";
    }


}
int main()
{
  
}


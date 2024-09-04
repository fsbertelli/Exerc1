void exerc1() {
    float nHorasExtras, nHorasFaltas, H, premio = 0;
    cout << "Digite o numero de horas extras em minutos: " << endl;
    cin >> nHorasExtras;
    cout << "Digite o numero de horas faltas em minutos: " << endl;
    cin >> nHorasFaltas;

    //   cout << H;
    //H = (H / 60);
    //   cout << H;
    if (H >= 2400) {
        premio = 500;
        cout << "Foram computados " << nHorasExtras << " minutos trabalhados e " << nHorasFaltas << " minutos em faltas. Premio a receber: R$ " << premio << "." << " Horas Extras: " << (nHorasExtras / 60) << " horas. Horas Faltas : " << (nHorasFaltas / 60) << "horas. " << endl;
    }
    else if (H >= 1800 && H < 2400) {
        premio = 400;
        cout << "Foram computados " << nHorasExtras << " minutos trabalhados e " << nHorasFaltas << " minutos em faltas. Premio a receber: R$ " << premio << "." << " Horas Extras: " << (nHorasExtras / 60) << " horas. Horas Faltas : " << (nHorasFaltas / 60) << "horas. " << endl;
    }
    else if (H >= 1200 && H < 1800) {
        premio = 300;
        cout << "Foram computados " << nHorasExtras << " minutos trabalhados e " << nHorasFaltas << " minutos em faltas. Premio a receber: R$ " << premio << "." << " Horas Extras: " << (nHorasExtras / 60) << " horas. Horas Faltas : " << (nHorasFaltas / 60) << "horas. " << endl;
    }
    else if (H >= 600 && H < 1200) {
        premio = 200;
        cout << "Foram computados " << nHorasExtras << " minutos trabalhados e " << nHorasFaltas << " minutos em faltas. Premio a receber: R$ " << premio << "." << " Horas Extras: " << (nHorasExtras / 60) << " horas. Horas Faltas : " << (nHorasFaltas / 60) << "horas. " << endl;
    }
    else if (H < 600) {
        premio = 100;
        cout << "Foram computados " << nHorasExtras << " minutos trabalhados e " << nHorasFaltas << " minutos em faltas. Premio a receber: R$ " << premio << "." << " Horas Extras: " << (nHorasExtras / 60) << " horas. Horas Faltas : " << (nHorasFaltas / 60) << "horas. " << endl;
    }
    else {
        cout << "Valor invalido. Tente novamente" << endl;
    }
}

void exerc2() {
    double salarioMinimo, horasTrabalhadas, horasExtras, sBruto, sLiquido, gratificacao;
    int nDependentes;

    cout << "Informe o salario minimo: ";
    cin >> salarioMinimo;
    cout << "Informe a quantidade de horas trabalhadas: ";
    cin >> horasTrabalhadas;
    cout << "Informe o numero de dependentes: ";
    cin >> nDependentes;
    cout << "Informe a quantidade de horas extras trabalhadas: ";
    cin >> horasExtras;

    float vHoraTrabalhada = (salarioMinimo * (1.0 / 5.0));
    float salarioMes = (horasTrabalhadas * vHoraTrabalhada);
    if (nDependentes > 0) {
        salarioMes = salarioMes + (nDependentes * 32);
    }
    if (horasExtras > 0) {
        vHoraTrabalhada = vHoraTrabalhada * 1.5;
    }
    sBruto = salarioMes + vHoraTrabalhada;

    if (sBruto < 200.0) {
        sLiquido = sBruto;
        cout << "Valor do salario liquido: R$ " << sLiquido << endl;
    }
    else if (sBruto >= 200.0 && sBruto < 500.0) {
        sLiquido = (sBruto * 0.10) + sBruto;
        cout << "Valor do salario liquido: R$ " << sLiquido << endl;
    }
    else if (sBruto > 500) {
        sLiquido = (sBruto * 0.20) + sBruto;
        cout << "Valor do salario liquido: R$ " << sLiquido << endl;
    }
    if (sLiquido < 350.0) {
        gratificacao = 100.0;
        cout << "Gratificacao: R$ " << gratificacao << endl;
        cout << "Salario total a receber: R$ " << (sLiquido + gratificacao) << endl;
    }
    else if (sLiquido > 350.0) {
        gratificacao = 50.0;
        cout << "Gratificacao: R$ " << gratificacao << endl;
        cout << "Salario total a receber: R$ " << (sLiquido + gratificacao) << endl;
    }
}
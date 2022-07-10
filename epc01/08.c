#include <stdio.h>
int soma_dias(int mes, int ano)
{
	int total = 0;
	switch(mes)
	{
	case 1:
		total = total + 31;
		break;
	case 2:
		if((ano % 4 == 0) && ((ano % 100 != 0) || (ano % 400 == 0)))
		{
			total = total + 29;
		}
		else
		{
			total = total + 28;
		}
		break;
	case 3:
		total = total + 31;
		break;
	case 4:
		total = total + 30;
		break;
	case 5:
		total = total + 31;
		break;
	case 6:
		total = total + 30;
		break;
	case 7:
		total = total + 31;
		break;
	case 8:
		total = total + 31;
		break;
	case 9:
		total = total + 30;
		break;
	case 10:
		total = total + 31;
		break;
	case 11:
		total = total + 30;
		break;
	case 12:
		total = total + 31;
		break;
	default:
		break;
	}
	return total;
}
int soma_dias_d(int dias, int mes, int ano)
{
	int total = 0;
	switch(mes)
	{
	case 1:
		total = total + 31 - dias;
		break;
	case 2:
		if(ano % 4 == 0)
		{
			total = total + 29 - dias;
		}
		else
		{
			total = total + 28 - dias;
		}
		break;
	case 3:
		total = total + 31 - dias;
		break;
	case 4:
		total = total + 30 - dias;
		break;
	case 5:
		total = total + 31 - dias;
		break;
	case 6:
		total = total + 30 - dias;
		break;
	case 7:
		total = total + 31 - dias;
		break;
	case 8:
		total = total + 31 - dias;
		break;
	case 9:
		total = total + 30 - dias;
		break;
	case 10:
		total = total + 31 - dias;
		break;
	case 11:
		total = total + 30 - dias;
		break;
	case 12:
		total = total + 31 - dias;
		break;
	default:
		break;
	}
	return total;
}
int main(int argc, char** argv)
{
	int total = 0, i;
	int dia_f, mes_f, ano_f;
	int dia_i, mes_i, ano_i;
	printf("Digite a data inicial:\n");
	printf("Dia: ");
	scanf("%i", &dia_i);
	printf("Mes: ");
	scanf("%i", &mes_i);
	printf("Ano: ");
	scanf("%i", &ano_i);
	printf("Agora digite a data final:\n");
	printf("Dia: ");
	scanf("%i", &dia_f);
	printf("Mes: ");
	scanf("%i", &mes_f);
	printf("Ano: ");
	scanf("%i", &ano_f);
	if(dia_i != dia_f || mes_i != mes_f || ano_i != ano_f)
	{
		if(ano_f - ano_i == 1 && mes_f == mes_i && dia_f == dia_i)
		{
			if(ano_f % 4 == 0)
			{
				total = total + 366;
			}
			else
			{
				total = total + 365;
			}

		} // gambiarra para dias do tipo 12/12/12 12/12/13
		else
		{

			if(mes_i == mes_f && ano_i == ano_f)
			{
				total = total + (dia_f - dia_i);
			} // soma para dias do mesmo ano e mesmo mes
			else
			{
				total = total + soma_dias_d(dia_i, mes_i, ano_i);
				total = total + dia_f;
				while(mes_i != 13)
				{
					total = total + soma_dias(mes_i + 1, ano_i);
					mes_i++;
				}
				while(mes_f != 0)
				{
					total = total + soma_dias(mes_f - 1, ano_f);
					mes_f--;
				}
			} // somas as pontas dos entre anos
			if(ano_i - 1 - ano_f != 0)
			{
				for(i = ano_i + 1; i < ano_f; i++)
				{
					if(i % 4 == 0)
					{
						total = total + 366;
					}
					else
					{
						total = total + 365;
					}
				}

			} // soma entre anos
		}
	}
	printf("O total de dias e: %i ", total);
	return 0;
}

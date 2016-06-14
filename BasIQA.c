#include <stdio.h>
#include <math.h>

int main (void){
	double q1, q2, q3, q4, q5, q6, q7, q8, q9, IQA, o2, CF, DBO, DT, FT, NT, pH, ST, TU;
	printf("O2:");
	scanf("%lf", &o2);
			if (o2 == 140){
		q9 = 47;
	}	else {
	q9 = 100.8 * exp(pow(o2 + (-106), 2) / -3745);
	}
	printf("CF:");
	scanf("%lf", &CF);
			if (CF > 100000){
		q1 = 3.0;
	} 	else {
		q1 = 98.03 + (-36.45 * log(CF)) + (3.138 * pow(log10(CF), 2)) + (0.06776 * pow(log10(CF), 3));
	}
	printf("pH:");
	scanf("%lf", &pH);
			if (pH > 12){
		q2 = 3.0;
	}		if (pH < 2){
		q2 = 2.0;
	}	else {
		q2 = 0.05421 * pow(pH, (1.23 * pH) + (-0.09873 * pow(pH, 2))) + 5.213;
	}
	printf("DBO:");
	scanf("%lf", &DBO);
			if (DBO > 30){
		q3 = 2.0;
	}	else {
		q3 = 102.6 * exp(-0.01101*DBO);
	}
	printf("NT:");
	scanf("%lf", &NT);
			if (NT > 100){
				q4 = 1.0;
	} 	else {
		q4 = 98.96 * pow(NT, (-0.2232) + (-0.006457) * NT);
	}
	printf("FT:");
	scanf("%lf", &FT); 
			if (FT > 10){
				q5 = 1.0;
	}	else {
		q5 = 213.7 * exp(-1.680 * pow(FT, 0.3325));
	}
	printf("DT:");
	scanf("%lf", &DT) ;
			if (DT > 15){
				q6 = 9.0;
	} 	else {
		q6 = 1 / (0.0003869 * pow(DT + 0.1815, 2) + 0.01081);
	} 
	printf("TU:");
	scanf("%lf", &TU);
			if (TU > 100){
				q7 = 5.0;
	}	else {
		q7 = 97.34 * exp(-0.01139 * TU) + (-0.04917 * sqrt(TU));
	}
	printf("ST:");
	scanf("%lf", &ST);
			if (ST > 500){
				q8 = 32.0;
	}	else {
		q8 = 80.26 * exp(-0.00107 * ST) + (0.03009 * sqrt(ST) + (-0.1185 * ST));
	}

	IQA = pow(q9, 0.17) * pow(q1, 0.15) * pow(q2, 0.12) * pow(q3, 0.10) * pow(q4, 0.10) * pow(q5, 0.10) * pow(q6, 0.1) * pow(q7, 0.08) * pow(q8, 0.08);
	if (IQA > 79 && IQA <= 100){
		printf("%lf  = Qualidade Otima!\n", IQA);
} 	if (IQA > 50 && IQA <= 79){
		printf("%lf  = Qualidade Boa!\n", IQA);
}	if (IQA > 36 && IQA <= 50){
		printf("%lf  = Qualidade Aceitável\n", IQA);
}	if (IQA > 19 && IQA <= 36){
		printf("%lf  = Qualidade Ruim\n", IQA);
}	if (IQA > 0 && IQA <= 19){
		printf("%lf  = Qualidade Péssima\n", IQA);
}
	return 0;
	
}

#include <stdio.h>
 
main() {
    float valor, m1, m50, m25, m10, m5, m01;
    int q100, q50, q20, q10, q5, q2;
    scanf("%f", &valor);
	
	q100 = valor/100;
	valor = valor - (q100*100);
    
    q50 = (valor%100)/50;
    valor = valor - (q50*50);
    
    q20 = valor/20;
    valor = valor - (q20*20);
    
    q10 = valor/10;
    valor = valor -(q10*10);
    
    q5 = valor/5;
    valor = valor - (q5*5);
    
    q2 = valor/2;
    valor = valor - (q2*2);
    
    m1 = valor/1;
    valor = valor - (m1*1);
    
    m50 = valor/0.50;
    valor = valor - (m50*0.50);
    
    m25 = valor/0.25;
    valor = valor - (m25*0.25);
    
    m10 = valor/0.10;
    valor = valor - (m10*0.10);
    
    m5 = valor/0.05;
    valor = valor - (m5*0.05);
    
    m01 = valor/0.01;
    valor = valor - (m01*0.01);
    
    printf ("NOTAS:\n");
    printf ("%d nota(s) de R$ 100.00\n",q100);
    printf ("%d nota(s) de R$ 50.00\n",q50);
    printf ("%d nota(s) de R$ 20.00\n",q20);
    printf ("%d nota(s) de R$ 10.00\n",q10);
    printf ("%d nota(s) de R$ 5.00\n",q5);
    printf ("%d nota(s) de R$ 2.00\n",q2);
    printf ("MOEDAS:\n");
    printf ("%d moeda(s) de R$ 1.00\n",m1);
    printf ("%d moeda(s) de R$ 0.50\n",m50);
    printf ("%d moeda(s) de R$ 0.25\n",m25);
    printf ("%d moeda(s) de R$ 0.10\n",m10);
    printf ("%d moeda(s) de R$ 0.05\n",m5);
    printf ("%d moeda(s) de R$ 0.01\n",m01);
    return 0;
}

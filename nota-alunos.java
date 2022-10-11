import java.util.Scanner;
public class NotasAlunos {
    public static void main(String[] args){
        int soma, acima, abaixo, cont;
        int max = Integer.MAX_VALUE;
        int min = Integer.MIN_VALUE;
        float media;
        cont = 0;
        Scanner sc = new Scanner(System.in); 
        
        do{
            String[] entrada = sc.nextLine().split(" ");
            for(String dadosAlunos : entrada){
                soma += Integer.parseInt(dadosAlunos);   
                cont++; 
            }

            if(Integer.parseInt(dadosAlunos) > max){
                max = Integer.parseInt(dadosAlunos);
            }
            if(Integer.parseInt(dadosAlunos) < min){
                min = Integer.parseInt(dadosAlunos);
            }
            soma += Integer.parseInt(dadosAlunos);
            media = soma/cont;
    
            if(Integer.parseInt(dadosAlunos) >= media){
                acima ++;
            }else{
                abaixo ++;
            } 
        }while(String entrada != "-");
        
            System.out.println("maior:" + max);
            System.out.println("menor:" + min);
            System.out.println("media:" + media);
            System.out.println("acima:" + acima);
            System.out.println("abaixo:" + abaixo);

    }
    }

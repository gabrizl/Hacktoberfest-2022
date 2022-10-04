import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {

        Scanner input = new Scanner(System.in);
        List<Integer> notas = new ArrayList<>();
        List<Integer> notasCopia;
        List<Integer> resultados = new ArrayList<>();
        int numeroCasos, numeroDeNotas;

        numeroCasos = input.nextInt();

        while (0 != numeroCasos--) {
            int cont = 0;

            numeroDeNotas = input.nextInt();

            for (int i = 0; i < numeroDeNotas; i++) {
                notas.add(input.nextInt());
            }

            notasCopia = new ArrayList<Integer>(notas);
            notas.sort(Collections.reverseOrder());

            for (int i = 0; i < notas.size(); i++) {
                if (notas.get(i) == notasCopia.get(i))
                    cont++;
            }

            resultados.add(cont);
            notas.clear();
            notasCopia.clear();
        }

        for (int i = 0; i < resultados.size(); i++) {
            System.out.println(resultados.get(i));
        }

        input.close();
    }

}

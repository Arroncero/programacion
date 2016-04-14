//las applets se suelen invocar desde documentos
//HTML o cualquier otro formato de navegador web

import java. awt. *;

public class EjemploApplet extends javax.swing. JApplet{
    int numero;

//En las applets no hay main, sino que después de la
//clase hay una función init (inicializar variables)

    public void init() {
	numero = 357;
    }

//Y una función paint que dibuja en la pantalla

    public void paint (Graphics screen) {
	Graphics2D screen2D = (Graphics2D) screen;
	screen2D. drawString("La raiz cuadrada de " +
		numero +
		" es " +
		Math. sqrt(numero), 5, 50);
    }
}


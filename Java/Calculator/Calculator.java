
package practicejava;
import java.util.*; 


public class PracticeJava {

    public static int multiply(int x, int y)
    {
	return x*y;
    }


    public static int divide(int x, int y)
    {
	return x/y;
    }

    public static int add(int x, int y)
    {
	return x+y;
    }

    public static int subtract(int x, int y)
    {
	return x - y;
    }
    public static void main(String[] args) {
       char op = 'c';
	int x, y;
	while (op != 'e')
	{
            Scanner scan = new Scanner(System.in); 
            System.out.println("What operation would you like to perform: add(+), subtract(-), divide(/), multiply(*), [e]xit ?"); 
            op = scan.next().charAt(0);;
            switch (op){
                case '+':
                    System.out.print("Enter x: "); 
                    x = scan.nextInt();
                    System.out.print("Enter y: ");
                    y = scan.nextInt();
                    System.out.println(x + " + " + y + " = " + add(x, y));
                break; 
		case '-':
                    System.out.print("Enter x: "); 
                    x = scan.nextInt();
                    System.out.print("Enter y: ");
                    y = scan.nextInt();
                    System.out.println(x + " - " + y + " = " + subtract(x, y));
		break;
		case '/':
                    System.out.print("Enter x: "); 
                    x = scan.nextInt();
                    System.out.print("Enter y: ");
                    y = scan.nextInt();
                    System.out.println(x + " / " + y + " = " + divide(x, y));
		break;
		case '*':
                    System.out.print("Enter x: "); 
                    x = scan.nextInt();
                    System.out.print("Enter y: ");
                    y = scan.nextInt();
                    System.out.println(x + " * " + y + " = " + multiply(x, y));
		break;
		case 'e':
			break;
		default:
                    System.out.println("Sorry, try again");
		}
	}
        
    }
    
}

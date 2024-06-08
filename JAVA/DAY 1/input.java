import java.util.Scanner;

public class input{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Integer input
        System.out.print("Enter an integer: ");
        int intValue = scanner.nextInt();
        System.out.println("You entered: " + intValue);

        // Double input
        System.out.print("Enter a double: ");
        double doubleValue = scanner.nextDouble();
        System.out.println("You entered: " + doubleValue);

        // String input
        System.out.print("Enter a string: ");
        String stringValue = scanner.nextLine();
        System.out.println("You entered: " + stringValue);

        // Character input
        System.out.print("Enter a character: ");
        String charInput = scanner.nextLine();
        char charValue = charInput.charAt(0);
        System.out.println("You entered: " + charValue);

        // Closing the scanner
        scanner.close();
    }
}

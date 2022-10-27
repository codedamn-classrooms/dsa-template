
public class Main {
    public static void main(String args[]) {
        if (args.length == 0) {
            throw new Error("Multiline input argument is missing");
        }
        String multilineInput = args[0];
        String[] inputValues = multilineInput.split("\n");
        System.out.println("lab template " + inputValues.length);
    }
}
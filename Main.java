// Lab Template

public class Main {
    public static void solve(String multilineInput[]) {
        System.out.println("Solve me!");
    }


    public static void main(String args[]) {
        if (args.length == 0) {
            throw new Error("command line args missing");
        }
        String[] multilineInput = args[0].split("\n");
        solve(multilineInput);
    }
}

public class TryCatch {
    public static void main(String[] args) {
        // Try - Catch
        int[] marks = {97,98,95};
        try {
        System.out.println(marks[5]);
        } catch(Exception exception) {
            // do after catching
        }
        System.out.println("The name is Param");

    }
}

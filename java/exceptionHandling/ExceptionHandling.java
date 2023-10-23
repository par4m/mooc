class ExceptionHandling {
    public static void main(String[] args) {
        try {
            int myInt = Integer.parseInt("param");
        } catch (Exception e) {
            System.out.println("Hey dude u cant make an int out of that stop trying to make it happen");
        } finally {

        }
    }
}
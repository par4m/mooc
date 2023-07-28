package Task1;

public class Main {
    public static void main(String[] args) {
        Walking w = new Walking(true, "Nike", 10);
        Running r = new Running(4.5 , "Nike", 11);
        System.out.println(w.goreTex);
        System.out.println(r.weight);
    }
}

import java.util.Arrays;

public class Arra {
    public static void main(String[] args) {

        int a = 30;
        int physics = 97;
        int[] arr = new int[physics]; 
        int[] marks = new int[3];
        marks[0] = 97;
        marks[1] = 98;
        marks[2] = 95;
        System.out.println(marks); // garbage value
        System.out.println(marks[0]);
        System.out.println(marks[1]);
        boolean[] what = new boolean[5];
        System.out.println(what[0]);
        System.out.println(what[1]);

        // length
        System.out.println(marks.length);
        // before sort
        System.out.println(marks[0]);
        // sort
        Arrays.sort(marks);
        //  after sort
        System.out.println(marks[0]);

    }
}

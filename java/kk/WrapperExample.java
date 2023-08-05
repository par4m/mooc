public class WrapperExample {
    public static void main(String[] args) {
        Integer num = 45;
        // int a = 10;
        // int b = 20;
        Integer a = 10;
        Integer b = 20;
        swap(a, b);
        System.out.println(a + " " + b);
        final A kunal = new A("Kunal Kushwaha");
        kunal.name = "other name"; // allowed
        // when a non-primitve is final, u cannot reassign it
        kunal = new A("new object"); // not allowed

    }

    static void swap(Integer a, Integer b) {
        int temp = a;
        a = b;
        b = temp;
    }

}

class A {
    final int num = 10;
    String name;

    A(String name) {
        this.name = name;
    }

    @Override
    protected void finalize() throws Throwable {
        System.out.println("Object is destroyed");
    }

}

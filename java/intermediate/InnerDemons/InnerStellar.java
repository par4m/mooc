package InnerDemons;

class Outside {
    int a = 0;

    static class Inside {
        int b = 5;
    }
}

public class InnerStellar {
    public static void main(String[] args) {
        Outside o = new Outside();
        Outside.Inside i = new Outside.Inside();
        System.out.println(o.a);
        System.out.println(i.b);
    }
}

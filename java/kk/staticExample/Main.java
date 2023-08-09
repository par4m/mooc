package staticExample;

public class Main {
    public static void main(String[] args) {
        Human param = new Human(20, "Param", 100, false);
        Human rahul = new Human(20, "Rahul", 150, true);
        System.out.println(param.population);
        System.out.println(Human.population);
        Main funn = new Main();
        funn.fun2();
    }

    static void fun() {
        Main obj = new Main();
        obj.greeting();
    }

    void fun2() {
        greeting();
    }

    void greeting() {
        System.out.println("hello world");
    }

}

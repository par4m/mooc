package InstanceOfKeyword;

interface Bird2 {
    public void sing();
}

class Eagle2 implements Bird2 {
    public void sing() {
        System.out.println("Singing!");
    }
}

class Bird {

}

class Eagle extends Bird {

}

public class MyObject {
    public static void main(String[] Args) {
        MyObject o = new MyObject();
        Eagle e = new Eagle();
        Eagle2 e2 = new Eagle2();
        System.out.println(o instanceof MyObject);
        System.out.println(e instanceof Bird);
        System.out.println(e2 instanceof Bird2);
    }

}

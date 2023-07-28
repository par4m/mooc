package Polymorphism;

class Bird {
    public void sing() {
        System.out.println("tweet tweet tweet");
    }
}

class Robin extends Bird {
    public void sing() {
        System.out.println("twiddlededee");
    }

}

class Pelican extends Bird {
    public void sing() {
        System.out.println("KWA");
    }
}

public class Poly {
    public static void main(String[] args) {
        Pelican p = new Pelican();
        Robin r = new Robin();
        Bird b = new Bird();
        b.sing();
        r.sing();
        p.sing();

    }
}

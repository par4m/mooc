public class Main {
    public static void main(String[] args) {
    Pen p = new Pen();
    System.out.println(p.color);
    System.out.println(p.point);
    System.out.println(p.type);
    System.out.println(p.clicked);
    p.click();
    System.out.println(p.clicked);

    // Creating Instance of Headphones

    Headphones JBL = new Headphones();
    System.out.println(JBL.charge);
    System.out.println(JBL.color);
    System.out.println(JBL.power);
    System.out.println(JBL.controls[0]);
    JBL.powerOn();
    System.out.println(JBL.power);
    JBL.powerOff();
    System.out.println(JBL.power);
    System.out.println(JBL.volume);
    JBL.volumeUp();
    JBL.volumeUp();
    JBL.volumeUp();
    JBL.volumeDown();
    System.out.println(JBL.volume);
    }
}

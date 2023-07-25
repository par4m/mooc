class Monkey {
    String type = "Spider Monkey";
    public static void SayOoh(){
        System.out.println("OOh Ahh Ahh");
    }
}
public class objArray {
  public static void main(String[] args)    {
    Monkey m1 = new Monkey();
    Monkey m2 = new Monkey();
    Monkey m3 = new Monkey();
    Monkey[] monkeys = {m1,m2};
    for(Monkey m : monkeys) {
        m.SayOoh();
    }
  }
}

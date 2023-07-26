package Abstraction;

interface DogInterface {
  void bark();
  void poop();
}

abstract class Dog
{
 String breed;
 public void bark() {
    System.out.println("Bark!");
 }
 public abstract void Poop();
}

class Chihuahua extends Dog{
  public void Poop() {
    System.out.println("Dog Pooped");
  }
}

public class AbstractTutorial {
  public static void main(String[] args) {
   Chihuahua arav = new Chihuahua();   
    System.out.println(arav.breed);
    arav.bark();
    arav.Poop();
  }
}

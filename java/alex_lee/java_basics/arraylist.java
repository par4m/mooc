import java.util.ArrayList;

public class arraylist {
  public static void main(String[] args)    {
    String[] fruits = new String[4];
    fruits[0] = "Mango";
    fruits[1] = "Apple";
    fruits[2] = "Strawberry";
    fruits[3] = "Watermelon";

    ArrayList fruitList = new ArrayList();

    fruitList.add("mango");
    fruitList.add("Apple");
    fruitList.add("Strawberry");
    System.out.println(fruitList);

    fruitList.add("Watermelon");
  }
}

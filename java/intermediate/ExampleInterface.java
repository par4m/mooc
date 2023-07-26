interface WaterBottleInterface {

    String color = "Blue";
    void fillUp();
    void pourOut();

}

public class ExampleInterface implements WaterBottleInterface {
    public static void main(String[] args) {
        System.out.println(color);
        ExampleInterface ex = new ExampleInterface();
        ex.fillUp();
    }

    @Override
    public void fillUp() {
        // TODO Auto-generated method stub
        System.out.println("It is filled");
    }

    @Override
    public void pourOut() {
        // TODO Auto-generated method stub
        throw new UnsupportedOperationException("Unimplemented method 'pourOut'");
    }
}

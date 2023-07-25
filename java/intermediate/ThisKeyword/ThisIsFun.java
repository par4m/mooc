package ThisKeyword;

public class ThisIsFun {
    int a;
    int b;
    public void setData(int a, int b) {
        this.a = a;
        this.b = b;
    }
    public static void main(String[] args) {
    // setData(4, 3);   
    ThisIsFun thisIs = new ThisIsFun();
    thisIs.setData(4,3);
    System.out.println(thisIs.a);
    System.out.println(thisIs.b);
    }
}
